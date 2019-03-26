#include "electrical.h"
using namespace std;

void electrical_prog()
{
    cout << "Welcome to the Electrical Converter Program! \n\n";
    cout << char(201) << "様様様様様様様様様様様" << char(187) << endl
         << char(186) << "a - Find the wattage. " << char(186) << endl
         << char(186) << "b - Find the voltage. " << char(186) << endl
         << char(186) << "c - Find the Amperage." << char(186) << endl
         << char(200) << "様様様様様様様様様様様" << char(188) << endl << endl;
    cout << "Selection: ";
    for(int counter=0;counter<1;counter++)
    {
        selection3=getch();
        switch(selection3)
        {
            case 'a':
            case 'A':
                system("CLS");
                showinfo();
                cout << "Please enter the voltage: ";
                while (!(std::cin >> voltage))
                {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                cout << "Please enter the amperage: ";
                while (!(std::cin >> amperage))
                {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                wattage = amperage * voltage;
                cout << setprecision(12) << wattage << " watts \n\n";
            break;

            case 'b':
            case 'B':
                system("CLS");
                showinfo();
                cout << "Please enter the wattage: ";
                while (!(std::cin >> wattage))
                {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                cout << "Please enter the amperage: ";
                while (!(std::cin >> amperage))
                {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                voltage = wattage / amperage;
                cout << setprecision(12) << voltage << " volts \n\n";
            break;

            case 'c':
            case 'C':
                system("CLS");
                showinfo();
                cout << "Please enter the wattage: ";
                while (!(std::cin >> wattage))
                {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                cout << "Please enter the voltage: ";
                while (!(std::cin >> voltage))
                {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                amperage = wattage / voltage;
                cout << setprecision(12) << amperage << " amps \n\n";
            break;

            default:
                cout << "Not a valid option!\n";
                counter--;
            break;
        }
    }
    wait();
}

