//���ȣ���19.99��11.99��ӣ����Ϊ31.98.�����ֵ����int����auksʱ
//�����ض�Ϊ31�����ڽ��мӷ�����֮ǰʹ��ǿ������ת��ʱ��������ֵ��
//�ض�Ϊ19��11�����bats��coots��ֵ��Ϊ30.
//������������cout���ʹ��ǿ������ת����char���͵�ֵת��Ϊint������
//������Щת������cout��ֵ��ӡΪ�������������ַ���
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
