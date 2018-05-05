#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        if (prices.size() <= 1) {
            return result;
        }

        int index = 0;
        while (index < (prices.size()-1)) {
            while (prices[index] >= prices[index + 1]) {
                index++;
                if (index==prices.size()-1) {
                    return result;
                }
            }

            while (prices[index] < prices[index+1]) {
                result += (prices[index+1] - prices[index]);
                index++;
                if (index == prices.size()-1) {
                    return result;
                }
            }
        }


        return result;
    }
};

int main(int argc, char* argv[]) {
    vector<int> input({7,1,5,3,6,4});
    Solution sol;
    cout<<sol.maxProfit(input)<<endl;
    return 0;
}