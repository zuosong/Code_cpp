/*����ʱ�䣺2015-6-10
  ���ƣ�������
  ��;��������������ʹ��*/
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
    cout<<"OCT:"<<oct<<test<<endl;//�˽���  
    cout<<"HEX:"<<hex<<test<<endl;//ʮ������
    cout<<"BIN:";
    Dec2Bin(test);
    return 0;  
}

