/**
 * @file main.cpp
 * @author Jose Jaime
 * @date 2025-01-24
 * @brief Hello World program
 * 
 * This program outputs Hello World! to the screen.
 */


#include <iostream>

using namespace std;


/**
 * Calulates the sum of numbers from 1 to n.
 *
 * @param int n Number the user enters.
 * @pre Number the user enters.
 * @return int Returns the sum of numbers from 1 to n.
 * @post Returns the sum of numbers from 1 to n.
 * 
 */
int sum(int n);



/**
 * Calculates the product of numbers from 1 to n.
 *
 * @param int n Number the user enters.
 * @pre Number the user enters.
 * @return int Returns the product of numbers from 1 to n.
 * @post Returns the product of numbers from 1 to n.
 * 
 */
int product(int n);


int main() {
  cout << "Hello World!" << endl;

  cout << "Please enter a number: ";
  int n;
  cin >> n;

  // Call the sum function and print the result
  if (n > 0) {
    int sumResult = sum(n);
    int productResult = product(n);
    cout << "The sum of numbers from 1 to " << n << " is: " << sumResult << endl;
    cout << "The product of numbers from 1 to " << n << " is: " << productResult << endl;
  } else {
    cout << "Please enter a positive number." << endl;
  }
  
  return 0;
}

int sum(int n) {
  int total = 0;
  for (int i = 1; i <= n; ++i) {
    total += i;
  }
  return total;
}

int product(int n) {
  int total = 1;
  for (int i = 1; i <= n; ++i) {
    total *= i;
  }
  return total;
}
