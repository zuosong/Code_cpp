#include <iostream>  
#include "tobinary.h"
//using namespace std;  
//十进制数转化成二进制输出，此处使用了强制类型转换，将int型转换为unsigned int型
void Dec2Bin(unsigned int i)
{ 
	if(i/2)
	  Dec2Bin(i/2);
	std::cout<<(i%2);
}

