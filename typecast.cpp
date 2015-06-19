//首先，将19.99和11.99相加，结果为31.98.将这个值赋给int变量auks时
//它被截短为31，但在进行加法运算之前使用强制类型转换时，这两个值被
//截短为19和11，因此bats和coots的值都为30.
//接下来，两条cout语句使用强制类型转换将char类型的值转换为int，再显
//它，这些转换导致cout将值打印为整数，而不是字符。
//typecast.cpp --forcing type changes
#include <iostream>
int main()
{
	using namespace std;
	int auks,bats,coots;
	
	//the following statements adds the values as double,
	//then converts the result to int
	auks = 19.99+11.99;

	//these statements add values as int
	bats = (int)19.99+(int)11.99;//old C syntax
	coots= int(19.99)+int(11.99);//new C++ syntax
	cout <<"auks = "<<auks<<",bats = "<<bats;
	cout <<",coots = "<< coots <<endl;

	char ch ='Z';
	cout << "The code for "<< ch <<" is "; //print as char
	cout <<int(ch)<<endl;		       //pint as int
	cout <<"Yes, the code is ";
	cout <<static_cast<int>(ch)<<endl;	//using static_cast
	return 0;
}
