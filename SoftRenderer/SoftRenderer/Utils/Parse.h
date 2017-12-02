#ifndef PARSE_H
#define PARSE_H

#include<string>

class Parse
{
public:
	static std::string String(int n);
	static std::string String(float n);

	static int Int(std::string str);
	static float Float(std::string str);

};


#endif // !PARSE_H
