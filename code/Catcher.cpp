#include "Catcher.h"
#include <curl/curl.h>

Catcher::Catcher()
	: curl_(0)
{
	curl_ =	curl_easy_init();
}

Catcher::~Catcher()
{
	curl_easy_cleanup(curl_);
}

//string Catcher::catch(const std::string& url)
//{
//
//}
