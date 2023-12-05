#include <iostream>
#include <vector>
using namespace std;
// Function to find elements in the array that repeat more than n/3 times
vector<int> solve(int arr[], int n) {
  vector<int> ans;  // Vector to store the result
  int flag = 0;     // Flag to check if any element repeats more than n/3 times

  // Loop through each element in the array
  for (int i = 0; i < n; i++) {
    int count = 0;  // Counter to count occurrences of the current element
    // Inner loop to count occurrences of the current element in the remaining array
    for (int j = i; j < n; j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
    }
    // If the current element repeats more than n/3 times, add it to the result vector
    if (count > (n / 3)) {
      ans.push_back(arr[i]);
      flag = 1;  // Set flag to indicate that at least one element repeats more than n/3 times
    }
  }
  // If no element repeats more than n/3 times, add all elements to the result vector
  if (!flag) {
    for (int i = 0; i < n; i++) {
      ans.push_back(arr[i]);
    }
  }
  return ans;
}

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array: ";
  // Input array elements
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // Call the solve function to get the result
  vector<int> ans = solve(arr, n);
  // Display the elements that repeat more than n/3 times or the entire array
  cout << "The number(s) which repeated more than n/3 times in the array is: ";
  for (auto val : ans) {
    cout << val << " ";
  }
  return 0;
}
