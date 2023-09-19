#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int even_numbers = 0;
  int odd_numbers = 0;
  int positive_numbers = 0;
  int negative_numbers = 0;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    // taking absolute of x first before taking the modulo to get non negative remainder values
    // for example: -5 % 2 = -1, 5 % 2 = 1
    if (abs(x) % 2 == 0) {
      even_numbers++;
    }
    if (abs(x) % 2 == 1) {
      odd_numbers++;
    }
    if (x > 0) {
      positive_numbers++;
    }
    if (x < 0) {
      negative_numbers++;
    }
    // notice that 0 is neither positive, nor negative. It is neutral
  }
  cout << "Even: " << even_numbers << '\n';
  cout << "Odd: " << odd_numbers << '\n';
  cout << "Positive: " << positive_numbers << '\n';
  cout << "Negative: " << negative_numbers << '\n';
  return 0;
}