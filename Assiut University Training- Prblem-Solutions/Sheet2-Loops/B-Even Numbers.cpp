#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n==1) cout<<"-1"<<endl;
	else {
	    for(int i=2; i<=n; i+=2)
            cout<< i <<endl;
	}
}