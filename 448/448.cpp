#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        if (nums.empty()) {
            return result;
        }
        int n = nums.size();
        for (int i=0; i < n; i++) {
            while (nums[nums[i]-1] != nums[i]) {
                swap(nums[nums[i]-1], nums[i]);
            }
        }

        for (int i=0; i<n; i++) {
            if (nums[i] != i+1) {
                result.push_back(i+1);
            }
        }
        return result;
    }
};

int main(int argc, char* argv[]) {
    vector<int> input({4,3,2,7,8,2,3,1});
    Solution sol;
    for (auto i: sol.findDisappearedNumbers(input)) {
        cout<<i<<",";
    }
    return 0;
}