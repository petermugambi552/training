#include <iostream>
using namespace std;
namespace spaceA
{
    int A;
}
namespace spaceB
{
    int A;
}
using namespace spaceA;
int main()
{
    spaceA::A = spaceB::A = 1;
    cout << A + 1;
    return 0;
}
