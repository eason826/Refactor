#ifndef INI_PARSER_H_H
#define INI_PARSER_H_H
#include "ini_reader.h"
#include <sstream>

class ini_parser
{
public:
	static string parse(const char* filename);
private:
	static void int2str(const int &int_temp,string &string_temp);

};
#endif
