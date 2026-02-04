#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    int i = 1;
    long long sum = 1; 
    while (i <= N)
    {
        sum *= i;
        i++;
    }
    cout << sum << endl;
}