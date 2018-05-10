#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int minCost1 = cost[0];
        int minCost2 = cost[1];
        
        for(int i=2; i < cost.size(); ++i) {
            int minCost = cost[i] + min(minCost1, minCost2);
            minCost1 = minCost2;
            minCost2 = minCost;
        }

        return min(minCost1, minCost2);
    }
};

int main(int argc, char* argv[]) {
    return 0;
}