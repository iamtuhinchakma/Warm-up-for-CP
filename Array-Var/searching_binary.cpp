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
    int l, r;
    l = 0;
    r = n - 1;
    bool flag = false;
    while(l <= r){
        int midIndex = (l + r) / 2;
        if(a[midIndex] == val){
            flag = true;
            break;
        }
        if(a[midIndex] < val){
            l = midIndex + 1;
        } else {
            r = midIndex - 1;
        }
    }
    if(flag == true){
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }
}