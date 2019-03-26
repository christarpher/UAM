#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <math.h>
#include <cmath>
#include <time.h>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <shellapi.h>
#include <limits>
#include <iomanip>
#include <dir.h>
#include <assert.h>
#include <stdlib.h>

#include "menus.cpp"


using namespace std;

int main()
{
    mainmenu();
    return 0;
}

/*
MASTER CHANGELOG
V.1:
     Multiplication (6 numbers)

V.3:
     Multiplication
     Division

V1.0:
     Addition
     subtraction
     multiplication
     division

V1.0 - V1.2:
     Menu for basic and graphing
     Added slope program
     General bug fixes
     repeats with loops
     clearing screen feature
     new border system

V1.2 - V1.21:
     Added option to go home in menus

V1.21 - 1.4:
     Added navigation menu to basic mode
     Alphabetical ordered menu
     Added temperature converter
     Added Compounding banking interest
     Added Diagonals Program

V1.4 - 1.7:
     Added powers (EG. 4 to the power of 4 = 256)
     Compound banking interest bug fix
     Added Length Converter
     Added a weight converter
     Added a time converter

V1.7 - 1.75:
     No longer have to press enter at menus to go to that menu, just click and go
     Optimization of code
     Added Force calculator

V1.75 - 1.9:
     More weights now you can convert: ounces, pounds, grams, kilograms, and stones
     moved banking interest, weight, and time converter to advanced menu
     Updated help menu
     Added an Advanced menu
     A tax program to calculate the total amount of an item + tax is
     Added an Electrical converter, to find how many watts, amps, or volts something has

V1.9 - V2.0:
     Banking interest scrapped basically, now it's future value interest
     Updated help menu
     Scrapped the slope program (reason below)
     NEW Slope Program, that actually works...
     Geometry mode
     In geometry mode you have an assload of definitions built right into the program
     If a definition isn't in the program, it loads www.dictionary.com

V2.0 - V2.05:
     Basic mode has small description
     banking interest scrapped
     updates help menu
     slope program scrapped
     added find circumference and area of a circle
     added new more robust slope program
     added home menu and help menu options when in geometry mode

V2.05 - V2.06:
     fixed stones not being able to be accessed in weight converter
     changed top display menu in weight converter (void show_info6()) is now used instead of void show_info()
     made top menu smaller for show_info 4 and 5

V2.06 - V2.4:
     added project GPA
     added median of the line segment program
     changed a lot (almost) to switch statements
     making EVERYTHING work with capital letters
     recoded everything
     Added windows repository
     added credits

V2.4 - V2.45:
    fixed bug with download.com not working with repository
    fixed bug with everest, firefox, and thunderbird in repository.
    Winget-CUSTOMDOWNLOAD WORKS
    changed the menu pop up to be smaller.

V2.45 - 2.6:
    fixed bug with area and circumference of circle not working with capital letters.
    added interior angle finder
    added exterior angle finder
    added sides from exterior angle finder
    added sides from interior angle finder
    updated help menu
    code optimization
    created game menu
    created number guessing game
    created black jack game

V2.6 - 2.8:
     added automatic definitions in geometry mode.
     added error checking for every program
     added high score system
     blackjack game has been optimized (- 150 lines of code)
     removed built in definitions for optimizations sake - searching is still enabled.
     optimization to basic mode - less code + better error checking
     optimization to all code - 600 lines.
     added ventrilo and teamspeak to repository.

V2.8 - 2.9:
     Code optimization -200 lines of code
     Made menus very easy to navigate now
     high score list works great

V2.9 - 3.0 BETA:
     Added ability to reset the money to $100 once you run out of money in the program instead of restarting it.
     Added ability for the money in blackjack to save between restarts of the program
     Added clear high score system
     Added game Equation Buddy
     Added Equation Buddy scoring system that saves your score
     Changed amount of starting money in blackjack from 500 to 100
     Changed amount dealer can put in to $40
     Changed erasing High scores so you can choose to erase the blackjack or equasion buddy scores.
     Fixed bug where after playing the guessing game and saying "no" it would close the program
     Fixed blackjack so it actually worked, it broke in 2.90 quick fix 6
     Fixed blackjack so if you busted, and the dealer busted, you would win like in the real game
     Fixed List of finding angles, now B is accessable.
     Fixed a tie in blackjack, now it's a push and you just get your money back.
     Fixed bug in blackjack where it wouldn't check all the options if a previous option was true.
     Fixed sphaghetti coding in blackjack.
     Fixed winget- download, broke in V2.9 quick fix 6
     Removed the View High scores list
     Removed the Input High scores option

V3.0 BETA - 3.0:
     Added expert mode on equation buddy.
     Added Option to clear high score for equation buddy (expert)
     Added rounding to the nearest hundredths place on equation buddy.
     Changed blackjack, dealer doesn't put money in, you get double your bet back
     Changed program, now uses functions so it's faster
     Fixed bug where home menu wasn't accessible in the repository menu
     Fixed bug where menus still had a menu that said the program wasn't complete.
     Fixed bug in length converter saying this program isn't complete yet

V3.0 - quickfix 1:
     fixed bug where if you started blackjack, equation buddy, or expert mode twice in 1 sitting it wouldn't load the score
     fixed bug where if you played equation buddy (normal) it would crash the program

V3.0 QF1 - V3.1
     Added option to find out what the triangle is if you enter the lengths of sides
     Added option to find missing lengths of right triangles.
     Added colors so certain menus and messages are easier to the eye
     Added tabs to all main menus so you can easily see what menu you are in
     Added a scoring system to number guess
     Added ability to delete the number guess score
     Added a FAQ section to the help menu
     Added a Custom repository Section
         - Added ability to add a website to a list
         - Added ability to add a shortcut for the website to a list
         - Added ability to type the corresponding number to the website shortcut on the list you made, and it will go to that website
         - Added ability to remove websites from your custom repository
     Added hangman game
         - Added ability to delete the word list in the program
         - Added ability to add words to the list in the program
         - Added ability to delete your hangman score from the delete scores menu
         - Program will save your score; your score cannot go below 0
         - Program automatically makes a list of 100 word if no word list exists
         - program will scale to look for as many words are as are on the list
     Added password Manager (Please report any bugs found)
         - Added ability to assign names and passwords and it saves the passwords
         - Added ability to delete all the passwords from inside the program
         - Added ability to change your 'master password'
         - Added ability to keep a hint just incase of forgetting your password
         - Added ability to view your passwords from inside the program
     Changed remove scores.. Now deletes the file instead of re-writing it with a NULL character, helps fix buffer issues
     Changed program where any number over a million was shown in scientific notation, now the number will go out 12 decimal places max before switching to scientific notation
     Changed home button, not it's a consistent Z or A button to get back to the home menu, it no longer changes based on length of menu
     Changed menus - all menus show up as 'a - text here' instead of a mix of 'a. test, b - test'
     Changed top information bar - Now centered
     Changed help menu, no longer displays what each menu contains (redundant), now it says how each program works, and how to do it.
     Changed all menus - contains small definitions next to each menu
     Changed GPA program, now you can specify how many periods you are calculating for, instead of the standard 8 (because study halls do not count for a part in your GPA)
     Fixed bug where in basic mode if you clicked home menu it would bring up the choose window (which essentially does the same thing, but requires another click), instead of calling the home menu
     Fixed Buffer issues with file I/O for storing scores, etc, which caused corruption of the program
     Fixed EVERY menu (for real this time) - No longer displays error "This program is not complete"
     Fixed problem with force calculator making program freeze because the function had no exit
     Fixed problem with a couple of functions not completing before exiting, this would cause conflicts when the menu was called
     Removed option to go to help menu, inside the help menu (redundant)

V3.1 - UAM redux
     Rewritten from a single cpp file, now made into many cpp and header files for organization
     Fixed converting from inches showing wrong size in millimeters (submitted by mackenzie hagen)
     Fixed negative exponents on basic mode
     Many changes to the blackjack game.
        - Now has 3 players, you, the dealer, and another player at the table
        - The third player counts cards, so be prepared (simple version of AI)
        - There is now a deck for the actual cards, no longer pulling random numbers (went with an actual deck so the player(s) can count cards)
        - The blackjack game was redone in object oriented programming
        - No more 'goto' statements in blackjack
     Going open source!

*/
