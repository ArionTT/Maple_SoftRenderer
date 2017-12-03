#include "Logger.h"
#include"Parse.h"
#include<iostream>


Logger::Logger()
{
	AllocConsole();
}

Logger::~Logger()
{
	FreeConsole();
}

void Logger::Init()
{
	//初始化变量
	m_i = 0;
	ConsoleWindow::Initialize();
}

void Logger::Release()
{
	//保存到文件
	//OutputCache("log" + Parse::String(m_i + 1));
	m_logCache.clear();
	ConsoleWindow::Release();
}

void Logger::Show()
{
	ConsoleWindow::Show();
}

void Logger::Hide()
{
	Fresh();
	ConsoleWindow::Hide();
}

void Logger::Fresh()
{
	//保存到文件
	//OutputCache("log" + Parse::String(m_i + 1));
	//清空缓存
	m_logCache.clear();
	m_logCache.resize(CACHE_PRE_SIZE);
}

void Logger::OutputCache(string filename)
{

}

void Logger::LogError(string log)
{
	Log(log, TypeLog::Error);
}

void Logger::LogWarning(string log)
{
	Log(log,TypeLog::Warning);
}

void Logger::LogInfo(string log)
{
	Log(log, TypeLog::Log);
}

void Logger::LogSystem(string log)
{
	Log(log, TypeLog::System);
}

void Logger::Log(string log, TypeLog type)
{
	LogData *data = new LogData();
	data->log = log;
	data->time = DateTime::GetDateTime();
	data->type = type;
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	switch (type)
	{
	case TypeLog::Log:
		data->color = Color(1.0f, 1.0f, 1.0f, 1.0f);  //白色
		SetConsoleTextAttribute(consoleHandle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		break;
	case TypeLog::Warning:
		data->color = Color(1.0f, 0.8f, 0.2f, 1.0f);  //黄色
		SetConsoleTextAttribute(consoleHandle, FOREGROUND_RED | FOREGROUND_GREEN );
		break;
	case TypeLog::Error:
		data->color = Color(1.0f, 0.1f, 0.0f, 1.0f);  //红色
		SetConsoleTextAttribute(consoleHandle, FOREGROUND_RED );
		break;
	case TypeLog::System:
		data->color = Color(0.0f, 0.7f, 1.0f, 1.0f);  //青色
		SetConsoleTextAttribute(consoleHandle, FOREGROUND_GREEN | FOREGROUND_BLUE);
		break;
	default:
		data->color = Color(1.0f, 1.0f, 1.0f, 1.0f);  //白色
		SetConsoleTextAttribute(consoleHandle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		break;
	}

	m_logCache.push_back(data);


	//SetConsoleTextAttribute(consoleHandle, FOREGROUND_GREEN*((int)data->color.g) | FOREGROUND_RED*((int)data->color.r) | FOREGROUND_BLUE*((int)data->color.b));

	string line = '[' + data->time + ']' + "  " + data->log;
	uint32 length = strlen(line.c_str());
	char* buffer = new char[length + 100];
	sprintf_s(buffer,length+100, "%s\n", line.c_str());

	std::cout << buffer;
	delete[] buffer;
}

LogData::LogData()
{
	color.r = color.g = color.b = color.a = 1.0f;
	type = TypeLog::Log;
	time = "1970/1/1 00:00:00";
	log = "_NO_DATA_";
}
