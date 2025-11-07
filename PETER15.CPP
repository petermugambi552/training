#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int p;
        cout << "enter a number:";
        cin >> p;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < p - i - 1; j++)
            {
                cout << "";
            }
            for (int j = 1; j <= i + 1; j++)
            {
                cout << j;
            }
            for (int j = i; j > 0; j--)
            {
                cout << j;
            }
            cout << endl;
        }
    }
    return 0;
}
