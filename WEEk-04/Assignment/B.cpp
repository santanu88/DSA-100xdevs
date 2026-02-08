#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long add[N];

    for (int i = 0; i <= N- 1; i++)
    {
       cin >> add[i];
    }

    long long sum=0;
    for (int i = 0; i <= N-1; i++)
    {
        sum += add[i];
    }
    cout<< sum << endl;
}