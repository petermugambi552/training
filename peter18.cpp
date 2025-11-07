#include <iostream>
using namespace std;
int main();

{
    int a;
    int b;
    cout << "enter two numbers" << endl;
    cin >> a;
    cin >> b;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = tenp;
    }
    cout << "GCD=" << a;
    return 0;
}
