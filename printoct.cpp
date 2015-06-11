//十进制转八进制
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cout<<"input a number:"<<endl;
	int d;
	vector<int> vec;

	cin>>d;
	while (d)
	{
		vec.push_back(d%8);
		d=d/8;
	}

	cout<<"the result is:"<<endl;
	for(vector<int>::iterator ip=vec.end()-1;ip>=vec.begin();)
	{
		cout<<*ip--;
	}
	cout<<endl;
	
	return 0;
}
