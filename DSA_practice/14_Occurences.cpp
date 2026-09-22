#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout <<"Enter n:";
    cin >> n;
    cout <<"Enter elements: ";
    for(int i=0;i<n; i++ ){
        cin >> arr[i];
    }
    // to find the number of occurences of target element 
    int target;
    cout << "Enter target:";
    cin >> target;
    int count =0;
    for(int i=0;i<n; i++){
        if(arr[i] == target){
            count++;
        }
    }
    //to find the frequency of every element :
    bool visited[100] = {false};
    for(int i=0;i<n;i++){
        if(visited[i]== true){
            continue;
        }
        int count =1;
        for(int j =i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j]=true;
            }
        }
        cout << arr[i] << " occurs " << count << " time" << endl;
    }
    //Finding duplicates - which elements are occuring again and again 
    /*cout << "Elements with duplicates : " ;
    if(count >1) {
        cout << arr[i] << "occurs " << count << "time " << endl;
    } */

return 0;
}