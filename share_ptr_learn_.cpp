/*==================================================
*	Copyright (c) 2019All rights reserved.
*		
*	文件名称: share_ptr_learn_.cpp
*	  创建者: 范安然
*	创建日期: 2019年07月07
*	    描述: 
*
==========================================*/
#include<iostream>
#include<string>
#include"tr1/memory"
using namespace std;
using namespace std::tr1;
class Test{
public:
	Test(string name){
		name_=name;
		cout<< this->name_<< "constructor "<<endl;
	}
	~Test(){
		cout<this->name_<<"destructor "<<endl;
	}
	string name_;
}
int main(){
	shared_ptr<Test> PStr1(new Test("object"));
	cout<< (*pStr1).name_ <<endl;
	cout<<"pStr1 引用技术："<< pStr1.use_count()<<endl;
	cout<<"pStr2 引用计数："<< pStr2.use_count()<<endl;
	int *pInt1 =new int(11);
	shared_ptr<int> pInt2(pInt1);
	cout<< pInt2.unique()<<endl;
	shared_ptr<int> pInt3(pInt2);
	cout<< pInt2.unique()<<endl;
	cout<< pInt3.use_count()<<endl;
	cout<<pInt2.use_count()<<endl;
	return 0;
}
