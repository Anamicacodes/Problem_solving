//Average of elements of the array: 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum=0 ;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    double average= ( double)sum/n;    //can be int or float as per the test cases
    //double average = static_cast<double>(sum) / n;
    cout <<"Average of elements of the array is: "<< average;
}