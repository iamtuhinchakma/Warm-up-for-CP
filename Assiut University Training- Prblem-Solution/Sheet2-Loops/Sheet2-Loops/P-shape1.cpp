#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int counter = n + 1;
    for(int i = 0; i < n; i++){
        counter--;
        for(int j = 0; j < counter; j++){
            cout << "*";
        }
        printf("\n");
    }
    return 0;
}