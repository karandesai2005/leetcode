#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;  // Negative numbers are not palindromes
        }

        long reversed = 0;
        int y = x;

        while (y > 0) {
            reversed = reversed * 10 + y % 10;
            y /= 10;
        }

        return reversed == x;
    }
};

int main() {
    Solution solution;

    // Test cases
    int num1 = 123;
    int num2 = 121;

    // Checking if the numbers are palindromes and printing the results
    cout << num1 << " is palindrome: " << (solution.isPalindrome(num1) ? "true" : "false") << endl;
    cout << num2 << " is palindrome: " << (solution.isPalindrome(num2) ? "true" : "false") << endl;

    return 0;
}

