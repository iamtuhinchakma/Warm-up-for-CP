#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, a, b;
	cin >> n >> a >> b;
	long long sum = 0;
	for (int i = 1; i <= n; i++){
		if (i / 10 == 0){
			if (i >= a and i <= b){
				sum += i;
			}
		} else{
			int myNumber = i;
			int mySum = 0;
			while (myNumber){
				int digit = myNumber % 10;
				mySum += digit;
				myNumber /= 10;
			}
			if (mySum >= a && mySum <= b){
				sum += i;
			}
		}
	}
	cout << sum << endl;
    return 0;
}