#include <iostream>

using namespace std;

void findzero(long long N)
{

    long long ctn = 0;
    if (N == 0) {
        cout << 1 << endl;
        return ;
    }
    while (N != 0)
    {
        if (N % 10 == 0) {
            ctn++;
        }

        N = N / 10;
    }
    cout << ctn << endl;
    return ;
}

int main()
{
    long long N;
    cin >> N;
    findzero(N);
}