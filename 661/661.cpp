#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        vector<vector<int>> result(M.size(), vector<int>(M[0].size()));
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[0].size(); j++) {
                result[i][j] = avg(M, i, j);
            }
        }
        return result;
    }
private:
    int avg(vector<vector<int>>& M, int x, int y) {
        int sum = 0;
        int count = 0;
        for (int i=-1; i <= 1; i++) {
            for (int j=-1; j <=1; j++) {
                int row = x+i;
                int col = y+j;
                if ( row >= 0 && row < M.size() && col >= 0 && col < M[0].size() ) {
                    sum += M[row][col];
                    count ++;
                }
            }
        }
        return sum/count;
    }
};

int main(int argc, char* argv[]) {
    return 0;
}