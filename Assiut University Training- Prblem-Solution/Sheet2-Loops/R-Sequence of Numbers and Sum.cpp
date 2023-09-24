#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    while(cin >> n >> m){
        int start = min(n, m);
        int end = max(n, m);
        int sum = 0;
        if( n <= 0 || m <= 0){
            return 0;
        } else {
            for(int i = start; i <= end; i++){
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
    }
    return 0;
}
 