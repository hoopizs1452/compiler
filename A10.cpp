#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num,a,b,c,d,e,f,g,h,i;
	cin >> num;
	
	a=num/100000000;
	b=num%100000000/10000000;
	c=num%100000000%10000000/1000000;
	d=num%100000000%10000000%1000000/100000;
	e=num%100000000%10000000%1000000%100000/10000;
	f=num%100000000%10000000%1000000%100000%10000/1000;
	g=num%100000000%10000000%1000000%100000%10000%1000/100;
	h=num%100000000%10000000%1000000%100000%10000%1000%100/10;
	i=num%10;
	
	cout << "0" << a << b << c << "-"
	 << d << e << f << "-" << g << h << i << endl; 
}