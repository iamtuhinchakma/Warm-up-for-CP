#include <bits/stdc++.h>
using namespace std;
int prime1(int num);
int prime2(int num);
int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++){
        int res = prime1(i);
        if( res != -1){
            cout << res << " ";
        }
    }
}
int prime1(int num){
    int div = num / 2;
    for(int i = 2; i <= div; i++){
        if(num % i == 0){
            return -1;
        }
    }
    return num;
}
int prime2(int num){
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return -1;
        }
    }
    return num;
}