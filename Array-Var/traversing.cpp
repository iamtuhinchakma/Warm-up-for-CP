#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Total Value : " << sum << endl;
    int maxValue = INT_MIN;
    int minValue = INT_MAX;
    for( int i = 0; i < n; i++){
        if(arr[i] > maxValue){
            maxValue = arr[i];
        }
        else if(arr[i] < minValue){
            minValue = arr[i];
        }
    }
    cout << "Maximum value: " << maxValue << endl;
    cout << "Minimum value: " << minValue << endl;
    cout << "Sine Value of Total: " << sin(sum);
}