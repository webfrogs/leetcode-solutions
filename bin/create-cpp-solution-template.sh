#!/bin/sh

set -e
cd $(dirname $0)
cd ..

LeetCodeNo="$1"
if [ -z "${LeetCodeNo}" ]; then
    echo "Error! Leetcode number is not found."
    exit 1
fi

if [ -f "${LeetCodeNo}/${LeetCodeNo}.cpp" ]; then
    echo "Error! C++ solution file exists."
    exit 1
fi

if [ ! -d "${LeetCodeNo}" ]; then
    mkdir "${LeetCodeNo}"
fi

cat <<EOF > "${LeetCodeNo}/${LeetCodeNo}.cpp"
#include <iostream>
#include <vector>
using namespace std;



int main(int argc, char* argv[]) {
    return 0;
}

EOF

echo "C++ template file is generated successfully at '${LeetCodeNo}/${LeetCodeNo}.cpp'" 




