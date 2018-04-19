#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        while(i < nums.size()) {
            if (nums[i] == 0) {
                break;
            }
            i++;
        }
        int j = i;
        for(; i< nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }
        for(; j<nums.size(); j++) {
            nums[j] = 0;
        }
    }
};


int main(int argc, char *argv[]) {
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution sol;
    sol.moveZeroes(nums);

    cout<<"[";
    for(int i=0;i < nums.size(); i++) {
        if (i != 0) {
            cout<<", ";
        }
        cout<<nums[i];
    }

    cout<<"]"<<endl;
    return 0;
}