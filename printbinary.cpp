//十进制转二进制
#include<iostream>
using namespace std;

void printbinary(const unsigned int val)
{
	for(int i = 16; i > 0; i--)
	{
		if(val & (1 << i))//此处为将1左移i位，并且与val相与，如果val对应位为1，则输出1，否则输出0
			cout << "1";
		else
			cout << "0";
	}
}

int main()
{
	printbinary(-1);
	return 0;
}

