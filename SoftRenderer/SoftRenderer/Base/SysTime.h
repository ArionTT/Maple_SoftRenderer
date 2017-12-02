#ifndef SYS_TIME_H
#define SYS_TIME_H

#include<string>
using std::string;

class SysTime
{
public:
	SysTime();
	~SysTime();

public:
	void Init();
	string GetSystemTime();

private:
	string m_sysTime;
};


#endif // !SYS_TIME_H

