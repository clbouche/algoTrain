// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <bitset>

std::string toBinary(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int solution(int N) {
    int counter = 0, sol = 0;
    std::string bin = toBinary(N);
    
    for (unsigned int i = 0; i < bin.size(); i++)
    {
        if (bin[i] == '0')
            counter++;
        else if (bin[i] == '1')
        {
            sol = max(sol, counter);
            counter = 0;
        }
    }
    return sol;
}

