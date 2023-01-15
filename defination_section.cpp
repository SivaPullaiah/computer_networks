#include <iostream>
using namespace std;
#define PI 3.14
int main()
{
	int radius,area;
	cout<<"Enter radius";
	cin>>radius;
	area=PI*radius*radius;
	cout<<"Area:"<<area<<endl;
	return 0;
}