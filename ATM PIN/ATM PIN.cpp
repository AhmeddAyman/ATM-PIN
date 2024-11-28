#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_4_Solution_48
// Monthly Loan Installment.



#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_4_Solution_49
// ATM PIN.


string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN code \n";
    cin >> PinCode;

    return PinCode;

}

bool Login()
{
    string PinCode;

    do
    {
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout << "\n Wrong PIN\n";
            system("Color 4F");

        }
    } while (PinCode != "1234");

    return 0;

}


int main()
{
    if (Login())
    {
        system("Color 2F");
        cout << "\n Your Account balacnce is " << 7500 << '\n';
    };

    return 0;
}




