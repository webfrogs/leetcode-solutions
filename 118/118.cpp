#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        if (numRows == 0) {
            return result;
        }

        vector<int> previousRow = {1};
        result.push_back(previousRow);
        for(int i=1; i<numRows; i++) {
            vector<int> currentRow;
            for(int j=0; j <= previousRow.size(); j++) {
                if (j == 0 || j == previousRow.size()) {
                    currentRow.push_back(1);
                    continue;
                }
                currentRow.push_back(previousRow[j-1] + previousRow[j]);
            }
            result.push_back(currentRow);
            previousRow = currentRow;
        }
        return result;
    }
};

int main(int argc, char* argv[]) {
    Solution sol;
    vector<vector<int>> result = sol.generate(5);
    for (int i=0;i<result.size();i++) {
        vector<int> row = result[i];
        for(int j=0; j<row.size();j++) {
            cout<<row[j];
        }
        cout<<endl;
    }
    return 0;
}

