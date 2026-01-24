
#include <iostream>

using namespace std;

int sum(int n);

int main() {
  int n;
  cout << "Please provide a number: ";
  cin >> n;

  int result = sum(n);

  cout << "The sum from 1 to " << n << " is " << result << endl;
  
  return 0;
}

int sum(int n){
  int total = 0;

  for(int i = 1; i <= n; i++){
    total += i;
  }

  return total;
}
