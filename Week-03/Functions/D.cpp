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
    if (ctn == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int N;
    cin >> N;
    bool answ = prime(N);
    if (answ)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << " Not Prime" << endl;
    }
}