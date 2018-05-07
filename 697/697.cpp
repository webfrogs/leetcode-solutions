#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, vector<int>> countMap;
        if (nums.size() <= 1) {
            return nums.size();
        } 

        int max_degree = 0;
        int min_leftIndex = 0;
        int min_rightIndex = 0;

        for (int i=0; i < nums.size(); i++) {
            int item = nums[i];
            map<int, vector<int>>::iterator it = countMap.find(item);
            if (it == countMap.end()) {
                vector<int> arr;
                arr.push_back(i);
                countMap.insert(pair<int, vector<int>>(item, arr));
            } else {
                vector<int> *v = &it->second;
                v->push_back(i);

                int degree = v->size();
                if (degree > max_degree) {
                    max_degree = degree;
                    min_leftIndex = v->at(0);
                    min_rightIndex = i;
                } else if (degree == max_degree) {
                    const int& leftIndex = v->at(0);
                    if ((i-leftIndex) < (min_rightIndex - min_leftIndex)) {
                        min_leftIndex = leftIndex;
                        min_rightIndex = i;
                    }
                }
            }
        }
        return (min_rightIndex - min_leftIndex + 1);
    }
};

int main(int argc, char* argv[]) {
    return 0;
}

