#include <iostream>
using namespace std;

long long factorial(int N)
{
    long long ans = 1;
    for (int i = 1; i <= N; i++)
    {
        ans *= i;
    }
    cout << ans << endl;
}

int main()
{
    long long N;
    cin >> N;
    factorial(N);
}