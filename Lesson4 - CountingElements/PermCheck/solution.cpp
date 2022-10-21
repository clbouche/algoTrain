// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


//pas compatible avec les antiSum

#include <set>
#include <algorithm>

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    if (A.back() == A.size())
        return 1;
   return 0;
}