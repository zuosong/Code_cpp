//十进制转换为任意进制的源码
#include <iostream>
using namespace std;

int main()
{
	long n;
	int p,c,m=0,s[100];
	cout<<"输入要转换的数字："<<endl;
	cin>>n;
	cout<<"输入要转换的进制："<<endl;
	cin>>p;

	cout<<"("<<n<<")10="<<"(";

	while (n!=0)//数制转换，结果存入数组s[m]
	{
		c=n%p;
		n=n/p;
		m++;s[m]=c;   //将余数按顺序存入数组s[m]中
	}

	for(int k=m;k>=1;k--)//输出转换后的序列
	{
		if(s[k]>=10) //若为十六进制等则输出相对应的字母
			cout<<(char)(s[k]+55);
		else         //否则直接输出数字
			cout<<s[k];
	}

	cout<<")"<<p<<endl;

	return 0;
}