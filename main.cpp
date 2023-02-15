#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void greetings(){
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning,Gayatri"<<endl;
        string phrase = "Good Morning,Gayatri";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon,Gayatri"<<endl;
        string phrase = "Good Afternoon,Gayatri";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening,Gayatri"<<endl;
        string phrase = "Good Evening,Gayatri";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
}

int main()
{
    system("cls");

    cout<<"\t_____________________________________________Voice Assistant___________________________________________________"<<endl<<endl;

    string password; //to take password
    string command; // to take command from the user

    do
    {
        cout<<"******************************************************"<<endl;
        cout<<"| ENTER THE PASSWORD TO CONFIRM ITS GAYATRI JOSHI|"<<endl;
        cout<<"******************************************************"<<endl<<endl;
        string phrase = "ENTER THE PASSWORD TO CONFIRM ITS GAYATRI JOSHI";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin,password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(password=="GayatriJ")
        {
            cout<<"\n________________________________________________________________________________________________\n\n";
            greetings();
            do{
                cout<<"\n_____________________________________________________________________________________________\n\n";
                cout<<endl<<"How can i help you Gayatri...."<<endl<<endl;

                string phrase = "How can i help you Gayatri";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Enter some task here ===> ";
                getline(cin,command);
                cout<<endl;
                cout<<"Here's the output of the task ===> ";

                if(command=="hello" || command=="hi")
                {
                    cout<<"Hello Gayatri....."<<endl;
                    string phrase = "Hello Gayatri";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                 else if(command=="what is the time")
                {

                    datetime();
                }


                else if(command=="who are you" || command=="who is speaking")
                {
                    cout<<"I'm a personal assistant !!!"<<endl;
                    string phrase = "I'm a personal assistant !!!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


                else if(command=="open google")
                {
                    cout<<"opening google"<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(command=="open youtube")
                {
                    cout<<"opening YouTube"<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(command=="close chrome browser")
                {
                    cout<<"closing chrome browser"<<endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }

                else if(command=="bye" || command=="exit")
                {
                    cout<<"Good Bye Gayatri, see you soon!"<<endl;
                    string phrase = "Good Bye Gayatri, see you soon!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else
                {
                    cout<<"Sorry could not understand your command please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your command please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout<<"\t____________________________________________________Voice Assistant___________________________________________________"<<endl<<endl;
                    cout << "\t\t**********************" << endl;
                    cout << "\t\tX Incorrect Password X" << endl;
                    cout << "\t\t**********************" << endl << endl;

                    string phrase = "\t\tIncorrect Password, please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);


    return 0;
}
