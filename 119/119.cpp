#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result = {1};
        for(int i=1; i<=rowIndex; i++) {
            int previous = result[0];
            for (int j=1;j<i;j++) {
                int tmp = result[j];
                result[j] = previous + result[j];
                previous = tmp;
            }
            result.push_back(1);
        }

        return result;
    }
};

int main(int argc, char* argv[]) {
    Solution sol;
    vector<int> result = sol.getRow(5);
    for (int i=0;i<result.size();i++) {
        cout<<result[i]<<" ";
    }
    return 0;
}

