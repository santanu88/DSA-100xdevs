#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long X;
    int pos = 0, neg = 0, eve = 0, odd = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> X;

        if (X > 0)
            pos++;
        else if (X < 0)
            neg++;

        if (X % 2 == 0)
            eve++;
        else
            odd++;
    }
    cout << pos << endl << neg << endl << eve << endl << odd << endl;

    return 0;
}