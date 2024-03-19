#include <iostream>
using namespace std;

int main() {
    int n; // Number of elements in the series
    cout << "Enter the number of elements in the series: ";
    cin >> n;
    
    int maxOdd = -1; // Initialize maximum odd number as -1
    int num; // Variable to store each number in the series
    
    cout << "Enter the series: ";
    for(int i = 0; i < n; ++i) {
        cin >> num;
        if(num % 2 != 0 && num > maxOdd) { // Check if number is odd and greater than current maxOdd
            maxOdd = num;
        }
    }
    
    if(maxOdd != -1) {
        cout << "The maximum odd number in the series is: " << maxOdd << endl;
    } else {
        cout << "There are no odd numbers in the series." << endl;
    }
    
    return 0;
}

