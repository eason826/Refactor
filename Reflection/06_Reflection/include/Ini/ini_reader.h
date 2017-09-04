#ifndef _ini__
#define _ini__

#include <string>
#include <fstream>
#include <map>
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

using std::string;
using std::fstream;
using std::map;

class ini_reader
{
public:
	ini_reader(void);
	~ini_reader();
public:
	int load_ini( const char* name );
	int save_ini( const char* name );
	int set_value( const char* key, string& val );
	int get_value( const char* key, string& val );
private:
	map<string,string> m_key_val;
};
#endif
