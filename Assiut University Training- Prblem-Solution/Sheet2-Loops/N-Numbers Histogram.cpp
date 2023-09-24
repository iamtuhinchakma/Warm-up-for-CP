#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        for(int j = 0; j < num; j++){
            cout << c;
        }
        printf("\n");
    }

    return 0;
}
