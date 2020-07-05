#include "Debugger.h"
#include <iostream>

using namespace std;

Debugger::Debugger()
{
}

Debugger::~Debugger()
{
}

void Debugger::write(const std::string& note)
{
	cout << note << endl;
}
