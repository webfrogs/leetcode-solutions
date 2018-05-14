#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int i=0;
        int first, last;
        for(;i<nums.size()-1&&nums[i]<=nums[i+1];i++);
        first = i;
        for(i=nums.size()-1;i>=first&&nums[i-1]<=nums[i];i--);
        last = i;

        int max = nums[first];
        int min = max;
        for(i=first; i<= last; i++) {
            if (nums[i]>max) {
                max = nums[i];
            }
            if (nums[i]<min) {
                min = nums[i];
            }
        }
        for(i=0; i<first&&nums[i]<=min; i++);
        first = i;
        for(i=nums.size()-1; i>last&&nums[i]>=max;i--);
        last = i;

        return last-first+1;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}

