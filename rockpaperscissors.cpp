#include<iostream>
#include<ctime>
char UserChoice();
char computer();
void showChoice(char);
void chooseWinner(char,char);
int main()
{
    char player;
    char computerChoice;
    std::cout<<"Rock-Paper-Scissors\n";
    std::cout<<"*******************\n";
   player = UserChoice();
   std::cout<<"your choice:\n";
   showChoice(player);
   computerChoice = computer();
   std::cout<<"computer's choice\n";
   showChoice(computerChoice);
   chooseWinner(computerChoice,player);
}
char UserChoice()
{
    char player;
 do{
    std::cout<<"Enter one of the following\n";
    std::cout<<"r for Rock\n";
    std::cout<<"p for Paper\n";
    std::cout<<"s for Scissors\n";
    std::cin>>player;
  }while (player != 'r' && player != 'p' && player != 's');
    return player;
}
char computer()
{
 char computerChoice;
 srand(time(NULL));
 int num = rand()%3 + 1;
 switch (num)
 {
 case 1:
   return 'r';
    case 2:
   return 'p';
    case 3:
   return 's';
 }
}
void showChoice(char choice)
{
 switch (choice)
 {
 case 'r':
  std::cout<<"Rock\n";
    break;
 case 'p':
  std::cout<<"Paper\n";
    break;
    case 's':
  std::cout<<"Scissors\n";
    break;
 }
}
void chooseWinner(char computer,char player )
{
  if(player=='r')
    switch(computer)
   { case 'r':
    std::cout<<"it's a tie\n";
    break;
     case 'p':
    std::cout<<"computer wins\n";
    break;
     case 's':
    std::cout<<"You win!\n";
    break;
   }
  else if(player=='p')
    switch(computer)
   { case 'r':
    std::cout<<"You win!\n";
    break;
     case 'p':
    std::cout<<"it's a tie\n";
    break;
     case 's':
    std::cout<<"computer wins\n";
    break;
   }
    else if(player=='s')
    switch(computer)
   { case 'r':
    std::cout<<"computer wins\n";
    break;
     case 'p':
    std::cout<<"you win!\n";
    break;
     case 's':
    std::cout<<"it's a tie\n";
    break;
   }
}
