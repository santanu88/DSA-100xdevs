#include <iostream>
using namespace std;
int main()
{
    int N;
    int ans = 0;
    cin >> N;
    if (N == 0)
    {
        cout << 0 << endl;
    }
    while (N != 0)
    {
        ans = ans * 10 + N % 10;
        N = N / 10;
    }
    cout << ans << endl;
}