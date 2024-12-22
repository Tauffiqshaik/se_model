#include<iostream>
using namespace std;
class student
{
	public:
	string name;
	int id;
	double marks;
	virtual void play()
	{
		cout<<"enter the name:\n";
		cin>>name;
		cout<<"enter the id:\n";
		cin>>id;
		cout<< "enter the marks:\n";
		cin>>marks;
		
	}
	virtual void get()
	{
		cout<<"name ="<<name<<"\n";
		cout<<"id  ="<<id<<"\n";
		cout<<"marks ="<<marks<<"\n";
	}
	
};
class student1:public student
{
	public:
	char exp[100];
	int salary;
	virtual void play2()
	{
		cout<<"enter the name:\n";
		cin>>name;
		cout<<"enter the id:\n";
		cin>>id;
		cout<< "enter the marks:\n";
		cin>>marks;	
		cout<<"enter the experience:\n";
		cin>>exp;
		cout<<"enter the salary:\n";
		cin>>salary;
	}
	virtual void get2()
	{
		cout<<"name ="<<name<<"\n";
		cout<<"id  ="<<id<<"\n";
		cout<<"marks ="<<marks<<"\n";
		cout<<"experience ="<<exp<<"\n";
		cout<<"salary ="<<salary<<"\n";
		
	}
};
int main()
{
	student1 sec;
	sec.play();
	sec.get();
	sec.play2();
	sec.get2();
	return 0;
}