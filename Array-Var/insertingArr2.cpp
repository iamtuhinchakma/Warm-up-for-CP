#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int val, pos;
    cin >> val >> pos;

    cout << "Original Array: ";
    for(int out : arr){
        cout << out << " ";
    }
    cout << endl;
    n++;
    //shifting 1 step forward
    for(int i = n - 1; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos - 1]= val;
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int x;
    cin >> x;

    for(int i = x - 1; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    n--;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}