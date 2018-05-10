#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left)/2;
            if (nums[mid] < target) {
                left = mid +1;
            } else {
                right = mid;
            }
        }

        return nums[left] >= target ? left : left+1;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}

