#include "slope.h"
using namespace std;

void slope_prog()
{
   cout << "Please enter the following. \n";
   cout << "Coordinate set 1, X: ";
   while (!(std::cin >> c1x))
   {
     cout << "Please, use numbers.. \n\n";
     std::cin.clear();
     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   }
   cout << "Coordinate set 1, Y: ";
   while (!(std::cin >> c1y))
   {
     cout << "Please, use numbers.. \n\n";
     std::cin.clear();
     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   }
   cout << "Coordinate set 2, X: ";
   while (!(std::cin >> c2x))
   {
     cout << "Please, use numbers.. \n\n";
     std::cin.clear();
     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   }
   cout << "Coordinate set 2, Y: ";
   while (!(std::cin >> c2y))
   {
     cout << "Please, use numbers.. \n\n";
     std::cin.clear();
     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   }
   random_slope[1] = c2y - c1y;
   random_slope[2] = c2x - c1x;
   random_slope[3] = random_slope[1] / random_slope[2];
   cout << "Slope: " << random_slope[3] << endl << endl;
   wait();
}
