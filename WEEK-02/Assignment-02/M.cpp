#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;

    if (N == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int ans = 0;

    while (N != 0)
    {
        ans = ans * 10 + (N % 10);
        N = N / 10;
    }
    cout << ans << endl;
}