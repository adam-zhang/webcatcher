#include "CommandParser.h"
#include <iostream>
#include <boost/algorithm/string.hpp>
#include "Debugger.h"

using namespace std;
using namespace boost;

CommandParser::CommandParser()
{
}

CommandParser::~CommandParser()
{
}

void printUsage()
{
	cout << "Usage:\n"
		"webcatcher url\n";
}

bool CommandParser::parse(const std::string& url)
{
	Debugger::write("url", url);
	if (starts_with(url, "http") || starts_with(url, "https"))
	{
		Debugger::write("Hello here");
		return true;
	}
	printUsage();
	return false;
}
