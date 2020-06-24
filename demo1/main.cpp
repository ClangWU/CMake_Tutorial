#include <iostream>
using namespace std;

double power(double base,double exponent)
{	
	int res=base;
	if(base==1)
	{
	return 1;
	}
	for(int i=1;i<exponent;i++)
	{
		res=res*base;
	}
	return res;
}

int main(int argc,char *argv[])
{
	if(argc<3)
	{
		cout<<"Usage:"<<argv[0]<<endl;
		return 1;
	}
	double base =atof(argv[1]);
	int exponent=atoi(argv[2]);
	cout<<"result"<<endl<<power(base,exponent);
	return 0;
}
