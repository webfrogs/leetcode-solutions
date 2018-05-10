#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = nums.size() - 1;
        while (i <= j) {
            while(j >= 0 && nums[j] == val) {
                j--;
            }

            if (j < 0) {
                break;
            }

            if (nums[i] != val) {
                i++;
                continue;
            }

            if (i == j) {
                break;
            }

            swap(nums[i], nums[j]);
            j--;

        }

        return j+1;
    }
};


int main(int argc, char* argv[]) {
    return 0;
}

