#include<stdio.h>
#include<iostream>
#include"helloclass.h"
using namespace std;

HelloClass::HelloClass()
{
	cout<<"I'm being created!"<<endl;
}
HelloClass::~HelloClass()
{
	cout<<"I'm being destroyed!"<<endl;
}
void HelloClass::sayHello()
{
	cout<<"Hello Class!"<<endl;
}
