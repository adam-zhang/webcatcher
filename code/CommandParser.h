#ifndef __COMMANDPARSER__H
#define __COMMANDPARSER__H

#include <string>

class CommandParser
{
public:
	CommandParser();
	~CommandParser();
public:
	static bool parse(const std::string& url);
};
#endif//__COMMANDPARSER__H
