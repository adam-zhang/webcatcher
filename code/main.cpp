#include <iostream>
#include "CommandParser.h"

using namespace std;

int main(int argc, char** argv)
{
	if (!CommandParser::parse(argv[1]))
		return -1;
	return 0;
}
