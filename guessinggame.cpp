#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    cout<<"\n\t\t\t   *WELCOME TO GUESSING THE NUMBER GAME*"<<endl;
    cout<<"some rules of the game:\n" 
   "you have to choose a number between 1 to 100\n"
    "you will be given different number of chances based on the difficulty level you choose\n"
    "GOOD LUCK!\n"
    "let the game begin"<<endl;


    string name;
    char input;
    cout<<"\n Enter he player name: ";
    cin>>name;
    int userinput;
    cout<<endl;

    while(true && input!='N')
    {
        srand(0);
        int num=rand()%100+1;

        cout<<"Enter the difficulty level:"<<endl;
        cout<<"1 for easy\t" 
        "2 for medium\t"
        "3 for hard\t"<<endl;

        int difficultylevel;
        cout<<"Enter the difficulty level: ";
        cin>>difficultylevel;

        if(difficultylevel==1)
        {
            cout<<"you have 10 chances for guessing the number"<<endl;
            int chances=10;
         for(int i=1;i<=10;i++)
        {
            cout<<"Enter a number from 1 to 100"<<endl;
            cin>>userinput;
            cout<<endl;

            if(userinput==num)
            {
                cout<<"CONGRATS! you have guessed a coorect number"<<endl;
                cin>>input;
                cout<<endl;
                break;
            }
            else if(userinput<num)
                {
                    cout<<"sorry! your guess is too low"<<endl;
                }
                else{
                    cout<<"sorry! your guess is too high"<<endl;
                }
                 chances--;
                cout<<chances<<" chances are left"<<endl;

                if(chances==0)
                {
                    cout<<"you lose..you could not find the number"<<endl;
                    cout<<"Wanaa a try again? if yes Enter Y if no Enter N :";
                    cin>>input;
                    cout<<endl;
                }

            } 
        }
     
      else if(difficultylevel==2)
     {
        cout<<"you have 7 chances to guess the number"<<endl;
        int chances=7;

         for(int i=1;i<=7;i++)
        {
            cout<<"Enter a number from 1 to 100"<<endl;
            cin>>userinput;
            cout<<endl;

            if(userinput==num)
            {
                cout<<"CONGRATS! you have guessed a coorect number"<<endl;
                cin>>input;
                cout<<endl;
                break;
            }
            else if(userinput<num)
                {
                    cout<<"sorry! your guess is too low"<<endl;
                }
                else{
                    cout<<"sorry! your guess is too high"<<endl;
                }
                 chances--;
                cout<<chances<<" chances are left"<<endl;

                if(chances==0)
                {
                    cout<<"you lose..you could not find the number"<<endl;
                    cout<<"Wanaa a try again? if yes Enter Y if no Enter N :";
                    cin>>input;
                    cout<<endl;
                }

            } 
        }
        else if(difficultylevel==3)
        {
            cout<<"you have 3 chances to guess the number"<<endl;
            int chances=3;
        for(int i=1;i<=3;i++)
        {
            cout<<"Enter a number from 1 to 100"<<endl;
            cin>>userinput;
            cout<<endl;

            if(userinput==num)
            {
                cout<<"CONGRATS! you have guessed a coorect number"<<endl;
                cin>>input;
                cout<<endl;
                break;
            }
            else if(userinput<num)
                {
                    cout<<"sorry! your guess is too low"<<endl;
                }
                else{
                    cout<<"sorry! your guess is too high"<<endl;
                }
            chances--;
                cout<<chances<<" chances are left"<<endl;

                if(chances==0)
                {
                    cout<<"you lose..you could not find the number"<<endl;
                    cout<<"Wanaa a try again? if yes Enter Y if no Enter N :";
                    cin>>input;
                    cout<<endl;
                }

            } 
        }
    }
  return 0; 
}
    