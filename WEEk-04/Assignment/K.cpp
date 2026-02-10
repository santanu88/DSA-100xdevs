#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A;
        cin >> A;
        int swapR[A];
        for (int i = 0; i < A; i++)
        {
            cin >> swapR[i];
        }

        for (int i = 1; i < A; i += 2)
        {
            swap(swapR[i],swapR[i - 1]);
        }
    }
}