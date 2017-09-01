#ifndef MEDIAPLAYER_H__
#define MEDIAPLAYER_H__

#include <map>
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

typedef void* (*pCreateObject)(void); 

class ClassFactory
{
private:  
    map<string, pCreateObject> m_classMap ;  
    ClassFactory(){};

public:   
    void* getClassByName(string className);  
    void registClass(string name, pCreateObject method) ;  
    static ClassFactory& getInstance() ;  
};

class RegisterAction
{
public:
    RegisterAction(string className,pCreateObject ptrCreateFn){
        ClassFactory::getInstance().registClass(className,ptrCreateFn);
    }
};

#define REGISTER(className)                                             \
    className* objectCreator##className(){                              \
        return new className;                                           \
    }                                                                   \
    RegisterAction g_creatorRegister##className(                        \
        #className,(pCreateObject)objectCreator##className)

class MediaPlayer
{
public:
	virtual void play()=0;
};

#endif
