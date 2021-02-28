#include<iostream>
#include<cmath>

using namespace std;
int main()
{ 
 float a,b,c,chuvi;
 
 cin >> a >> b >> c;
 if ( a+b>c && a+c>b && b+c>a)
 { if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
      cout <<  "Day là tam giac vuong" ;
   else if (a==b && b==c && c==a)
      cout << "Day la tam giac deu"    ;
   else if (a==b || b==c || c==a) 
      cout << "Day la tam giac can"    ;
   else if (a*a > b*b+c*c || b*b > a*a + c*c || c*c > a*a + b*b)
      cout << "Day la tam giac tu"     ;
	  else cout <<  "DAy la tam giac nhon"  ;
	  }
  else cout << "Khong phai tam giac";
  }	     
