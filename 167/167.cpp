#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res = {0, 0};

        int l = 0;
        int r = numbers.size() - 1;
        while (l < r) {
            int sum = numbers[l] + numbers[r]; 
            if (sum == target) {
                res[0] = l+1;
                res[1] = r+1;
                break;
            } else if (sum > target) {
                r--;
            } else {
                l++;
            }
        }

        return res;
        
    }
};

int main(int argc, char *argv[]) {
    vector<int> nums = {2, 7, 11, 15};
    Solution sol;
    vector<int> result = sol.twoSum(nums, 9);

    cout<<result[0]<<" "<<result[1]<<endl;
    return 0;
}