//Find the second largest element of the arrays : 
#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout << "Enter n:";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    //using bubble sort: 
    for(int i=0; i<n-1; i++){
        for(int  j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Sorted array : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Second largest element :" ;
    for(int i=n-2; i>0; i--){
        if (arr[i] < arr[n-1]){
            cout << arr[i];
            break;
        }
    }

    int max1 = arr[0];
    int max2 = arr[1];
    if(max2 > max1){
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }
    for(int i=0;i<n;i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]> max2 && arr[i]!=max1){
            max2 = arr[i];
        }
    }
    cout << "\nHence the second largest element is  : " << max2;
}
