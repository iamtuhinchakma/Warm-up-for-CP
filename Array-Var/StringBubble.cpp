#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c[30], t;
    int flag =0, count=0;
    printf("Enter the string to be sorted:\n");
    scanf("%s", c);
    int n=strlen(c);
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            count++;
            if(c[i]>c[j]){
                t = c[i];
                c[i] = c[j];
                c[j] = t;
            }
        }
    }
    printf("\nThe sorted string is %s:", c);
    return 0;
}
