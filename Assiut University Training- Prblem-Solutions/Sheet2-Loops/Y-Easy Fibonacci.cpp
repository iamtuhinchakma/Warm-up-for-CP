#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int first, second;
        if( i <= 1){
            first = 0;
            second = 1;
            cout << i << " ";
        }
         else {
            int sum = first + second;
            cout << sum << " ";
            first = second;
            second = sum;
        }
    }
}