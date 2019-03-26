#include "showinfo.cpp"
#include "wait.cpp"
#include "setcolor.cpp"
#include "basicmode.cpp"
#include "gpa.cpp"
#include "force.cpp"
#include "slope.cpp"
#include "median.cpp"
#include "tax.cpp"
#include "tip.cpp"
#include "temperature.cpp"
#include "length.cpp"
#include "weight.cpp"
#include "timeprog.cpp"
#include "electrical.cpp"
using namespace std;



void mainmenu()
{
    //VARIABLES
    char selection;
    string search, define;
    //VARIABLES END
    system("CLS");
    showinfo();
    cout << char(201) << "อออออออออ" << char(187) << endl
         << char(186) << "Main menu" << char(186) << endl
         << char(204) << "อออออออออ" << char(202) << "ออออออออ" << char(203) << "ออออออออออออออออออออออออออออออออออออออออออออออออออออออ" << char(187) << endl
         << char(186) << "a - Basic modes.  " << char(186) << " - This contains many basic calculation options       " << char(186) << endl
         << char(186) << "b - Converters.   " << char(186) << " - Contains basic converters for real world situations" << char(186) << endl
         << char(186) << "c - Geometry.     " << char(186) << " - This contains calculations based on shape structure" << char(186) << endl
         << char(186) << "d - Repository.   " << char(186) << " - Contains password manager, and easy download links " << char(186) << endl
         << char(186) << "e - Games.        " << char(186) << " - Contains simple games that save scores             " << char(186) << endl
         << char(186) << "f - Credits.      " << char(186) << " - Contains a list of people who helped me make this  " << char(186) << endl
         << char(186) << "g - Help Menu.    " << char(186) << " - Contains a more full guide on how to use UAM       " << char(186) << endl
         << char(200) << "ออออออออออออออออออ" << char(202) << "ออออออออออออออออออออออออออออออออออออออออออออออออออออออ" << char(188) << endl << endl;

    cout << "Selection: ";
    for(int count1=0;count1<1;count1++)
    {
        selection = getch();
        switch(selection)
        {
            case 'a':
            case 'A':
                system("CLS");
                showinfo();
                cout << char(201) << "ออออออออออ" << char(187) << endl
                     << char(186) << "Basic menu" << char(186) << endl
                     << char(204) << "ออออออออออ" << char(202) << "ออออออออออออออ" << char(203) << "อออออออออออออออออออออออออออออออออออออออออออออออออออ" << char(187) << endl
                     << char(186) << "a - Basic (+, -, *, /, ^)" << char(186) << " - Basic calculations                              " << char(186) << endl
                     << char(186) << "b - GPA calculator.      " << char(186) << " - Calculates GPA, can use the a-f or the 4-0 scale" << char(186) << endl
                     << char(186) << "c - Force Calculator.    " << char(186) << " - A simple force calculator                       " << char(186) << endl
                     << char(186) << "d - Find the slope.      " << char(186) << " - Finds the slope of a line, based on coordinates " << char(186) << endl
                     << char(186) << "e - Median of a Line.    " << char(186) << " - Shows middle point of a line, given coordinates " << char(186) << endl
                     << char(186) << "f - Compounding interest." << char(186) << " - money after you take into account interest      " << char(186) << endl
                     << char(186) << "g - Easy Tipping.        " << char(186) << " - A very simple tipping program                   " << char(186) << endl
                     << char(186) << "                         " << char(186) << "                                                   " << char(186) << endl
                     << char(186) << "z - Home Menu.           " << char(186) << " - Brings you back to the main menu                " << char(186) << endl
                     << char(200) << "อออออออออออออออออออออออออ" << char(202) << "อออออออออออออออออออออออออออออออออออออออออออออออออออ" << char(188) << endl << endl;

                cout << "Selection: ";
                for(int counter=0;counter<1;counter++)
                {
                    selection = getch();
                    switch(selection)
                    {
                        case 'a':
                        case 'A':
                            system("CLS");
                            showinfo2();
                            basicmode();
                            mainmenu();
                        break;

                        case 'b':
                        case 'B':
                            system("CLS");
                            showinfo();
                            gpa();
                            mainmenu();
                        break;

                        case 'c':
                        case 'C':
                            system("CLS");
                            showinfo();
                            force();
                            mainmenu();
                        break;

                        case 'd':
                        case 'D':
                            system("CLS");
                            showinfo();
                            slope_prog();
                            mainmenu();
                        break;

                        case 'e':
                        case 'E':
                            system("CLS");
                            showinfo();
                            median_prog();
                            mainmenu();
                        break;

                        case 'f':
                        case 'F':
                            system("CLS");
                            showinfo();
                            tax_prog();
                            mainmenu();
                        break;

                        case 'g':
                        case 'G':
                            system("CLS");
                            showinfo();
                            tip_prog();
                            mainmenu();
                        break;

                        case 'z':
                        case 'Z':
                            mainmenu();
                        break;

                        default:
                            cout << "Sorry! \"" << selection << "\" is not an option!\n";
                            counter--;
                        break;
                    }
                }
            break;

            case 'b':
            case 'B':
                system("CLS");
                showinfo();
                cout << char(201) << "ออออออออออออออ" << char(187) << endl
                     << char(186) << "Converter menu" << char(186) << endl
                     << char(204) << "ออออออออออออออ" << char(202) << "อ" << char(203) << "ออออออออออออออออออออออออออออออออออออออออออออออออออออออ" << char(187) << endl
                     << char(186) << "a - Temperature." << char(186) << " - Select a variety of Temperatures to convert!       " << char(186) << endl
                     << char(186) << "b - Length.     " << char(186) << " - Select a variety of Lengths to convert!            " << char(186) << endl
                     << char(186) << "c - Weight.     " << char(186) << " - Select a variety of Weights to convert!            " << char(186) << endl
                     << char(186) << "d - Time.       " << char(186) << " - Select a variety of Times to convert!              " << char(186) << endl
                     << char(186) << "e - Electrical. " << char(186) << " - Choose what you want to convert; watts, amps, volts" << char(186) << endl
                     << char(186) << "                " << char(186) << "                                                      " << char(186) << endl
                     << char(186) << "z - Home Menu.  " << char(186) << " - Brings you back to the main menu                   " << char(186) << endl
                     << char(200) << "ออออออออออออออออ" << char(202) << "ออออออออออออออออออออออออออออออออออออออออออออออออออออออ" << char(188) << endl << endl;

                cout << "Selection: ";
                for(int counter=0;counter<1;counter++)
                {
                    selection = getch();
                    switch(selection)
                    {
                        case 'a':
                        case 'A':
                            system("CLS");
                            showinfo();
                            temp_prog();
                            mainmenu();
                        break;

                        case 'b':
                        case 'B':
                            system("CLS");
                            showinfo();
                            length_prog();
                            mainmenu();
                        break;

                        case 'c':
                        case 'C':
                            system("CLS");
                            showinfo();
                            weight_prog();
                            mainmenu();
                        break;

                        case 'd':
                        case 'D':
                            system("CLS");
                            showinfo();
                            time_prog();
                            mainmenu();
                        break;

                        case 'e':
                        case 'E':
                            system("CLS");
                            showinfo();
                            electrical_prog();
                            mainmenu();
                        break;

                        case 'z':
                        case 'Z':
                            mainmenu();
                        break;

                        default:
                            cout << "Sorry! \"" << selection << "\" is not an option!\n";
                            counter--;
                        break;
                    }
                }
            break;

            case 'c':
            case 'C':
                system("CLS");
                showinfo();
                cout << char(201) << "อออออออออออออ" << char(187) << endl
                     << char(186) << "Geometry menu" << char(186) << endl
                     << char(204) << "อออออออออออออ" << char(202) << "อออออออ" << char(203) << "อออออออออออออออออออออออออออออออออออออออออออออออออออออออ" << char(187) << endl
                     << char(186) << "a - find a definition" << char(186) << " - Finds an online definition. Eg. incenter            " << char(186) << endl
                     << char(186) << "b - Circles          " << char(186) << " - Area and circumference calculator for circles       " << char(186) << endl
                     << char(186) << "c - Angle Finding    " << char(186) << " - Finds angles based on sides of a polygon            " << char(186) << endl
                     << char(186) << "d - Diagonal finding " << char(186) << " - Finds all the diagonals with the sides of a polygon " << char(186) << endl
                     << char(186) << "e - Triangle Checker " << char(186) << " - Checks what kind of triangle it is                  " << char(186) << endl
                     << char(186) << "f - Right Triangle   " << char(186) << " - Finds a missing side of a right triangle            " << char(186) << endl
                     << char(186) << "                     " << char(186) << "                                                       " << char(186) << endl
                     << char(186) << "z - Home Menu.       " << char(186) << " - Brings you back to the main menu                    " << char(186) << endl
                     << char(200) << "อออออออออออออออออออออ" << char(202) << "อออออออออออออออออออออออออออออออออออออออออออออออออออออออ" << char(188) << endl << endl;

                cout << "Selection: ";
                for(int counter=0;counter<1;counter++)
                {
                    selection = getch();
                    switch(selection)
                    {
                        case 'a':
                        case 'A':
                            system("CLS");
                            showinfo();
                            cout << "Please type what you would like to define: ";
                            cin >> search;
                            define = "start http://dictionary.reference.com/browse/" + search;
                            system(&define[0]);
                            cout << "Opening dictionary.com for " << search << endl;
                            wait();
                            mainmenu();
                        break;

                        case 'b':
                        case 'B':
                            mainmenu();
                        break;

                        case 'c':
                        case 'C':
                            mainmenu();
                        break;

                        case 'd':
                        case 'D':
                            mainmenu();
                        break;

                        case 'e':
                        case 'E':
                            mainmenu();
                        break;

                        case 'f':
                        case 'F':
                            mainmenu();
                        break;

                        case 'g':
                        case 'G':
                            mainmenu();
                        break;

                        case 'z':
                        case 'Z':
                            mainmenu();
                        break;

                        default:
                            cout << "Sorry! \"" << selection << "\" is not an option!\n";
                            counter--;
                        break;
                    }
                }
            break;

            case 'd':
            case 'D':
                system("CLS");
                showinfo();
                cout << char(201) << "อออออออออออออออ" << char(187) << endl
                     << char(186) << "Repository Menu" << char(186) << endl
                     << char(204) << "อออออออออออออออ" << char(202) << "อออออ" << char(203) << "อออออออออออออออออออออออออออออออออออออออออออออออออออออออ" << char(187) << endl
                     << char(186) << "a - Categories       " << char(186) << " - choose from a list of popular programs to download  " << char(186) << endl
                     << char(186) << "b - Download Custom  " << char(186) << " - Type the site address and it will open the download " << char(186) << endl
                     << char(186) << "c - Command Prompt   " << char(186) << " - Opens the windows command prompt                    " << char(186) << endl
                     << char(186) << "d - Password Manager " << char(186) << " - You can manage all your passwords here              " << char(186) << endl
                     << char(186) << "e - Custom Repository" << char(186) << " - Add websites to save, manage websites, load them    " << char(186) << endl
                     << char(186) << "                     " << char(186) << "                                                       " << char(186) << endl
                     << char(186) << "z - Home Menu        " << char(186) << " - Brings you back to the main menu                    " << char(186) << endl
                     << char(200) << "อออออออออออออออออออออ" << char(202) << "อออออออออออออออออออออออออออออออออออออออออออออออออออออออ" << char(188) << endl << endl;

                cout << "Selection: ";
                for(int counter=0;counter<1;counter++)
                {
                    selection = getch();
                    switch(selection)
                    {
                        case 'a':
                        case 'A':
                            mainmenu();
                        break;

                        case 'b':
                        case 'B':
                            mainmenu();
                        break;

                        case 'c':
                        case 'C':
                            mainmenu();
                        break;

                        case 'd':
                        case 'D':
                            mainmenu();
                        break;

                        case 'e':
                        case 'E':
                            mainmenu();
                        break;

                        case 'f':
                        case 'F':
                            mainmenu();
                        break;

                        case 'g':
                        case 'G':
                            mainmenu();
                        break;

                        case 'z':
                        case 'Z':
                            mainmenu();
                        break;

                        default:
                            cout << "Sorry! \"" << selection << "\" is not an option!\n";
                            counter--;
                        break;
                    }
                }
            break;

            case 'e':
            case 'E':
                system("CLS");
                showinfo();
                cout << char(201) << "ออออออออออ" << char(187) << endl
                     << char(186) << "Games Menu" << char(186) << endl
                     << char(204) << "ออออออออออ" << char(202) << "อออออออออออออออออ" << char(203) << "ออออออออออออออออออออออออออออออออออออออออออออออออ" << char(187) << endl
                     << char(186) << "            -GAMES-         " << char(186) << "                       -GAMES-                  " << char(186) << endl
                     << char(186) << "a - Guessing Game           " << char(186) << " - Try to guess a number between 1-100!         " << char(186) << endl
                     << char(186) << "b - Blackjack               " << char(186) << " - A very simple blackjack game                 " << char(186) << endl
                     << char(186) << "c - Equation buddy          " << char(186) << " - game where you solve equations (no division) " << char(186) << endl
                     << char(186) << "d - Equation buddy (expert) " << char(186) << " - Includes division, may have 3 items to use   " << char(186) << endl
                     << char(186) << "e - Hangman!                " << char(186) << " - A simple hangman game, more options inside   " << char(186) << endl
                     << char(186) << "f - Word Scramble           " << char(186) << " - The game scrambles a word, then you solve it!" << char(186) << endl
                     << char(186) << "            -MISC-          " << char(186) << "                       -MISC-                   " << char(186) << endl
                     << char(186) << "g - Clear Scores            " << char(186) << " - Select which scores you would like to delete " << char(186) << endl
                     << char(186) << "z - Home Menu               " << char(186) << " - Brings you back to the main menu             " << char(186) << endl
                     << char(200) << "ออออออออออออออออออออออออออออ" << char(202) << "ออออออออออออออออออออออออออออออออออออออออออออออออ" << char(188) << endl << endl;

                cout << "Selection: ";
                for(int counter=0;counter<1;counter++)
                {
                    selection = getch();
                    switch(selection)
                    {
                        case 'a':
                        case 'A':
                            mainmenu();
                        break;

                        case 'b':
                        case 'B':
                            mainmenu();
                        break;

                        case 'c':
                        case 'C':
                            mainmenu();
                        break;

                        case 'd':
                        case 'D':
                            mainmenu();
                        break;

                        case 'e':
                        case 'E':
                            mainmenu();
                        break;

                        case 'f':
                        case 'F':
                            mainmenu();
                        break;

                        case 'g':
                        case 'G':
                            mainmenu();
                        break;

                        case 'z':
                        case 'Z':
                            mainmenu();
                        break;

                        default:
                            cout << "Sorry! \"" << selection << "\" is not an option!\n";
                            counter--;
                        break;
                    }
                }
            break;

            case 'f':
            case 'F':
                system("CLS");
                showinfo();
                cout << "Thanks to... \n\n";
                cout << " Paul           - For teaching me the techniques in c++. " << endl;
                cout << " Ltp0wer        - for helping and teaching me techniques in c++. " << endl;
                cout << " Nate the great - for helping with ideas and c++ usage. " << endl;
                cout << " Funcoot        - For developing the base of the repository. " << endl;
                wait();
                mainmenu();
            break;

            case 'g':
            case 'G':
                system("CLS");
                showinfo();
                set_color(12);
                cout << "                                HELP MENU" << endl << endl;

                cout << "This list is not full, there are more features that are not listed here! " << endl << endl;
                set_color(10);
                cout << "Basic items: " << endl << endl;
                set_color(7);
                cout << "  - Use '+' or 'a' to add. " << endl
                     << "  - Use '-' or 's' to subtract. " << endl
                     << "  - Use '*' or 'x' to multiply. " << endl
                     << "  - Use '/' or 'd' to divide. " << endl
                     << "  - Use '^' to do powers - eg. 4 to the power of 2. " << endl
                     << "  - To go to the main menu type '1h1', to clear the screen type '1c1'" << endl << endl;
                set_color(10);
                cout << "Geometry items: \n\n";
                set_color(7);
                cout << "  - This menu is mainly for doing things involving shapes. Such as " << endl
                     << " finding the circumference of a circle, or finding missing sides of " << endl
                     << " triangles. Everything in this menu is made for the purpose of shapes. " << endl << endl;
                set_color(10);
                cout << "Game items: \n\n";
                set_color(7);
                cout << "  - This menu is made for games that I have made.. These games include: " << endl
                     << " number guess, blackjack, equation buddy, and hangman! All of the games " << endl
                     << " have a scoring system, it will save your score and load it each time" << endl
                     << " you play a game. The blackjack game will instead save how much " << endl
                     << " money you had from your last hand. " << endl << endl
                     << "  - When you choose hangman, you are greeted to another menu, this menu " << endl
                     << " has a couple of options; 1. add words to the word bank, 2. delete the " << endl
                     << " word bank, or 3. play the game. When you first play, it automatically " << endl
                     << " compiles a list of 100 words, when you add a word to the word bank, it " << endl
                     << " adds on, so no matter what, you always will have a generated list of " << endl
                     << " 100 words on hand. " << endl << endl;
                set_color(10);
                cout << "Repository items: \n\n";
                set_color(7);
                cout << "  - The repository is designed to easily navigate through many popular " << endl
                     << " programs, it will allow you to simply choose a program and it will fetch " << endl
                     << " the download link for you automatically, very useful after a reformat! " << endl << endl
                     << "  - The password manager is also in here, what this does is allows you to " << endl
                     << " safely save passwords and the name of a program. You will have ONE master " << endl
                     << " password required to enter your password manager menu, if you do not get the " << endl
                     << " correct password the first time, it will display a hint next time. From " << endl
                     << " the manager menu, you can add passwords, delete passwords, change your " << endl
                     << " master password, and hint. " << endl << endl
                     << "  - The command prompt is just executing the command prompt, in my area " << endl
                     << " public computers do not have the shortcut, so I made my own, it executes " << endl
                     << " the command prompt in a new window, press 'b' to view all of the useful " << endl
                     << " commands the command prompt has to offer. " << endl << endl
                     << " - Another feature is the custom repository, in here, you can.." << endl
                     << " 1. Save websites, and give them a short name. " << endl
                     << " 2. Remove those websites (if you need to). " << endl
                     << " 3. Load those websites on the fly if you need to. " << endl << endl;
                set_color(12);
                cout << "                               KNOWN BUGS" << endl << endl;
                //set_color(12);
                cout << "                       FREQUENTLY ASKED QUESTIONS" << endl << endl;
                set_color(10);
                cout << " 1. Help, the program isn't saving my scores!" << endl; set_color(7);
                cout << "    - Try disabling UAC protection on vista, if you're on XP, it's likely." << endl
                     << "      a bug, see FAQ #5 " << endl << endl;

                set_color(10);
                cout << " 2. What other files do I need to run everything properly?" << endl; set_color(7);
                cout << "    - None; This program doesn't need any extra files!" << endl << endl;

                set_color(10);
                cout << " 3. I found a part of a program, that isn't listed in any menus!" << endl; set_color(7);
                cout << "    - Most likely my Dev options, I include them to make developing" << endl
                     << "      easier for me, there are currently about 4 of them hidden.   " << endl << endl;

                set_color(10);
                cout << " 4. I have an idea!" << endl; set_color(7);
                cout << "    - Please E-mail all requests to 'christopherjansen1@hotmail.com'" << endl << endl;

                set_color(10);
                cout << " 5. A portion of your program is broken or incorrect!" << endl; set_color(7);
                cout << "    - Please E-mail all bugs to: 'christopherjansen1@hotmail.com'" << endl << endl;

                cout << "Scroll up if you haven't!\n\n";


               cout << char(201) << "อออออออออออออออ" << char(187) << endl
                    << char(186) << "a - Home.      " << char(186) << endl
                    << char(186) << "b - Commands.  " << char(186) << endl
                    << char(200) << "อออออออออออออออ" << char(188) << endl << endl;


                    cout << "Selection: ";

              for(int counter = 0; counter < 1; counter++)
              {
                  selection = getch();

                  switch(selection)
                  {
                      case 'a':
                      case 'A':
                           mainmenu();
                      break;
                      case 'b':
                      case 'B':
                           system("START http://www.microsoft.com/resources/documentation/windows/xp/all/proddocs/en-us/ntcmds.mspx?mfr=true");
                           mainmenu();
                      break;
                      default:
                           cout << "That is not a valid option! \n";
                           counter--;
                      break;
                  }//end switch
              }//end for
            break;

            default:
                cout << "Sorry! \"" << selection << "\" is not an option!\n";
                count1--;
            break;
        }
    }
}
