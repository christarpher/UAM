#include "tax.h"
using namespace std;

void tax_prog()
{
    cout << "Welcome to the Compounding Interest Program! \n\n";
    cout << "Please enter the monthly deposit amount: $";
    while (!(std::cin >> deposit))
    {
        cout << "Please, use numbers.. \n\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cout << "Please enter the tax (EG. 5% tax = 5): ";
    while (!(std::cin >> tax))
    {
        cout << "Please, use numbers.. \n\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cout << "Please enter the desired amount: $";
    while (!(std::cin >> desiredamt))
    {
        cout << "Please, use numbers.. \n\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    amount = deposit;
    do{
        amount += deposit;
        taxer = amount * (tax/100);
        amount += taxer;
        months++;
    }while(amount < desiredamt);
    cout << "In " << months << " months you will have: $" << amount << "\n\n";
    wait();
}
