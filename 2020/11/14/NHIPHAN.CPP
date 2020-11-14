#include <iostream>
#include <fstream>
using namespace std;
unsigned short n;
bool a;
void nhiphan(unsigned short n, unsigned short vtri, bool a){
    for (bool value=0; value!=1; value++){
        a=value;
        if (vtri == n){
            cout<<a<<"\n";
        }else{
            nhiphan(n,vtri+1,a);
            cout<<a;
        }
    }
}
int main(){
    /*freopen("NHIPHAN.INP","r",stdin);
    freopen("NHIPHAN.OUT","w",stdout);*/
    cin>>n;
    nhiphan(n,0,0);
}
