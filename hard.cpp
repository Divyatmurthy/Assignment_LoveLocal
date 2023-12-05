#include <iostream>
using namespace std;
// Function to count the number of digit 1 in the range [1, n]
int countDigitOne(int n) {
    int count = 0;
    // Iterate through each digit place (1's, 10's, 100's, etc.)
    for (long long i = 1; i <= n; i *= 10) {
        // Divide the number into two parts: the higher and lower parts
        long long higher = n / i;
        long long lower = n % i;
        
        // Count of ones contributed by higher part
        count += (higher + 8) / 10 * i;
        // If the current digit is 1, add the count contributed by the lower part
        if (higher % 10 == 1) {
            count += lower + 1;
        }
    }
    return count;
}
int main() {
    int n;
    cout << "Enter a non-negative integer n: ";
    cin >> n;
    // Call the function to count the number of digit 1
    int result = countDigitOne(n);
    cout << "The total number of digit 1 appearing in all non-negative integers less than or equal to " << n << " is: " << result << endl;
    return 0;
}
