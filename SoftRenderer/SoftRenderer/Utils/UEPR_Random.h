#include <vector>
#ifndef UNEQUAL_PROBABILITY_RANDOM_H
#define  UNEQUAL_PROBABILITY_RANDOM_H

struct UEPR_PARAM
{
	int min;
	int max;
	int num;
	int *PRSET; //概率表长度 , 数组长度 <=num
};

class UEPR_Random
{
public :
	UEPR_Random(UEPR_PARAM param);

public:
	int UEPR_Rand();

private :
	int m_trueMax;
	int m_trueMin;
	std::vector<int*> m_mapp;
};


#endif // !UNEQUAL_PROBABILITY_RANDOM_H


