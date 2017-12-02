#ifndef LOG
#define LOG

#include"../Base/SysTime.h"
#include"DateTime.h"
#include"../Base/Color.h"
#include"../System/ConsoleWindow.h"
#include<vector>

using std::vector;


#define CACHE_PRE_SIZE 50 

enum TypeLog
{
	Log=0,
	Warning=1,
	Error=2,
	System,
};

struct LogData
{
	string time;
	TypeLog type;
	Color color;
	string log;
	LogData();
};

class Logger:public ConsoleWindow
{
public:
	Logger();
	~Logger();

public:
	void Init();
	void Release();
	void Show();
	void Hide();
	void Fresh();
	void OutputCache(string filename);

public:
	void LogError(string log);
	void LogWarning(string log);
	void LogInfo(string log);
	void LogSystem(string log);

private:
	void Log(string log, TypeLog type);

private:
	vector<LogData*> m_logCache;
	int m_i;
};


#endif // !LOG

