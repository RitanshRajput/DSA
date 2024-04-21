#include <iostream>
using namespace std;

class Solution
{
public:
    int printN(int n)
    {
        printN(n - 1);
        cout << n << ", ";
    }
};

int main()
{
    int n = 10;
    Solution g;
    g.printN(n);

    return 0;
}