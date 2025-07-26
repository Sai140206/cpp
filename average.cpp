#include <iostream>
using namespace std;

int main() {

    int n;
    float sum = 0;

cout <<"Enter the number of element in the list :";
cin >>n;
    float arr[n];
    
cout << "Entre " << n << " element:\n";
for(int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
}
float average = sum / n;

cout << "The average of the list element is:" << average << endl;

    return 0;
}