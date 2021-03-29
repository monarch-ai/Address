#include<iostream>
using namespace std;
#include <string>
#include "contact.h"



int main() //无语，找了好久的bug,结果是main写成了mian
{
	

	int select;
	AddressBooks con;
	con.num = 0;

	while (true)  //注意理解这个true
	{
		menuShow();  //菜单展示

		cin >> select;

		switch (select)
		{
		case 1:  //添加联系人
		 	addContact(&con); break;  //需要改变con值，地址传递
		case 2:  //显示联系人
			showContact(&con); break;
		case 3:  //删除联系人
			deleteContact(&con); break;
		case 4:  //查找联系人
			findContact(&con); break;
		case 5:  //修改联系人
			modifyContact(&con); break;
		case 6:  //清空联系人
			clearContact(&con); break;
		case 0:  //退出通讯录
			cout << "欢迎下次使用通讯录" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
		
	}
	
	cout << "欢迎下次使用通讯录" << endl;
	
	system("pause");
	return 0;
}