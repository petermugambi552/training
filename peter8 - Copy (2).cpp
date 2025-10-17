#include <iostream>
using namespace std;
namespace s
{
    int A = 1;
}
namespace s
{
    int B = A + 2;
}
int main(void)
{
    s::A = S::A + 1;
    {
        using namespace S;
        ++B;
    }
    cout << S::B << S::A;
    return;
}
