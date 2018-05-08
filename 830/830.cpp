#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> result;
        int i = 0;
        while(i < S.length()) {
            int j = i;
            while (j < S.length() - 1) {
                if(S[j] == S[j+1]) {
                    j++;
                } else {
                    break;
                }
            }

            if ((j - i + 1) >= 3) {
                vector<int> pos={i, j};
                result.push_back(pos);
            }

            i = j+1;
        }

        return result;
    }
};

int main(int argc, char* argv[]) {
    Solution sol;
    vector<vector<int>> result = sol.largeGroupPositions("abcdddeeeeaabbbcd");
    for (int i=0; i < result.size(); i++) {
        vector<int> tmp = result[i];
        cout<<tmp[0]<<" "<<tmp[1]<<endl;
    }
    return 0;
}
