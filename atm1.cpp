#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        string pin;
        cout << "Enter PIN: ";
        cin >> pin;

        int option;
        cout << "Enter option (1: Check Balance, 2: Withdraw Money): ";
        cin >> option;

        if (pin == "9756")
        {
            if (option == 1)
            {
                cout << "Check balance" << endl;
            }
            else if (option == 2)
            {
                cout << "Withdraw money" << endl;
            }
            else
            {
                cout << "Invalid option" << endl;
            }
        }
        else
        {
            cout << "Wrong PIN" << endl;
        }

        cout << "\n\n";
    }

    return 0;
}
