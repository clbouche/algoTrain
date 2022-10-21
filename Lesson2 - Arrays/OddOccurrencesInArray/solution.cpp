// you can use includes, for example:
// #include <algorithm>

#include <vector>
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(std::vector<int> &A) {
    sort(A.begin(), A.end());
    for(unsigned int i = 0; i < A.size(); i += 2)
    {
        if(A[i] != A[i + 1] )
            return A[i];
    }
    return 0;
}