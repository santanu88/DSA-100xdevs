#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long raray[N];

    // take input
    for (int i = 0; i <= N - 1; i++)
    {
        cin >> raray[i];
    }
    // take output
    for (int i = N - 1; i >= 0; i--)
    {
        cout << raray[i] << " ";
    }
}
