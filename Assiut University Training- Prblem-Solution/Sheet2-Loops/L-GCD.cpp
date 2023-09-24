#include <bits/stdc++.h>
using namespace std;
int main(){
    int  a, b;
    cin >> a >> b;

    int gcd;
    if( a == 0 || b == 0){
        gcd = 0;
    } else {
        while( b != 0 ){
            int temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;
    }
    printf("%d", gcd);
    return 0;
}