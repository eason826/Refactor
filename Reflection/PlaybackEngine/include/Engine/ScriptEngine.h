#ifndef ScriptEngine_H_
#define ScriptEngine_H_

#include <stdlib.h>
#include <assert.h>
#include <map>
#include <iostream>
#include <string>
#include <stdio.h>
#include "ini_parser.h"
#include "MediaPlayer.h"
using namespace std;


#define PARAM_INI	"param.ini"
#define RELEASE(p){if(p){delete p;p=NULL;}}

typedef const char* (*SS_FUNCTION) (int argc, vector<string> argv, void* creator);
typedef struct _tagSS_ENTRY 
{
	char* functionName;
	SS_FUNCTION pFunction;
} SS_ENTRY;

class ScriptEngine{
public:
	ScriptEngine();
	ScriptEngine(void *creator);
	virtual ~ScriptEngine();

	const char* callFunction(string functionName, int argc, vector<string> argv);
	void registerScriptFunctions(SS_ENTRY *table);
	static ScriptEngine& getInstance();
private:
	void *m_creator;
	map<string, SS_FUNCTION> m_funcMap ;
};

class ScriptRegister {
public:
	ScriptRegister(SS_ENTRY *table) 
	{
		ScriptEngine::getInstance().registerScriptFunctions(table);
	}
	~ScriptRegister() {}
};

#define REGISTER_TBL(tableName) ScriptRegister g_creatorRegister##tableName(tableName)

#define DECLARE_FUNC(funcName)\
const char* funcName(int argc, vector<string> argv, void* creator)\
{\
	MediaPlayer *player = (MediaPlayer*)ClassFactory::getInstance().getClassByName(argv[0]);\
	if(player)\
		player->funcName();\
	else\
		cout<<argv[0]<<" Not found!"<<endl;\
	return 0;\
}

const char* load(int argc, vector<string> argv, void* creator);
const char* play(int argc, vector<string> argv, void* creator);
const char* pause(int argc, vector<string> argv, void* creator);

#endif
