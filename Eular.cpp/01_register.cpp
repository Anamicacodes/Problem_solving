#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long res=0;
    for(long long i=1;i<819000;i+=2){
        res+=i*i;
    }
    cout << res;
}