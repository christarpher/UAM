#include "repos.h"
using namespace std;

void checkbookmark()
{


    input.open("repository.conf");
    //find out how many lines are in the whole config file
        while(getline(input,line))
        {
            linecount++;
        }
        input.clear();
        input.seekg(0, ios::beg);
        //find out how many folders there are in the config file
        for(int i = 0; i<linecount;i++)
        {
            getline(input,line);
            endoffile++;
            //DO NOT DISPLAY LAST '-END' TAG ON CONFIG FILE
            if(endoffile+1 < linecount)
            {
                if(line[0] == '-')
                {
                    foldercount++;
                    line=line.substr(1,line.size());
                    cout << foldercount << ". " << line << endl;;
                }
            }
        }
        input.clear();
        input.seekg(0, ios::beg);
        cout << "\n\nSelection: ";
        // make it so they cannot enter letters in an integer variable
        for(int i=0; i<1; i++)
        {
            while (!(std::cin >> selection))
            {
                    cout << "Please, use numbers.. \n\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            if(selection > foldercount || selection < 1)
            {
                cout << "Not a valid Folder!" << endl;
                i--;
            }
        }
        foldernumber=selection;
        foldercount = 0;
        //goes to the folder you specify as selection
        do
        {
           getline(input, line);
           if(line[0] == '-')
           {
               foldercount++;
           }
        }while(foldercount < selection);
        system("CLS");
        //get rid of the '-' before a folder
        line=line.substr(1,line.size());
        cout << "Contents of folder: " << line << endl << endl << endl;
        //start to parse the links and the shortcuts
        do
        {
            getline(input, line);
            if(line[0] != '-')
            {
                filecount++;
                for(int a=0;a<line.size();a++)
                {
                    if(line[a] == '>')
                    {
                        //finds out where to parse the link from the name
                        seperator = a;
                        break;
                    }
                }
                //parses line into a substring of the whole line
                //link=line.substr((seperator+1),line.length());
                line=line.substr(0,seperator);

                cout << filecount << ". " << line << endl;
            }
        }while(line[0] != '-');

        ////////////////////////////////////////////////////////////////////
        //EVERYTHING ABOVE THIS LINE WORKS PERFECTLY DO NOT DELETE OR MODIFY
        cout << "Selection: ";
        while (!(std::cin >> selection))
        {
            cout << "Please, use numbers.. \n\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        input.clear();
        input.seekg(0, ios::beg);

        foldercount = 0;
        //goes to the folder you specified before
        do
        {
           getline(input, line);
           if(line[0] == '-')
           {
               foldercount++;
           }
        }while(foldercount < foldernumber);

        for(int b =0; b<selection;b++)
        {
            getline(input, line);
                for(int a=0;a<line.size();a++)
                {
                    if(line[a] == '>')
                    {
                        //finds out where to parse the link from the name
                        seperator = a;
                        break;
                    }
                }
        }
        link=line.substr((seperator+1),line.length());
        line=line.substr(0,seperator);
        cout << endl << endl << "Starting " << line << " Which is: " << link << endl;
        define = "START " + link;
        system(&define[0]);
        cout << "Press any key to continue...\n";
        getch();
}
