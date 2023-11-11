// #include <iostream>

// using namespace std;

// int sum_of_natural_numbers(int n) {
//   return n * (n + 1) / 2;
// }

// int main() {
//   int n;
//   cout << "Enter the number of natural numbers to sum: ";
//   cin >> n;

//   int sum = sum_of_natural_numbers(n);
//   cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

//   return 0;
// }



#include <iostream>

using namespace std;

int sum_of_natural_numbers(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}
int main() {
  int b;
  cout << "Enter the number of natural numbers to sum: ";
  cin >> b;

  int sum = sum_of_natural_numbers(b);
  cout << "The sum of the first " << b << " natural numbers is: " << sum << endl;

  return 0;
}

