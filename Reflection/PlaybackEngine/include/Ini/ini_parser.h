#ifndef INI_PARSER_H_H
#define INI_PARSER_H_H
#include "ini_reader.h"
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

class ini_parser
{
public:
	ini_parser();
	~ini_parser();
	static vector<string> parse(const char* filename);
private:
	static void int2str(const int &int_temp,string &string_temp);
	static vector<string> param_list;
};
#endif
