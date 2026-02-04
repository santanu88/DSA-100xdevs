#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    int sum = N * (N + 1) / 2;
    cout << sum << endl;
}

// or

#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    int i = 1;
    long long sum = 0; 
    while (i <= N)
    {
        sum = sum + i;
        i++;
    }
    cout << sum << endl;
}