#include "UEPR_Random.h"
#include <cstdlib>


UEPR_Random::UEPR_Random(UEPR_PARAM param)
{
	int len = sizeof(*(param.PRSET)) / sizeof(int);

	if (param.num < len)
	{
		return;
	}

	m_mapp.resize(len);
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += param.PRSET[i];

	}
}

int UEPR_Random::UEPR_Rand()
{


	return 0;
}
