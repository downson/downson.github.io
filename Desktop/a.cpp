#include<iostream>
#include<string>
using namespace std;
typedef unsigned char uint8_t;
int main(int argc,char**argv)
{

	uint8_t  a[512] = {1,2,3,4,5,6,7,'\0'};
	cout<<"a size:"<<sizeof(a)<<endl;
	string name((char*)(a));
	cout<<"name:"<<name<<endl;
	cout<<"name.c_str():"<<name.c_str()<<endl;
	for(int i = 0;name[i]!='\0';i++)
		cout<<name[i]<<" ";
	cout<<endl;
	cout<<"str.size:"<<name.size()<<endl;
	const uint8_t *b = (const uint8_t *)(name.c_str());
	cout<<"b:"<< b<<endl;
	cout<<sizeof(b)<<endl;
	for(int i=0;b[i]!='\0';i++)
		cout<<b[i]<<" ";
	return 0;

}
