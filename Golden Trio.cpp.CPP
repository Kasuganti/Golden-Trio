#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<ctype.h>
void singleplayer();
void multiplayer();
void computerturn();
void board();
int checkwin();
char s[]={'0','1','2','3','4','5','6','7','8','9'};
void main()
{       clrscr();
	int i;
	cout<<"Welcome to Golden Trio Game";
	cout<<"Enter your choice:";
	cout<<"\n1.Single Player\n2.MultiPlayer\n3.Exit\n";
	cin>>i;
	switch(i)
	{	case 1:singleplayer();
			break;
		case 2: multiplayer();
			break;
		case 3:exit(0);
	}
	getch();
}
void singleplayer()
{       clrscr();
	int c=3,x;
	cout<<"Player X\n";
	cout<<"Computer O\n";
	board();
	while(c==3)
	{
		cout<<"Enter your choice";
		cin>>x;
		s[x]='X';
		cout<<"After Players choice:\n";
		board();
		c=checkwin();
		if(c!=2)
		{
		computerturn();
		cout<<"After computers choice:\n";
		board();
		c=checkwin();
		}
	}
	if(c==1)
	{	cout<<"Computer Wins";
	}
	if(c==2)
	{	cout<<"Player Wins";
	}
	if(c==4)
	{	cout<<"Game Draws";
	}
}
void computerturn()
{	if(s[5]=='5')
	{	s[5]='O';
	}
	else if(s[1]=='O'&&s[2]=='O'&&s[3]=='3')
	{	s[3]='O';
		goto ab;
	}

	else if(s[1]=='O'&&s[2]=='O'&&s[3]=='3')
	{	s[3]='O';
		goto ab;
	}
	else if(s[1]=='O'&&s[3]=='O'&&s[2]=='2')
	{	s[2]='O';goto ab;
	}
	else if(s[3]=='O'&&s[2]=='O'&&s[1]=='1')
	{	s[1]='O';goto ab;
	}
	else if(s[4]=='O'&&s[5]=='O'&&s[6]=='6')
	{	s[6]='O';goto ab;
	}
	else if(s[4]=='O'&&s[6]=='O'&&s[5]=='5')
	{	s[5]='O';goto ab;
	}
	else if(s[5]=='O'&&s[6]=='O'&&s[4]=='4')
	{	s[4]='O';goto ab;
	}
	else if(s[7]=='O'&&s[8]=='O'&&s[9]=='9')
	{	s[9]='O';goto ab;
	}
	else if(s[7]=='O'&&s[9]=='O'&&s[8]=='8')
	{	s[8]='O';goto ab;
	}
	else if(s[8]=='O'&&s[9]=='O'&&s[7]=='7')
	{	s[7]='O';goto ab;
	}
	else if(s[1]=='O'&&s[5]=='O'&&s[9]=='9')
	{	s[9]='O';goto ab;
	}
	else if(s[1]=='O'&&s[9]=='O'&&s[5]=='5')
	{	s[5]='O';goto ab;
	}

	else if(s[5]=='O'&&s[9]=='O'&&s[1]=='1')
	{	s[1]='O';goto ab;
	}

	else if(s[3]=='O'&&s[5]=='O'&&s[7]=='7')
	{	s[7]='O';goto ab;
	}
	else if(s[3]=='O'&&s[7]=='O'&&s[5]=='5')
	{	s[5]='O';goto ab;
	}
	else if(s[5]=='O'&&s[7]=='O'&&s[3]=='3')
	{	s[3]='O';goto ab;
	}
	else if(s[1]=='O'&&s[4]=='O'&&s[7]=='7')
	{	s[7]='O';goto ab;
	}
	else if(s[1]=='O'&&s[7]=='O'&&s[4]=='4')
	{	s[4]='O';goto ab;
	}
	else if(s[4]=='O'&&s[7]=='O'&&s[1]=='1')
	{	s[1]='O';goto ab;
	}
	else if(s[5]=='O'&&s[2]=='O'&&s[8]=='8')
	{	s[8]='O';goto ab;
	}
	else if(s[8]=='O'&&s[2]=='O'&&s[5]=='5')
	{    	s[5]='O';goto ab;
	}
	else if(s[5]=='O'&&s[8]=='O'&&s[2]=='2')
	{	s[2]='O';goto ab;
	}
	else if(s[6]=='O'&&s[9]=='O'&&s[3]=='3')
	{	s[3]='O';goto ab;
	}
	else if(s[3]=='O'&&s[6]=='O'&&s[9]=='9')
	{	s[9]='O';goto ab;
	}
	else if(s[3]=='O'&&s[9]=='O'&&s[6]=='6')
	{	s[6]='O';goto ab;
	}
	else if(s[1]=='X'&&s[2]=='X'&&s[3]=='3')
	{	s[3]='O';
		goto ab;
	}

	else if(s[1]=='X'&&s[2]=='X'&&s[3]=='3')
	{	s[3]='O';
		goto ab;
	}
	else if(s[1]=='X'&&s[3]=='X'&&s[2]=='2')
	{	s[2]='O';goto ab;
	}
	else if(s[3]=='X'&&s[2]=='X'&&s[1]=='1')
	{	s[1]='O';goto ab;
	}
	else if(s[4]=='X'&&s[5]=='X'&&s[6]=='6')
	{	s[6]='O';goto ab;
	}
	else if(s[4]=='X'&&s[6]=='X'&&s[5]=='5')
	{	s[5]='O';goto ab;
	}
	else if(s[5]=='X'&&s[6]=='X'&&s[4]=='4')
	{	s[4]='O';goto ab;
	}
	else if(s[7]=='X'&&s[8]=='X'&&s[9]=='9')
	{	s[9]='O';goto ab;
	}
	else if(s[7]=='X'&&s[9]=='X'&&s[8]=='8')
	{	s[8]='O';goto ab;
	}
	else if(s[8]=='X'&&s[9]=='X'&&s[7]=='7')
	{	s[7]='O';goto ab;
	}
	else if(s[1]=='X'&&s[5]=='X'&&s[9]=='9')
	{	s[9]='O';goto ab;
	}
	else if(s[1]=='X'&&s[9]=='X'&&s[5]=='5')
	{	s[5]='O';goto ab;
	}

	else if(s[5]=='X'&&s[9]=='X'&&s[1]=='1')
	{	s[1]='O';goto ab;
	}

	else if(s[3]=='X'&&s[5]=='X'&&s[7]=='7')
	{	s[7]='O';goto ab;
	}
	else if(s[3]=='X'&&s[7]=='X'&&s[5]=='5')
	{	s[5]='O';goto ab;
	}
	else if(s[5]=='X'&&s[7]=='X'&&s[3]=='3')
	{	s[3]='O';goto ab;
	}
	else if(s[1]=='X'&&s[4]=='X'&&s[7]=='7')
	{	s[7]='O';goto ab;
	}
	else if(s[1]=='X'&&s[7]=='X'&&s[4]=='4')
	{	s[4]='O';goto ab;
	}
	else if(s[4]=='X'&&s[7]=='X'&&s[1]=='1')
	{	s[1]='O';goto ab;
	}
	else if(s[5]=='X'&&s[2]=='X'&&s[8]=='8')
	{	s[8]='O';goto ab;
	}
	else if(s[8]=='X'&&s[2]=='X'&&s[5]=='5')
	{    	s[5]='O';goto ab;
	}
	else if(s[5]=='X'&&s[8]=='X'&&s[2]=='2')
	{	s[2]='O';goto ab;
	}
	else if(s[6]=='X'&&s[9]=='X'&&s[3]=='3')
	{	s[3]='O';goto ab;
	}
	else if(s[3]=='X'&&s[6]=='X'&&s[9]=='9')
	{	s[9]='O';goto ab;
	}
	else if(s[3]=='X'&&s[9]=='X'&&s[6]=='6')
	{	s[6]='O';goto ab;
	}
	else if(s[3]=='3')
	{	s[3]='O';goto ab;
	}

	else if(s[4]=='4')
	{	s[4]='O';goto ab;
	}

	else if(s[5]=='5')
	{	s[5]='O';goto ab;
	}

	else if(s[6]=='6')
	{	s[6]='O';goto ab;
	}

	else if(s[7]=='7')
	{	s[7]='O';goto ab;
	}

	else if(s[8]=='8')
	{	s[8]='O';goto ab;
	}

	else if(s[9]=='9')
	{	s[9]='O';goto ab;
	}

	else if(s[1]=='1')
	{	s[1]='O';goto ab;
	}

	else if(s[2]=='3')
	{	s[2]='O';goto ab;
	}

	ab:
}
int checkwin()
{	if(s[1]=='O'&&s[2]=='O'&&s[3]=='O')
	{       return 1;
	}
	else if(s[4]=='O'&&s[5]=='O'&&s[6]=='O')
	{       return 1;
	}
	else if(s[7]=='O'&&s[8]=='O'&&s[9]=='O')
	{       return 1;
	}
	else if(s[1]=='O'&&s[5]=='O'&&s[9]=='O')
	{       return 1;
	}
	else if(s[3]=='O'&&s[5]=='O'&&s[7]=='O')
	{      return 1;
	}
	else if(s[1]=='O'&&s[4]=='O'&&s[7]=='O')
	{       return 1;
	}
	else if(s[2]=='O'&&s[5]=='O'&&s[8]=='O')
	{       return 1;
	}
	else if(s[3]=='O'&&s[6]=='O'&&s[9]=='O')
	{       return 1;
	}
	else if(s[1]=='X'&&s[2]=='X'&&s[3]=='X')
	{       return 2;
	}
	else if(s[4]=='X'&&s[5]=='X'&&s[6]=='X')
	{       return 2;
	}
	else if(s[7]=='X'&&s[8]=='X'&&s[9]=='X')
	{       return 2;
	}
	else if(s[1]=='X'&&s[5]=='X'&&s[9]=='X')
	{       return 2;
	}
	else if(s[3]=='X'&&s[5]=='X'&&s[7]=='X')
	{       return 2;
	}
	else if(s[1]=='X'&&s[4]=='X'&&s[7]=='X')
	{       return 2;
	}
	else if(s[2]=='X'&&s[5]=='X'&&s[8]=='X')
	{      return 2;
	}
	else if(s[3]=='X'&&s[6]=='X'&&s[9]=='X')
	{       return 2;
	}
	else if(s[1]!='1'&&s[2]!='2'&&s[3]!='3'&&s[4]!='4'&&s[5]!='5'&&s[6]!='6'&&s[7]!='7'&&s[8]!='8'&&s[9]!='9')
	{	return 4;
	}
	else
	{	return 3;
	}
}

void board()
{        cout<<"\n";
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout <<"\t"<<"     |     |     " << endl;
	cout <<"\t"<< "  " << s[1] << "  |  " << s[2] << "  |  " << s[3] << endl;

	cout <<"\t"<< "_____|_____|_____" << endl;
	cout <<"\t"<< "     |     |     " << endl;

	cout <<"\t"<< "  " << s[4] << "  |  " << s[5] << "  |  " << s[6] << endl;

	cout <<"\t"<< "_____|_____|_____" << endl;
	cout <<"\t"<< "     |     |     " << endl;

	cout <<"\t"<< "  " << s[7] << "  |  " << s[8] << "  |  " << s[9] << endl;

	cout <<"\t"<< "     |     |     " << endl << endl;

}
void multiplayer()
{
	clrscr();
	int player = 1,i,choice;

	char mark;
	do
	{
		board();
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && s[1] == '1')

			s[1] = mark;
		else if (choice == 2 && s[2] == '2')

			s[2] = mark;
		else if (choice == 3 && s[3] == '3')

			s[3] = mark;
		else if (choice == 4 && s[4] == '4')

			s[4] = mark;
		else if (choice == 5 && s[5] == '5')

			s[5] = mark;
		else if (choice == 6 && s[6] == '6')

			s[6] = mark;
		else if (choice == 7 && s[7] == '7')

			s[7] = mark;
		else if (choice == 8 && s[8] == '8')

			s[8] = mark;
		else if (choice == 9 && s[9] == '9')

			s[9] = mark;
		else
		{
			cout<<"Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin();

		player++;
	}while(i==3);
	board();
	if(i==1)
		cout<<"\Player 2 wins";
	else if(i==2)
		cout<<"\Player 1 wins";
	else
		cout<<"==>\aGame draw";

	cin.ignore();
	cin.get();

}




