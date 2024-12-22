#include<iostream>
using namespace std;
class student
{
	public:
	char name[100];
	int id;
	student()
	{
		cin>>name;
		cin>>id;
	}
	void get()
	{
		cout<<"name ="<<name<<"\n";
		cout<<"id ="<<id<<"\n";
	}
};
class student2:public student
{
	public:
	char exp[100];
	int marks;
	student2()
	{
		cin>>exp;
		cin>>marks;
	}
	void get2()
	{
		cout<<"exper ="<<exp<<"\n";
		cout<<"mark ="<<marks<<"\n";
	}
};
class student3:public student
{
	public:
	char sec[100];
	char grade[100];
	student3()
	{
		cin>>sec;
		cin>>grade;
	}
	void get3()
	{
		cout<<"sect ="<<sec<<"\n";
		cout<<"grade ="<<grade<<"\n";
	}
};
int main()
{
	student2 s2;
	student3 s3;
	s2.get();
	s2.get2();
	s3.get();
	s3.get3();
	return 0;
}