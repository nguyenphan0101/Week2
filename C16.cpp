#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout << " NHap n:";
    cin >> n;
    
    if(n==0) cout << "Khong";
    if(n==1) cout << "mot";
    if(n==2) cout << "hai";
    if(n==3) cout << "ba";
    if(n==4) cout << "bon";
    if(n==5) cout << "nam";
    if(n==6) cout << "sau";
    if(n==7) cout << "bay";
    if(n==8) cout << "tam";
    if(n==9) cout << "chin";
    
    if(n<0 || n>9) cout << "loi";
}
