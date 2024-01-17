#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    char str[100], sub[50];

    // Input the sorted string
    printf("Enter the sorted string: ");
    gets(str);

    // Input the substring
    printf("Enter the substring to insert: ");
    gets(sub);
    */
   string str, sub;
   cin >> str >> sub;

    // Find the length of the original string
    int len_str = 0;
    while (str[len_str] != '\0') {
        len_str++;
    }

    // Find the length of the substring
    int len_sub = 0;
    while (sub[len_sub] != '\0') {
        len_sub++;
    }

    // Make space for the new substring
    for (int i = len_str; i >= 0; i--) {
        str[i + len_sub] = str[i];
    }

    // Copy the new substring into the space
    for (int i = 0; i < len_sub; i++) {
        str[i] = sub[i];
    }

    // Output the modified string
    printf("Modified string after insertion: %s\n", str);

    return 0;
}
