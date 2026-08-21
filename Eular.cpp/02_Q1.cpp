//Sum of all the numbers below 1000 that are multiples of 3 or 5
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int res =0;
    for(int i=0;i<1000;i++){
        if(i%3==0 || i%5==0){
            res +=i;
        }
    }
    cout << res;
}