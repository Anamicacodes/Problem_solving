#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter "<< n <<" elments: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "The minimum element is: "<< min;
    return 0;
}