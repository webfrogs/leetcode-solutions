#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        long total = 0;
        long whole = 0;

        int i=0;
        for(; i<size; i++) {
            total += nums[i];
            whole += i;
        }
        whole += i;

        return whole - total;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}