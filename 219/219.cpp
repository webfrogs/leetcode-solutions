#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> imap;
        for(int i=0; i!=nums.size(); i++) {
            if(imap.find(nums[i])==imap.end()) {
                imap.insert(make_pair(nums[i], i));
                continue;
            }

            if(i-imap[nums[i]]<=k) {
                return true;
            }

            imap[nums[i]] = i;
        }
        return false;
    } 
};

int main(int argc, char* argv[]) {
    return 0;
}

