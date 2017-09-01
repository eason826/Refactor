#include "MediaPlayer.h"

ClassFactory& ClassFactory::getInstance()
{
    static ClassFactory sLo_factory;  
    return sLo_factory ;  
}  

void* ClassFactory::getClassByName(string className)
{  
    map<string, pCreateObject>::const_iterator iter;  
    iter = m_classMap.find(className) ;  
    if ( iter == m_classMap.end() )  
        return NULL ;  
    else  
        return iter->second() ;  
}  

void ClassFactory::registClass(string name, pCreateObject method)
{  
    m_classMap.insert(pair<string, pCreateObject>(name, method)) ;  
}  
