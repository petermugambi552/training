#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstname, lastname;
    cout << "enter your first name:";
    cin >> firstname;
    cout << "enter your lastname:";
    cin >> lastname;
    string fullname = firstname + "" + lastname;
    cout << "hello," << fullname << "!" << endl;
    cout << "your name has" << fullname.length() << "characters." << endl;
    return 0;
}
