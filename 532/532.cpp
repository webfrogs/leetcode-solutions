#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> result;
        sort(nums.begin(), nums.end());
        auto size = nums.size();
        for(size_t i=0; i < size; i++) {
            for(auto j=i+1; j<size; j++) {
                int diff = nums[j] - nums[i];
                if(diff == k) {
                    result.emplace(nums[i], nums[j]);
                } else if (diff > k) {
                    break;
                }
            }
        }
        return result.size();
    }
};

int main(int argc, char* argv[]) {
    return 0;
}

