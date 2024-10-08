//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};  // Return indices if the pair is found
                }
            }
        }
        return {};  // Return an empty vector if no solution is found
    }
};

int main(int argc, char *argv[]) {
    Solution s1;
    vector<int> num = {3, 2, 4};  // Properly initialize the vector
    int t = 6;
    
    vector<int> result = s1.twoSum(num, t);  // Capture the result
    for (int i : result) {  // Loop through the result and print
        cout << i << " ";
    }
    return 0;
}

