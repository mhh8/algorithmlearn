#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

class Solution {
public:
			void swap(int *a,int *b){
				*a=*a+*b;
				*b=*a-*b;
				*a=*a-*b;				
			}



private:



};

struct mu{
	int a;
	short b;
	short c;
	short d[5];	
};


int main(){

Solution myApp;
struct mu *pmu;
int a=-10,b=40,*pint;
unsigned int c=6;
char str[]="hello";
myApp.swap(&a,&b);
cout<<"a="<<a<<" b="<<b<<endl;
cout<<"a+c="<<a+c<<endl;
cout<<"unsigned int a="<<(unsigned int)a<<endl;
printf("a=0X%x\r\n",a);
cout<<"strlen(str):"<<strlen(str)<<endl;
cout<<"sizeof(str):"<<sizeof(str)<<endl;
cout<<"sizeof(struct mu):"<<sizeof(struct mu)<<endl;
cout<<"pmu:"<<pmu<<endl;
cout<<"pmu+2:"<<pmu+2<<endl;
cout<<"(char*)pmu+2:"<<(char*)pmu+2<<endl;
cout<<"(long*)pmu+2:"<<(long*)pmu+2<<endl;
return 0;
}
