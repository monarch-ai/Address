#include "contact.h"

void findContact(AddressBooks* per)
{
	string name;
	cout << "请输入查找联系人的姓名" << endl;
	cin >> name;

	int flag = isExist(per, name);
	if (flag != -1)
	{
		int i = flag;
		cout << "姓名：" << per->contactArray[i].name << "\t"
			<< "性别：" << (per->contactArray[i].gender == 1 ? "男" : "女") << "\t"
			<< "年龄：" << per->contactArray[i].age << "\t"
			<< "电话：" << per->contactArray[i].tel << "\t"  //又是\的错误
			<< "住址：" << per->contactArray[i].address << endl;
	}
	else
	{
		cout << "该联系人不存在" << endl;
	}

	system("pause");
	system("cls");
}