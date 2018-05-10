#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int result = 0;
        int count = 0;
        for (int i=0; i < nums.size(); i++) {
            if (i==0 || nums[i-1] < nums[i]) {
                result = max(result, ++count);
            } else {
                count = 1;
            }
        }

        return result;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}

