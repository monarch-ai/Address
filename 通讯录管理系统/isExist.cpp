#include "contact.h"

int isExist(AddressBooks* per,string name)
{
	for (int i = 0; i < per->num; i++)
	{
		if (per->contactArray[i].name == name)
		{
			return i;
		}
	}
	return -1;
} //�ü��������õ��ˣ���װ�ɺ�������ʹ��