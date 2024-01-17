#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int val;
    cin >> val;

    //Sorted array
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted Array: ";
    for(int out : arr){
        cout << out << " ";
    }
    cout << endl;

    int pos = 0, flag = 0;
    for(int i = 0; i < n; i++){
        if(val < arr[i]){
            pos = i;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        pos = n;
    }
    for(int i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}