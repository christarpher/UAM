#include "tip.h"
using namespace std;

void tip_prog()
{
    cout << "Welcome to the Taxing Program! \n\n";
    cout << "Please enter the bill: $";
    while (!(std::cin >> bill))
    {
        cout << "Please, use numbers.. \n\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cout << "Please enter the tip (EG. 5% tip = 5): ";
    while (!(std::cin >> tip))
    {
        cout << "Please, use numbers.. \n\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    newtip = tip/100;
    bill *= newtip;
    cout << "$" << setprecision(12) << bill << " is a " << tip << "% tip  \n\n";
    wait();
}
