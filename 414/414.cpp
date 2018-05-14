#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> tmp;
        int maxIndex=2;
        for(auto num: nums) {
            if (tmp.size()==0) {
                tmp.push_back(num);
            } else if (tmp.size()==1) {
                if (num > tmp[0]) {
                    tmp.push_back(num);
                } else if (num < tmp[0]) {
                    tmp.insert(tmp.begin(), num);
                }
            } else if (tmp.size()==2) {
                if (num > tmp[1]) {
                    tmp.push_back(num);
                } else if (num < tmp[0]) {
                    tmp.insert(tmp.begin(), num);
                } else if (num > tmp[0] && num < tmp[1]) {
                    tmp.insert(tmp.begin()+1, num);
                }
            } else {
                if(num > tmp[maxIndex]) {
                    maxIndex++;
                    maxIndex %= 3;
                    tmp[maxIndex] = num;
                } else if (num < tmp[maxIndex]) {
                    int second = maxIndex - 1;
                    second = second < 0 ? second+3 : second;
                    second %= 3;
                    int third = maxIndex - 2;
                    third = third < 0 ? third+3 : third;
                    third %= 3;
                    if (num > tmp[second]) {
                        int temp = tmp[second];
                        tmp[second] = num;
                        tmp[third] = temp; 
                    } else if (num > tmp[third] && num < tmp[second]) {
                        tmp[third] = num;
                    }
                }
            }
        }

        if(tmp.size()<3) {
            return tmp[tmp.size()-1];
        }

        maxIndex++;
        maxIndex %= 3;
        return tmp[maxIndex];

    }
};

int main(int argc, char* argv[]) {
    Solution sol;
    vector<int> nums = {1,2,2,5,3,5};
    cout<<sol.thirdMax(nums)<<endl;
    return 0;
}

