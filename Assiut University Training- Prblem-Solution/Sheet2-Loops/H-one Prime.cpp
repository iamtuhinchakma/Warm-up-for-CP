#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    bool isPrime = true;
    if( n <= 1){
        printf("NO\n");
    } else {
        for(int i = n - (n/2); i > 1; i--){
            if(n % i == 0){
                isPrime = false;
                break;
            }
        }
        if(!isPrime){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}