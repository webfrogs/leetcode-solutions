#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid = nums.size()/2;
        return nums[mid];
    }
};

int main(int argc, char* argv[]) {
    return 0;
}