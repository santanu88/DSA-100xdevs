#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long origin = N;
    long long ans = 0;

    while (N != 0)
    {
        ans = ans * 10 + (N % 10);
        N /= 10;    
    }

    if (ans == origin)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}