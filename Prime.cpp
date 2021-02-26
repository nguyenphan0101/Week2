#include<iostream>
using namespace std;
int main()
{
	int i,x;
	int du = 1;
	cin >> i;
	
	if(i==1) 
{
	cout << "yes";
}
	else if(i>=2) 
{   for(x=2;x<=i;x++)
    {   if(i%x==0) {
    	du = 0;
	}
	}
	if(du==1) {
		cout << "yes";
	} 
	else if(du==0) {
		cout << "no";
	}
	} 
	return 0;
}
