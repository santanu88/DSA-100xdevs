#include <iostream>

using namespace std;
bool prime(int N)
{
    int ctn = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            ctn++;
        }
    }
    return (ctn == 2);
}

int main()
{
    int N;
    cin >> N;
   

    for (int i = 1; i <= N; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }
}