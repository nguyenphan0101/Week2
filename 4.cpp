#include<iostream>

using namespace std;
int main()
{ 
 int x,i,j;
 cout << "Nhap so dong: ";
 cin >> x ; 
   for ( i=1;i<=x;i++) 
    	
   { for( j=1;j<i;j++) { 
      cout << " "; }
      
     for(j=1;j<=x*2-(2*i-1);j++) {

     cout << "*"; } 
	 cout << endl;
 }
       
 return 0;
}
