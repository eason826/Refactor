#ifndef CLASS_REGISTER_H_H
#define CLASS_REGISTER_H_H

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
    RegisterAction(string className,pCreateObject ptrCreateFn);
};

#define REGISTER(className)                                             \
    className* objectCreator##className(){                              \
        return new className;                                           \
    }                                                                   \
    RegisterAction g_creatorRegister##className(                        \
        #className,(pCreateObject)objectCreator##className)

#endif
