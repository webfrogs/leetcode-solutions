#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result = 0;

        int i = 0;
        while (i < nums.size()) {
            result += nums[i];
            i += 2;
        }

        return result;
    }
};

int main(int argc, char *argv[]) {
    vector<int> v = {1,4,3,2};
    
    Solution sol;
    cout<<sol.arrayPairSum(v)<<endl;
}