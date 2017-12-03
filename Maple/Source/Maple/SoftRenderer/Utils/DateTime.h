#ifndef DATE_TIME_H
#define DATE_TIME_H

#include<ctime>
#include<string>

class DateTime
{
public:
	static std::string GetDateTime()
	{
		time_t t = time(nullptr);
		struct tm time;
		localtime_s(&time, &t);
		char strTime[sizeof("yyyy/mm/dd  hh:mm:ss")] = { "\0" };
		std::strftime(strTime, sizeof(strTime), "%Y/%m/%d %H:%M:%S", &time);
		return strTime;
	}
};


#endif // !DATE_TIME_H

