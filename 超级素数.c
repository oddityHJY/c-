#include <iostream>
int isprime(int j)
{
	int i,flag=1;
    for(i=2;i<j;i++)
	{
		if(j%i==0)
		{
			flag=0;
			break;
		}
	}
	if(j<2)
	flag=0;
	return flag;
}
int SuperPrime(int i)
{   
    if(isprime(i)==1)
	{
    int a, b, c, d, e,f;
	a=i/100;
	b=(i-a*100)/10;
	c=i%10;
	d=a+b+c;
	e=a*a+b*b+c*c;
	f=a*b*c;
	if(isprime(d)&&isprime(e)&&isprime(f))
	return 1;
	}
	return 0;
}
int main()
{
    int i=101,n=0,sum,max=0;
	SuperPrime(i);
	for(i=100;i<1000;i++)
	if(SuperPrime(i)==1)
	{
		n++;
		sum += i;
		max=i;
	}
	std::cout<<"这其中有"<<n<<"个超级素数"<<std::endl;
	std::cout<<"超级素数的和为"<<sum<<std::endl;
	std::cout<<"最大的超级素数是"<<max<<std::endl;
	return 0;
}
