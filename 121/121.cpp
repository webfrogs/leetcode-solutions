#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int minPrice = INT_MAX;
        int count = prices.size() - 1;
        for (int i=0; i<count; i++) {
            if (prices[i] < prices[i+1]) {
                minPrice = min(minPrice, prices[i]);
                result = max(result, prices[i+1]-minPrice);
            }
        }

        return result;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}