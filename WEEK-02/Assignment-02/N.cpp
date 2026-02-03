#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N != 0 && N % 10 == 0)
    {
        cout << "NO";
        return 0;
    }

    int origin = N;
    int ans = 0;

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