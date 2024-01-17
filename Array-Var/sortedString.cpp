#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;

    int len1 = a.size();
    int len2 = b.size();
    int len = len1 + len2;

    for(int i = len1; i >= 0; i--){
        a[i + len2] = a[i];
    }

    for(int i = 0; i < len2; i++){
        a[i] = b[i];
    }

    cout << a;

}