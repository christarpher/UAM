#include "temperature.h"
using namespace std;

void temp_prog()
{
   cout << char(201) << "様様様様様様様様様様様" << char(187) << endl
        << char(186) << "a - Convert Fahrenheit" << char(186) << endl
        << char(186) << "b - Convert Celsius   " << char(186) << endl
        << char(186) << "c - Convert Kelvin    " << char(186) << endl
        << char(200) << "様様様様様様様様様様様" << char(188) << endl << endl;

   cout << "Selection: ";
   for(int counter=0;counter<1;counter++)
   {
       selection=getch();
       switch(selection)
       {
           case 'a':
           case 'A':
                system("CLS");
                showinfo();

                cout << "Please enter your temperature in fahrenheit: ";
                while (!(std::cin >> fahrenheit))
                {
                    cout << "Please, use numbers.. \n\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                temp[1] = fahrenheit - 32;
                temp[1] /= 1.8;

                temp[2] = fahrenheit + 459.67;
                temp[2] /= 1.8;

                cout << setprecision(12) << temp[1] << " degrees Celsius \n"
                     << setprecision(12) << temp[2] << " degrees Kelvin \n\n";
            break;

           case 'b':
           case 'B':
                system("CLS");
                showinfo();

                cout << "Please enter your temperature in celsius: ";
                while (!(std::cin >> celsius))
                {
                    cout << "Please, use numbers.. \n\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                temp[1] = celsius * 1.8;
                temp[1] += 32;

                temp[2] = celsius + 273.15;

                cout << setprecision(12) << temp[1] << " degrees Fahrenheit \n"
                     << setprecision(12) << temp[2] << " degrees Kelvin \n\n";
            break;

           case 'c':
           case 'C':
                system("CLS");
                showinfo();

                cout << "Please enter your temperature in kelvin: ";
                while (!(std::cin >> kelvin))
                {
                    cout << "Please, use numbers.. \n\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                temp[1] = kelvin - 273.15;
                temp[1] *= 1.8;
                temp[1] += 32;

                temp[2] = kelvin - 273.15;

                cout << setprecision(12) << temp[1] << " degrees Fahrenheit \n"
                     << setprecision(12) << temp[2] << " degrees Celsius \n\n";
            break;

            default:
                cout << "Not a valid option!\n";
                counter--;
            break;
       }
   }
   wait();
}
