
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write C++ code here
    int n;
    std::cin >> n;

    vector<int> prime(n + 1, 1);
    prime[1] = 0;
    ;

    for (int i = 2; i <= n; i++)
    {
        if (!prime[i])
        {
            continue;
        }
        for (int j = 2 * i; j <= n; j += i)
        {
            prime[j] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (prime[i])
            cout << i << " is a prime" << endl;
        else
            cout << i << " is not a prime" << endl;
    }

    return 0;
}