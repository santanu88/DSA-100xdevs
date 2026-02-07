#include <iostream>
using namespace std;

int printfac(int n)
{
    int ans = 1;
    for (int i = 1; i <= n ;i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;
    int nfact = printfac(n);
    int rfact = printfac(r);
    int nrfact = printfac(n - r);
    cout << nfact / (rfact * nrfact);
}