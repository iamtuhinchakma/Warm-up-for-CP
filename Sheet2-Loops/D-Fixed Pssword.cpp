#include <bits/stdc++.h>
using namespace std;
int main(){
    int password;
    while(1){
        cin >> password;
        if(password == 1999){
            printf("Correct\n");
            break;
        } else {
            printf("Wrong\n");
        }
    }
    return 0;
}