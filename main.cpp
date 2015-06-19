/*创建时间：2015-6-10
  名称：主程序
  用途：调用其他程序使用*/
#include <iostream>  
#include <limits.h>
#include "tobinary.h"
using namespace std;  
//void Dec2Bin(unsigned int i);
int main()  
{  
    int test;
    cout<<"The INT_MAX ="<<INT_MAX<<endl;
    cout<<"The INT_MIN ="<<INT_MIN<<endl;
    cout<<"Please put into a positive number:"<<endl;
    cin>>test;
    cout<<"DEC:"<<test<<endl;  
    cout<<"OCT:"<<oct<<test<<endl;//八进制  
    cout<<"HEX:"<<hex<<test<<endl;//十六进制
    cout<<"BIN:";
    Dec2Bin(test);
    return 0;  
}

