#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int val;
    cin >> val;
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(a[i] == val){
            flag = true;
        }
    }
    if(flag == true){
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }
}