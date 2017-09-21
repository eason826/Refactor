#include "PlaybackEngine.h"


int main()
{
	PlaybackEngine *m_scriptEngine=new PlaybackEngine;
	vector<string> param = ini_parser::parse(PARAM_INI);
    	vector<string> p_list;
	string funcName;	
	for(int i=0;i<param.size();i++)
	{
    		istringstream ss(param[i]);
    		string word;
   		while(ss>>word)
        		p_list.push_back(word);
		funcName = p_list[0];
		p_list.erase(p_list.begin());
		m_scriptEngine->callFunction(funcName,p_list.size(),p_list);
		p_list.clear();	
	}

	RELEASE(m_scriptEngine);
	return 0;
}
