#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int n: nums) {
            if(i==0 || n>nums[i-1]) {
                nums[i] = n;
                i++;
            }
        }
        return i;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}

