//change my height inches to feet and inches
/*编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），
然后将身高转换为英尺和英寸，改程序使用下划线字符来只是输入位置，另外，
使用一个const符号常量来便是转换因子*/
#include<iostream>
using namespace std;
int main()
{
	const int IN2FT=12;
	const float CM2IN=2.54;
	int height_cm,height,height_ft,height_in;
	cout << "Enter your height in centimetres :___\b\b\b";
	cin  >> height_cm;
	height=int(height_cm/CM2IN);
	height_ft=height/IN2FT;
	height_in=height%IN2FT;
	cout <<"Your height is "<<height<<" inches , ";
	cout <<"or "<<height_ft<<" feet "<<height_in<<" inches"<<endl;
	return 0;
}

