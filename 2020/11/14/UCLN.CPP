#include <iostream>
#include <fstream>
using namespace std;
unsigned short a,b;
unsigned short UCLN(unsigned short a, unsigned short b){
    if (a%b == 0){
        return b;
    }
    else{
        return UCLN(b, a%b);
    }
}
int main(){
    freopen("UCLN.INP","r",stdin);
    freopen("UCLN.OUT","w",stdout);
    cin>>a>>b;
    cout<<UCLN(a,b);
}
