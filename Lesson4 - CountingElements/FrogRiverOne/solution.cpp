// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <vector>
#include <set>


int solution(int X, vector<int> &A) {
    set<int>    check;
    for (unsigned int i = 0; i < A.size(); i++)
    {
        check.insert(A[i]);
        if (*check.end() == X)
            return i;
    }
    return -1;
}