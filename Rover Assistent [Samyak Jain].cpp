
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime> // must include this header file to use time function

using namespace std;

// function to wish user according to time
void wishme(){
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Master"<<endl;
        string phrase = "Good Morning Master";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Master"<<endl;
        string phrase = "Good Afternoon Master";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    
    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Master"<<endl;
        string phrase = "Good Evening Master";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl
        << dt <<endl;
}

int main()
{
    system("cls");

    cout<<"\t\t\t<============================================= W E L C O M E ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= I'M A VIRTUAL ASSISTANT ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= MY NAME IS ROVER ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= I'M HERE TO HELP YOU ==========================================>"<<endl<<endl;

    char password[20]; //to take password
    char ch[100]; // to take command from the user

    do
    {
        cout<<"======================="<<endl;
        cout<<"| ENTER YOUR PASSWORD |"<<endl;
        cout<<"======================="<<endl<<endl;
        string phrase = "enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(strcmp(password, "HAPPY")==0){
            cout<<"\n<==================================================================================================>\n\n";
            wishme();
            do{
                cout<<"\n<==================================================================================================>\n\n";
                cout<<endl<<"How can i help you Master...."<<endl<<endl;

                string phrase = "How can i help you Master";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Your query ===> ";
                gets(ch);
                cout<<endl;
                cout<<"Here is the result for your query ===> ";

                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 ){
                    cout<<"Hello Master....."<<endl;
                    string phrase = "Hello Master";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                
                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
                    cout<<"Good Bye sir, have a nice day!!!!"<<endl;
                    string phrase = "Good Bye sir, have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                
                else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0 ){
                    cout<<"I'm ROVER a virtual assistant created by SAMYAK JAIN !!!"<<endl;
                    string phrase = "I am a virtual assistant created by SAMYAK JAIN ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0 ){
                    cout<<"I'm good sir, tell me how can i help you.."<<endl;
                    string phrase = "I'm good sir, tell me how can i help you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                
                
                
                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0){
                    // make function to show date and time
                    datetime();
                }

                else if(strcmp(ch, "open notepad") == 0){
                    cout<<"openining notepad....."<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    //CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
            
                else if(strcmp(ch, "open google") == 0){
                    cout<<"openining google....."<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }
                
                else if(strcmp(ch, "tell me about google ceo") == 0){
                    cout<<"openining info about google ceo....."<<endl;
                    string phrase = "opening  info about google ceo";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start  https://en.wikipedia.org/wiki/Sundar_Pichai");
                }

                else if(strcmp(ch, "who is elon musk") == 0){
                    cout<<"openining info about elon musk....."<<endl;
                    string phrase = "opening  info about elon musK";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start  https://en.wikipedia.org/wiki/Elon_Musk");
                }

                else if(strcmp(ch, "open linkedin") == 0){
                    cout<<"openining linkedin....."<<endl;
                    string phrase = "opening  linkedin";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.linkedin.com/login ");
                }

                else if(strcmp(ch, "open github") == 0){
                    cout<<"openining github....."<<endl;
                    string phrase = "opening github";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://desktop.github.com/ ");
                }


                else if(strcmp(ch, "open facebook") == 0){
                    cout<<"openining facebook....."<<endl;
                    string phrase = "opening facebook";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.facebook.com");
                }  
				 
                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"openining YouTube....."<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(strcmp(ch, "open instagram") == 0){
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }

                 else if(strcmp(ch, "open jecrc") == 0){
                    cout<<"openining jecrc....."<<endl;
                    string phrase = "opening jecrc";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://jecrcfoundation.com");
                }
                 
                 else if(strcmp(ch, "about ML") == 0){
                    cout<<"openining ML....."<<endl;
                    string phrase = "opening ML";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start  https://en.wikipedia.org/wiki/Machine_learning");
                }
                 
                 else if(strcmp(ch, "about rocket science") == 0){
                    cout<<"openining rocket science....."<<endl;
                    string phrase = "opening rocket science";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://en.wikipedia.org/wiki/Rocket_science#:~:text=Rocket%20science%20is%20a%20colloquial,is%20not%20difficult%20to%20understand. ");
                }
                else if(strcmp(ch, "about data science") == 0){
                    cout<<"openining data science....."<<endl;
                    string phrase = "opening data science";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://en.wikipedia.org/wiki/Data_science ");
                }
                else if(strcmp(ch, "about cyber security") == 0){
                    cout<<"openining cyber security....."<<endl;
                    string phrase = "opening cyber security";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://en.wikipedia.org/wiki/Computer_security ");
                }
                 
                else if(strcmp(ch, "open about tech a thon") == 0){
                    cout<<"openining tech a thon....."<<endl;
                    string phrase = "opening tech a thon";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://hackathon.ineuron.ai/techathon2.0");
                }
                else if(strcmp(ch, "open about blockchain") == 0){
                    cout<<"openining blockchain ....."<<endl;
                    string phrase = "opening blockchain";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://en.wikipedia.org/wiki/Blockchain");
                }
                else if(strcmp(ch, "open about cryptocurrency") == 0){
                    cout<<"openining about cryptocurrency ....."<<endl;
                    string phrase = "opening cryptocurrency";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://en.wikipedia.org/wiki/Cryptocurrency");
                }
                else if(strcmp(ch, "open instagram") == 0){
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start       ");
                }
                
                else{
                    cout<<"Sorry could not understand your query please ty again !!!"<<endl;
                    string phrase = "Sorry could not understand your query please ty again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout << "\t\t\t<============================= W E L C O M E=============================>" << endl;
                    cout << "\t\t\t<============================= I'M VIRTUAL ASSISTANT =============================>" << endl;
                    cout << "\t\t\t<============================= MY NAME IS ROVER =============================>" << endl;
                    cout << "\t\t\t<============================= I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY =============================>" << endl<< endl;

                    cout << "======================" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "======================" << endl<< endl;
                    string phrase = "Incorrect Password, Please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);
    

    return 0;
}
