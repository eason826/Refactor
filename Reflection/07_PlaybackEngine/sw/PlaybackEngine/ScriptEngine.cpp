#include "ScriptEngine.h"

ScriptEngine::ScriptEngine()
{
	m_creator = NULL;
}

ScriptEngine::ScriptEngine(void *creator)
{
	m_creator = creator;
}


ScriptEngine& ScriptEngine::getInstance()
{
    static ScriptEngine sLo_engine;
    return sLo_engine ;
}

const char* ScriptEngine::callFunction(string functionName, int argc, vector<string> argv)
{
    map<string, SS_FUNCTION>::const_iterator iter;
    iter = m_funcMap.find(functionName) ;
    if ( iter == m_funcMap.end())
        return NULL;
    else
        return iter->second(argc, argv, m_creator);
}

void ScriptEngine::registerScriptFunctions(SS_ENTRY *table)
{
	int i =0;
	if(table)
	{
		while(table[i].functionName != NULL)
		{
			m_funcMap.insert(pair<string, SS_FUNCTION>(table[i].functionName,table[i].pFunction));
			i++;
		}
	}
}

ScriptEngine::~ScriptEngine()
{

}
