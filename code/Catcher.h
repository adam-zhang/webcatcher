#ifndef __CATCHER__H
#define __CATCHER__H

#include <string>
#include <memory>
#include <curl/curl.h>

class Catcher
{
public:
	Catcher();
	~Catcher();
private:
	std::string catchPage(const std::string& url);
private:
	CURL* curl_;
};
#endif//__CATCHER__H
