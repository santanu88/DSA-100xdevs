
// to print all even numbers from 1 to N
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }

        i++;
    }
}
// another way to slove this problem

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1; // beacuse we know that we have to print even numbers and 2 is smallest even number

    while (i <= n)
    {

        cout << i << endl;

        i += 2; // it will incrase the i value 2 times
    }
}