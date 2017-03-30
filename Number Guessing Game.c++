#include<iostream>
#include<string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
       srand(time(0));
       int guess;
       char playagain;
       int end = true; // Initialize Flag
       int total = 0;
       int Losses = 0;
       cout << "Welcome to the guessing game"<<endl;
       cout << " " <<endl;
       while (end)// Flag contolled loop
       {
               cout <<"Enter a number between 0 and 100: "<<endl;// Prompt user for number between 1 and 100
               cin >> guess;
               int number =(rand() % 100)+1 ;// Random Number Function
               do
               {
                       int x = 1;// intialize counter
                       while (x <=20)//maximum of 20 guesses
                       {
                               if (guess > 100 || guess <0)
                               cout << "Maybe you should try and stay between the numbers 1 and 100"<<endl;
                               else if(guess>number)
                                       cout<<"Im sorry, "<<guess<< " is to high try again: "<<endl;
                               else if(guess<number)
                                       cout<<"Im sorry, "<<guess<< " is to low try again: "<<endl;
                               else if (guess == number)
                                       break;
                               cin>>guess;
                               x++;
                       }
                       if (guess == number)
                               break;
                       Losses = Losses +1;
                       cout <<"You Lose, maybe you should try harder next time"<<endl;//
                       break;
               } while(guess!= number);

               if (guess == number)
               {total = total +1;
               cout <<"You won!";
               }
               cout <<"Want to play again? enter Y for yes or N for no "<<endl;//Asks user if they want to pay again or if they want to quit
               cin >> playagain;
               if  (playagain == 'N')
               {
                       end = false;// set flag if event occured
                       cout <<"Thanks for playing" << endl;
                       cout <<"You won a total of "<<total <<" games"<<endl;
                       cout <<"You lost a total of "<<Losses<<" games"<<endl;
               }
               else if (playagain == 'Y')
                       end = true;
       }
       return 0;
}

/*
Welcome to the guessing game

Enter a number between 0 and 100:
36
Im sorry, 36 is to low try again:
54
Im sorry, 54 is to high try again:
66
Im sorry, 66 is to high try again:
23
Im sorry, 23 is to low try again:
45
Im sorry, 45 is to low try again:
98
Im sorry, 98 is to high try again:
1
Im sorry, 1 is to low try again:
78
Im sorry, 78 is to high try again:
88
Im sorry, 88 is to high try again:
90
Im sorry, 90 is to high try again:
75
Im sorry, 75 is to high try again:
63
Im sorry, 63 is to high try again:
89
Im sorry, 89 is to high try again:
22
Im sorry, 22 is to low try again:
34
Im sorry, 34 is to low try again:
24
Im sorry, 24 is to low try again:
75
Im sorry, 75 is to high try again:
87
Im sorry, 87 is to high try again:
65
Im sorry, 65 is to high try again:
21
Im sorry, 21 is to low try again:
22
You Lose, maybe you should try harder next
Want to play again? enter Y for yes or N fo
N
Thanks for playing
You won a total of 0 games
You lost a total of 1 games
*/