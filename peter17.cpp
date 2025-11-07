#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter range:";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i += 2)
    {
        sum += i;
    }
    cout << "odd num sum upto n is" << sum;
    return 0;
}