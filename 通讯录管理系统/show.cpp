#include "contact.h"

void showContact(AddressBooks* per)
{
	if (per->num!=0)
	{
		for (int i = 0; i < per->num; i++)
		{
			cout << "姓名：" << per->contactArray[i].name << "\t"
				<< "性别：" << (per->contactArray[i].gender==1?"男":"女") << "\t"
				<< "年龄：" << per->contactArray[i].age << "\t"
				<< "电话：" << per->contactArray[i].tel << "\t"  //又是\的错误
				<< "住址：" << per->contactArray[i].address << endl;
		}
	}
	else
	{
		cout << "通讯录中无联系人" << endl;
	}

	system("pause");
	system("cls");
	
}