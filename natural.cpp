#include <iostream>

using namespace std;

int main() {
int n, sum = 0;

cout << "Enter the number of terms: ";
cin >> n;

cout <<"The first " << n << " natural numbers are: " ;
for (int i= 1; i <= n; i++){
    cout << i << " ";
    sum += i;
}

cout << "\nThe sum of first " << n << " natural number is:" << sum << endl;

    return 0;
}