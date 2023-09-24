#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        int oneCount = 0;
        while(n != 0){
            if( n % 2 == 1){
                ans += 1 * pow(2, oneCount);
                oneCount++;
            }
            n /= 2;
        }
        cout << ans << endl;
    }
}