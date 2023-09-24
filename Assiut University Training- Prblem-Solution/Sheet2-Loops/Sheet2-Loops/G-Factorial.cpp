#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin >> n;
     for (int i = 0; i < n; i++ ){
        int num;
        cin >> num;
        long long factorial = 1;
        for( int i = 1; i <= num; i++ ){
            factorial = factorial * i;
        }
        cout << factorial << endl;
        factorial = 1;
     }
}