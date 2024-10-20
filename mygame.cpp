#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x , int y);
void print_name();
void displayMenu();
void print_maze();
void printPlayer();
void erasePlayer();
void moveplayerright();
void moveplayerleft();
void moveplayerdown();
void moveplayerup();
void printEnemy();
void eraseEnemy();
void moveEnemy();
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: '  ';
}

int pX=7 , pY=19;
int eX=92,  eY=2;
int main()
{
    system("cls");
    system("color 57");
    print_name();

    int choice;
    do
    {
       displayMenu();
       cout<<"Enter your Choice: "<<endl;

       if (!(cin >> choice))
        {
			cout << "Invalid input. Please enter a number.\n";
			cin.clear();  
			cin.ignore();  
			continue;  
		}
        cin.ignore();

        switch (choice) 
        {
		case 1:
			      print_maze();
              printPlayer();
              printEnemy();
              while(true)
            { 
                if(GetAsyncKeyState(VK_LEFT))
                {
                moveplayerleft();
                }
                if(GetAsyncKeyState(VK_RIGHT))
                {
                   moveplayerright();
                }
                if(GetAsyncKeyState(VK_UP))
                {
                moveplayerup();
                }
                if(GetAsyncKeyState(VK_DOWN))
                {
                moveplayerdown();
                }
                moveEnemy();
                Sleep(80);
            }
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			cout << "Exiting the Game.Hope you Enjoyed.Goodbye!!\n";
			break;
		default:
			cout << "Invalid choice. Please try again.\n";
		}
	} 
    while (choice != 4);

	return 0;
       

}
    
    


void print_name()
{
    cout<<endl;
    cout<<endl;
    cout<<"       ##########     ##      ##        ##    ##      ##         ##         ##      ##     ## ##       ######      "<<endl;
    cout<<"           ##       ##  ##    ## #      ##    ##    ##           ##         ##    ##  ##   ##   ##    ##     ##    "<<endl;
    cout<<"           ##      ##    ##   ##   #    ##    ##  ##             ##    #    ##   ##    ##  ##   ##    ##           "<<endl;
    cout<<"           ##      ########   ##    #   ##    ## #               ##   # #   ##   ########  ## ##       #######     "<<endl;
    cout<<"           ##      ##    ##   ##     #  ##    ##  ##             ##  #   #  ##   ##    ##  ##  ##            ##    "<<endl;
    cout<<"           ##      ##    ##   ##      # ##    ##    ##           ## #     # ##   ##    ##  ##    ##   ##     ##    "<<endl;
    cout<<"           ##      ##    ##   ##        ##    ##      ##         ##         ##   ##    ##  ##     ##    #####      "<<endl;       
    cout<<endl;
    cout<<endl;
    

}
void displayMenu() 
{              
	cout << "\n Welcome To Tank Wars.... "<<endl;
    cout<<endl;
    cout<<endl;
	cout << "1. Start Playing New Game"<<endl;
	cout << "2. Instructions to play "<<endl;
	cout << "3. Highest Scores "<<endl;
	cout << "4. Exit "<<endl;

}
void print_maze()
{
    cout<<" ################################################################################################################################"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl; 
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              # "<<endl;
    cout<<" #                                                                                                                              #"<<endl; 
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              # "<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #  "<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" #                                                                                                                              #"<<endl;
    cout<<" ################################################################################################################################"<<endl;

}  

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void printPlayer()
{   
    gotoxy(pX,pY);
    cout<<"      ______                "<<endl;
    gotoxy(pX,pY+1);
    cout<<"   -|||||||||| ==========  "<<endl;
    gotoxy(pX,pY+2);
    cout<<"[|||||||||||||||||]        "<<endl;
    gotoxy(pX,pY+3);
    cout<<" \\OOOOOOOOOOOOOO/         "<<endl;
}

void erasePlayer()
{
    gotoxy(pX,pY);
    cout<<"                           "<<endl;
    gotoxy(pX,pY+1);
    cout<<"                           "<<endl;
    gotoxy(pX,pY+2);
    cout<<"                           "<<endl;
    gotoxy(pX,pY+3);
    cout<<"                           "<<endl;
}
void moveplayerright()
{
  if (getCharAtxy(pX + 32, pY) == ' ')
    { 
    erasePlayer();
    pX = pX + 1;
    printPlayer();
    }
}
void moveplayerleft()
{
   if (getCharAtxy(pX - 1, pY) == ' ')
   {
     erasePlayer();
     pX = pX - 1;
     printPlayer();
   }
}
void moveplayerup()
{
   if (getCharAtxy(pX, pY-1) == ' ')
   {
     erasePlayer();
     pY = pY- 1;
     printPlayer();
   }
}
void moveplayerdown()
{
   if (getCharAtxy(pX, pY+11) == ' ')
   {
     erasePlayer();
     pY = pY + 1;
     printPlayer();
   }
}
void printEnemy()
{
gotoxy(eX,eY);
cout << "     ||======(********\\...  ";
gotoxy(eX,eY+1);
cout << "          /****************\\  ";
gotoxy(eX,eY+2);
cout << "         \\@@@@@@@@@@@@@@@@//  ";

}
void eraseEnemy()
{
gotoxy(eX,eY);
cout << "                               ";
gotoxy(eX,eY+1);
cout << "                               ";
gotoxy(eX,eY+2);
cout << "                               ";

}
void moveEnemy()
{
  eraseEnemy();
  eY= eY + 1;
  if(eY == 27)
  {
    eY=2;
  }
  printEnemy();
}


