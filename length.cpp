#include "length.h"
using namespace std;

void length_prog()
{
   cout << "Welcome to the Length converter program. \n\n";
   cout << char(201) << "อออออออออออออออออออออออ" << char(187) << endl
        << char(186) << "a - Convert Millimeters" << char(186) << endl
        << char(186) << "b - Convert Centimeters" << char(186) << endl
        << char(186) << "c - Convert Inches     " << char(186) << endl
        << char(186) << "d - Convert Feet       " << char(186) << endl
        << char(186) << "e - Convert Yards      " << char(186) << endl
        << char(186) << "f - Convert Meters     " << char(186) << endl
        << char(186) << "g - Convert Kilometers " << char(186) << endl
        << char(186) << "h - Convert Miles      " << char(186) << endl
        << char(200) << "อออออออออออออออออออออออ" << char(188) << endl << endl;
   cout << "Selection: ";

   for(int choose=0;choose<1;choose++)
   {
       selector = getch();

       switch(selector)
       {
           case 'a':
           case 'A':

               system("CLS");
               showinfo();

               cout << "Please enter your amount of Millimeters: ";
               while (!(std::cin >> number[0]))
               {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
               }

               number[1] = number[0] / 10;
               number[2] = number[0] / 25.4;
               number[3] = number[0] / 304.8;
               number[4] = number[0] / 914.4;
               number[5] = number[0] / 1000;
               number[6] = number[0] / 1000000;
               number[7] = number[0] / 1609344;

               cout << endl << endl;
               cout << setprecision(12) << number[1] << " centimeter(s). \n";
               cout << setprecision(12) << number[2] << " inch(es). \n";
               cout << setprecision(12) << number[3] << " feet. \n";
               cout << setprecision(12) << number[4] << " yard(s). \n";
               cout << setprecision(12) << number[5] << " meter(s). \n";
               cout << setprecision(12) << number[6] << " kilometer(s). \n";
               cout << setprecision(12) << number[7] << " mile(s). \n";
           break;

           case 'b':
           case 'B':

               system("CLS");
               showinfo();

               cout << "Please enter your amount of Centimeters: ";
               while (!(std::cin >> number[0]))
               {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
               }

               number[1] = number[0] * 10;
               number[2] = number[0] / 2.54;
               number[3] = number[0] / 30.48;
               number[4] = number[0] / 91.44;
               number[5] = number[0] / 100;
               number[6] = number[0] / 100000;
               number[7] = number[0] / 160934.4;

               cout << endl << endl;
               cout << setprecision(12) << number[1] << " millimeters(s). \n";
               cout << setprecision(12) << number[2] << " inch(es). \n";
               cout << setprecision(12) << number[3] << " feet. \n";
               cout << setprecision(12) << number[4] << " yard(s). \n";
               cout << setprecision(12) << number[5] << " meter(s). \n";
               cout << setprecision(12) << number[6] << " kilometer(s). \n";
               cout << setprecision(12) << number[7] << " mile(s). \n";
           break;

           case 'c':
           case 'C':

               system("CLS");
               showinfo();

               cout << "Please enter your amount of Inches: ";
               while (!(std::cin >> number[0]))
               {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
               }

               number[1] = (number[0] * 10) * 2.54;
               number[2] = number[0] * 2.54;
               number[3] = number[0] / 12;
               number[4] = number[0] / 36;
               number[5] = number[0] / 39.3700787;
               number[6] = number[0] / 39370.0787;
               number[7] = number[0] / 63360;

               cout << endl << endl;
               cout << setprecision(12) << number[1] << " millimeter(s). \n";
               cout << setprecision(12) << number[2] << " centimeter(s). \n";
               cout << setprecision(12) << number[3] << " feet. \n";
               cout << setprecision(12) << number[4] << " yard(s). \n";
               cout << setprecision(12) << number[5] << " meter(s). \n";
               cout << setprecision(12) << number[6] << " kilometer(s). \n";
               cout << setprecision(12) << number[7] << " mile(s). \n";
           break;

           case 'd':
           case 'D':


               system("CLS");
               showinfo();

               cout << "Please enter your amount of Feet: ";
               while (!(std::cin >> number[0]))
               {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
               }

               number[1] = number[0] * 304.8 ;
               number[2] = number[0] * 30.48 ;
               number[3] = number[0] * 12 ;
               number[4] = number[0] / 3 ;
               number[5] = number[0] / 3.2808399 ;
               number[6] = number[0] / 3280.8399 ;
               number[7] = number[0] / 5280 ;

               cout << endl << endl;
               cout << setprecision(12) << number[1] << " millimeter(s). \n";
               cout << setprecision(12) << number[2] << " centimeter(s). \n";
               cout << setprecision(12) << number[3] << " inch(es). \n";
               cout << setprecision(12) << number[4] << " yard(s). \n";
               cout << setprecision(12) << number[5] << " meter(s). \n";
               cout << setprecision(12) << number[6] << " kilometer(s). \n";
               cout << setprecision(12) << number[7] << " mile(s). \n";
            break;

            case 'e':
            case 'E':

               system("CLS");
               showinfo();

               cout << "Please enter your amount of Yards: ";
               while (!(std::cin >> number[0]))
               {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
               }

               number[1] = number[0] * 914.4;
               number[2] = number[0] * 91.44;
               number[3] = number[0] * 36;
               number[4] = number[0] * 3;
               number[5] = number[0] / 1.0936133;
               number[6] = number[0] / 1093.6133;
               number[7] = number[0] / 1760;

               cout << endl << endl;
               cout << setprecision(12) << number[1] << " millimeters(s). \n";
               cout << setprecision(12) << number[2] << " centimeters(s). \n";
               cout << setprecision(12) << number[3] << " inch(es). \n";
               cout << setprecision(12) << number[4] << " feet. \n";
               cout << setprecision(12) << number[5] << " meter(s). \n";
               cout << setprecision(12) << number[6] << " kilometer(s). \n";
               cout << setprecision(12) << number[7] << " mile(s). \n";

            break;

            case 'f':
            case 'F':

               system("CLS");
               showinfo();

               cout << "Please enter your amount of Meters: ";
               while (!(std::cin >> number[0]))
               {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
               }

               number[1] = number[0] * 1000;
               number[2] = number[0] * 100;
               number[3] = number[0] * 39.3700787;
               number[4] = number[0] * 3.2808399;
               number[5] = number[0] * 1.0936133;
               number[6] = number[0] / 1000;
               number[7] = number[0] / 1609.344;

               cout << endl << endl;
               cout << setprecision(12) << number[1] << " millimeter(s). \n";
               cout << setprecision(12) << number[2] << " centimeter(s). \n";
               cout << setprecision(12) << number[3] << " inch(es). \n";
               cout << setprecision(12) << number[4] << " feet(s). \n";
               cout << setprecision(12) << number[5] << " yards(s). \n";
               cout << setprecision(12) << number[6] << " kilometer(s). \n";
               cout << setprecision(12) << number[7] << " mile(s). \n";
            break;

            case 'g':
            case 'G':

               system("CLS");
               showinfo();

               cout << "Please enter your amount of Kilometers: ";
               while (!(std::cin >> number[0]))
               {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
               }

               number[1] = number[0] * 1000000;
               number[2] = number[0] * 100000;
               number[3] = number[0] * 39370.0787;
               number[4] = number[0] * 3280.8399;
               number[5] = number[0] * 1093.6133;
               number[6] = number[0] * 1000;
               number[7] = number[0] / 1.621371192;

               cout << endl << endl;
               cout << setprecision(12) << number[1] << " millimeter(s). \n";
               cout << setprecision(12) << number[2] << " centimeter(s). \n";
               cout << setprecision(12) << number[3] << " inch(es). \n";
               cout << setprecision(12) << number[4] << " feet. \n";
               cout << setprecision(12) << number[5] << " yards(s). \n";
               cout << setprecision(12) << number[6] << " meter(s). \n";
               cout << setprecision(12) << number[7] << " mile(s). \n";
            break;

            case 'h':
            case 'H':

               system("CLS");
               showinfo();

               cout << "Please enter your amount of Miles: ";
               while (!(std::cin >> number[0]))
               {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
               }

               number[1] = number[0] * 1609344;
               number[2] = number[0] * 160934.4 ;
               number[3] = number[0] * 63360;
               number[4] = number[0] * 5280;
               number[5] = number[0] * 1760;
               number[6] = number[0] * 1609.344;
               number[7] = number[0] * 1.609344;

               cout << endl << endl;
               cout << setprecision(12) << number[1] << " millimeter(s). \n";
               cout << setprecision(12) << number[2] << " centimeter(s). \n";
               cout << setprecision(12) << number[3] << " inch(es). \n";
               cout << setprecision(12) << number[4] << " feet. \n";
               cout << setprecision(12) << number[5] << " yard(s). \n";
               cout << setprecision(12) << number[6] << " meter(s). \n";
               cout << setprecision(12) << number[7] << " kilometer(s). \n";
            break;

            default:
                cout << "Not a valid option!\n";
                choose--;
            break;
       }
    }
    wait();
}
