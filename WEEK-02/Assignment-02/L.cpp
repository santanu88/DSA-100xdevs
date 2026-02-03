#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
long  long N;
    cin >> N;
    while (N != 0)
    {
        sum += N % 10;
        N = N / 10;
    }
    cout << sum << endl;
}
