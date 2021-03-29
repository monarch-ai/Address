#include <iostream>
using namespace std;
#include <string>

#define max 1000  //����곣��������ά��

struct contact
{
	string name;
	int gender; //1--�У�2--Ů����ֹ��������
	int age;
	string tel;
	string address;
};  //�ṹ�嶨��Ҳ����ͷ�ļ���

struct AddressBooks  //ͨѶ¼�ṹ�壬�洢��ϵ��
{
	contact contactArray[max];  //����ά��
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