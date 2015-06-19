//bondini.cpp --using escape sequences
#include <iostream>
int main()
{
	using namespace std;
	const long num=1234567;
	cout <<"\a Operation \"HyperHype\" is now activated !\n";
	cout <<"Enter your agent code:_______\b\b\b\b\b\b\b";
	long code;
	cin >>code;
       	cout <<"\a You entered "<<code<<"...\n";
	if(num==code)
       {
		cout <<"\acode verified! Prodeed with plan Z3!\n";
	}
	else
		cout <<"\a Wrong code! \n";
}
