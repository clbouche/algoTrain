// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <vector>

std::vector<int> solution(std::vector<int> &A, int K) {
   while (!A.empty() && K != 0)
	{
		int tmp = A.back(); 
		A.pop_back();
		A.insert(A.begin(), tmp);
        K--;
	}
	return A;
}