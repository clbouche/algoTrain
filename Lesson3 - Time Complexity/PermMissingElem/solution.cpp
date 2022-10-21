// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <algorithm>
#include <vector>

int solution(std::vector<int> &A) {
    if (!A.empty()) {
		sort(A.begin(), A.end());
		for (int i = 0; i <= A.size(); i++)
		{
			if (A[i] != i + 1)
				return  i + 1;
		}
	}
	return 1;
}