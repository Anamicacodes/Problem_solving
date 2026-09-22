#include <iostream>
using namespace std;

int main(){

    int n1, n2;
    int arr1[100], arr2[100], merged[200];

    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    //copying 1st array : 
    for(int i=0;i<n1;i++){
        merged[i] = arr1[i];
    }
    //copying 2nd array :
    for(int i=0;i<n2;i++){
        merged[n1+i] = arr2[i];
    }
    cout << "Merged array : ";
    for(int i=0; i<n1+n2; i++){
        cout << merged[i] << " ";
    }
}