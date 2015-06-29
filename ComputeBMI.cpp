//计算BMI值,体重指数
/*编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输
入其体重，改程序报告其BMI*/
#include <iostream>
using namespace std;
int main()
{	
	const int FT2IN=12;
	const float IN2METR=0.0254;
	const float KG2LB=2.2;
	int height_ft,height_in,weight_lb;
	float height_m,weight_kg,bmi;
	cout<<"Enter your height(in foot and inch) and weight(in pound):_\b";
	cin >>height_ft;
	cout<<"feet and _\b";
	cin>>height_in;
	cout<<"inches , and weight(in pound):__\b\b";
	cin >>weight_lb;
	cout <<"pounds."<<endl;
	height_m=(height_ft*FT2IN+height_in)*IN2METR;
	weight_kg=float(weight_lb)/KG2LB;
	bmi=weight_kg/(height_m*height_m);
	cout<<weight_kg<<" "<<height_m<<"\n";
	cout<<"Your body mass index is : "<<bmi;
	return 0;
}

