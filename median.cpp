#include "median.h"
using namespace std;

void median_prog()
{
    cout << "Welcome to the median of a line segment program! \n\n";
    cout << "please enter the following \n\n";
    cout << "Coordinate set 1 - X: ";
    while (!(std::cin >> c1x_med))
    {
        cout << "Please, use numbers.. \n\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cout << "Coordinate set 1 - Y: ";
    while (!(std::cin >> c1y_med))
    {
        cout << "Please, use numbers.. \n\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cout << "Coordinate set 2 - X: ";
    while (!(std::cin >> c2x_med))
    {
        cout << "Please, use numbers.. \n\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cout << "Coordinate set 2 - Y: ";
    while (!(std::cin >> c2y_med))
    {
        cout << "Please, use numbers.. \n\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    coor[1] = (c1x_med + c2x_med) / 2;
    coor[2] = (c1y_med + c2y_med) / 2;
    cout << endl << endl << "Midpoint: (" << coor[1] << "," << coor[2] << ") \n\n";
    wait();
}
