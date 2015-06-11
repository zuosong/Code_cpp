//十进制转二进制
#include<iostream>
using namespace std;

void printbinary(const unsigned int val)
{
	for(int i = 16; i >= 0; i--)
	{
		if(val & (1 << i))
			cout << "1";
		else
			cout << "0";
	}
}

int main()
{
	printbinary(1024);
	return 0;
}