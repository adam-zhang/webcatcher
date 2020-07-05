#ifndef __DEBUGGER__H
#define __DEBUGGER__H

#include <sstream>

class Debugger
{
public:
	Debugger();
	~Debugger();
public:
	static void write(const std::string& note);

	template<typename T>
	static void write(const std::string& note, const T& value)
	{
		std::stringstream ss;
		ss << note << ":" << value;
		write (ss.str());
	}
};
#endif//__DEBUGGER__H
