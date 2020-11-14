#include <iostream>
#include <fstream>
using namespace std;
unsigned int n;
unsigned short Count=0;
unsigned short chuso(unsigned int n){
    if (n==0){
        return Count;
    }else{
        Count++;
        return chuso(n/10);
    }
}
int main(){
    freopen("CHUSO.INP","r",stdin);
    freopen("CHUSO.OUT","w",stdout);
    cin>>n;
    cout<<chuso(n);
}
