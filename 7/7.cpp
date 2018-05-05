#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        bool negative = x < 0 ? true : false;
        if (negative) {
            x = -x;
        }

        long rev = 0;
        while (x) {
            rev = (rev*10 + x%10);
            x/=10;
        }
        if (negative) {
            rev = -rev;
        }

        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }

        return rev;
    }
};


int main(int argc, char* argv[]) {
    Solution sol;
    cout<<sol.reverse(3421)<<endl;
    return 0;
}