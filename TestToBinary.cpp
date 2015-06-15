/*测试程序，测试tobinary.cpp使用*/
#include <iostream>  
#include <limits.h>
#include "tobinary.h"
#include"time.h"
using namespace std;
int main()  
{  
    int test;
	const int MIN=INT_MIN,MAX=100;
	const double NTMIME=2.0;
	clock_t start,finish;
    double duration;
	cout<<"The INT_MAX ="<<INT_MAX<<endl;
	cout<<"The INT_MIN ="<<INT_MIN<<endl;
	start=clock();
	for(int i=test=MIN;duration<NTMIME;i++,test++)
    {
		cout<<"DEC:"<<test<<endl;  
		cout<<"BIN:";
		Dec2Bin(test);
		cout<<endl;
		finish=clock();
		duration=(double)(finish-start)/CLK_TCK;
	}
	return 0;  
}

