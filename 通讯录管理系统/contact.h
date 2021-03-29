#include <iostream>
using namespace std;
#include <string>

#define max 1000  //定义宏常量，方便维护

struct contact
{
	string name;
	int gender; //1--男，2--女，防止输入其它
	int age;
	string tel;
	string address;
};  //结构体定义也放在头文件中

struct AddressBooks  //通讯录结构体，存储联系人
{
	contact contactArray[max];  //方便维护
	int num;
};

void menuShow();
int isExist(AddressBooks * per,string name);

void addContact(AddressBooks * per);
void showContact(AddressBooks* per);
void deleteContact(AddressBooks* per);
void findContact(AddressBooks* per);
void modifyContact(AddressBooks* per);
void clearContact(AddressBooks* per);