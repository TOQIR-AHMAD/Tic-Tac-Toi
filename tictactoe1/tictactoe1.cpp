// tictactoe1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
const int rows = 3;
const int cols = 3;
char** game = new char*[rows];

void tictac()
{
	system("cls");
	cout << endl;
	cout << setw(57) << "Tic-Tac-Toe" << endl;
	cout<<setw(57)<<"___________"<<endl;
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(22) << "  |  " << game[i][j] << "  |  ";

		}
		cout << endl;
		if (i < rows - 1)
		{
			cout << setw(83) << "_________________________________________________________________" << endl;
		}
		cout << endl;
	}
}
void winnercheck1();
void winnercheck2();
void change1();
void change2();

void main()
{
	char character = '1';
	for (size_t i = 0; i < 3; i++)
	{
		game[i] = new char[3];
		for (size_t j = 0; j < 3; j++)
		{
			game[i][j] = character++;
		}
	}
	tictac();
	string n1;
	cout << "enter the name of player 1:" << endl;
	cin >> n1;
	string n2;
	cout << "enter the name of player 2:" << endl;
	cin >> n2;
	cout << "Mark for player 1 " << n1 << " is: X " << endl << "Mark for player 2 " << n2 << " is: O" << endl;
	for(int i=1;i<=9;i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 9)
		{
			change1();
			tictac();
			if (i == 5 || i == 7 ) {
				winnercheck1();
			}
			else if (i == 9) 
			{
				winnercheck1();
				cout << "Draw, no one won.";
			}

		}
		else
		{
			change2();
			tictac();
			if (i == 6 || i == 8) {
			winnercheck2();
			}
		}
	}
	for (size_t i = 0; i < 3; i++)
	{	
		delete[] game[i];
	}
	delete[] game;
}
void change1()
{
	int turn1;
	cout << "Turn for player 1 " << ":";
	cin >> turn1;
		if (turn1 == 1)
		{
			if (game[0][0] == '1') { game[0][0] = 'X'; }
			else {
				cout << "the place is already chosen, plz choose other.";
				change1();
			}
		}
		else if (turn1 == 2)
		{
			if (game[0][1] == '2') { game[0][1] = 'X'; }
			else {
				cout << "the place is already chosen, plz choose other.";
				change1();
			}
		}
		else if (turn1 == 3)
		{
			if (game[0][2] == '3') { game[0][2] = 'X'; }
			else {
				cout << "the place is already chosen, plz choose other.";
				change1();
			}
		}
		else if (turn1 == 4)
		{
			if (game[1][0] == '4') { game[1][0] = 'X'; }
			else {
				cout << "the place is already chosen, plz choose other.";
				change1();
			}
		}
		else if (turn1 == 5)
		{
			if (game[1][1] == '5') { game[1][1] = 'X'; }
			else {
				cout << "the place is already chosen, plz choose other.";
				change1();
			}
		}
		else if (turn1 == 6)
		{
			if (game[1][2] == '6') { game[1][2] = 'X'; }
			else {
				cout << "the place is already chosen, plz choose other.";
				change1();
			}
		}
		else if (turn1 == 7)
		{
			if (game[2][0] == '7') { game[2][0] = 'X'; }
			else {
				cout << "the place is already chosen, plz choose other.";
				change1();
			}
		}
		else if (turn1 == 8)
		{
			if (game[2][1] == '8') { game[2][1] = 'X'; }
			else {
				cout << "the place is already chosen, plz choose other.";
				change1();
			}
		}
		else if (turn1 == 9)
		{
			if (game[2][2] == '9') { game[2][2] = 'X'; }
			else {
				cout << "the place is already chosen, plz choose other.";
				change1();
			}
		}
		else 
		{
			cout << "invalid input of integers.";
			change1();
		}
}
void change2()
{
	int turn2;
	cout << "Turn for player 2 " << ":";
	cin >> turn2;
	if(turn2 == 1)
	{
		if(game[0][0] == '1'){ game[0][0] = 'O'; }
		else {
			cout << "the place is already chosen, plz choose other.";
			change2();
		}
	}
	else if(turn2 == 2)
	{
		if(game[0][1] == '2'){ game[0][1] = 'O'; }
		else {
			cout << "the place is already chosen, plz choose other.";
			change2();
		}
	}
	else if(turn2 == 3)
	{
		if(game[0][2] == '3'){ game[0][2] = 'O'; }
		else {
			cout << "the place is already chosen, plz choose other.";
			change2();
		}
	}
	else if(turn2 == 4)
	{
		if(game[1][0] == '4'){ game[1][0] = 'O'; }
		else {
			cout << "the place is already chosen, plz choose other.";
			change2();
		}
	}
	else if(turn2 == 5)
	{
		if(game[1][1] == '5'){ game[1][1] = 'O'; }
		else {
			cout << "the place is already chosen, plz choose other.";
			change2();
		}
	}
	else if(turn2 == 6)
	{
		if(game[1][2] == '6'){ game[1][2] = 'O'; }
		else {
			cout << "the place is already chosen, plz choose other.";
			change2();
		}
	}
	else if(turn2 == 7)
	{
		if(game[2][0] == '7'){ game[2][0] = 'O'; }
		else {
			cout << "the place is already chosen, plz choose other.";
			change2();
		}
	}
	else if(turn2 == 8)
	{
		if(game[2][1] == '8'){ game[2][1] = 'O'; }
		else {
			cout << "the place is already chosen, plz choose other.";
			change2();
		}
	}
	else if(turn2 == 9)
	{
		if(game[2][2] == '9'){ game[2][2] = 'O'; }
		else {
			cout << "the place is already chosen, plz choose other.";
			change2();
		}
	}
	else
	{
		cout << "invalid input of integers.";
		change2();
	}
}
void winnercheck1()
{
	if (game[0][0] == game[0][1] && game[0][1] == game[0][2]) {
		cout << "X wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[1][0] == game[1][1] && game[1][1] == game[1][2]) {
		cout << "X wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[2][0] == game[2][1] && game[2][1] == game[2][2]) {
		cout << "X wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[0][0] == game[1][0] && game[1][0] == game[2][0]) {
		cout << "X wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[0][1] == game[1][1] && game[1][1] == game[2][1]) {
		cout << "X wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[0][2] == game[1][2] && game[1][2] == game[2][2]) {
		cout << "X wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[0][0] == game[1][1] && game[1][1] == game[2][2]) {
		cout << "X wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[0][2] == game[1][1] && game[1][1] == game[2][0]) {
		cout << "X wins" << endl << "Congratulations";
		exit(0);
	}
}
void winnercheck2()
{
	if (game[0][0] == game[0][1] && game[0][1] == game[0][2]) {
		cout << "O wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[1][0] == game[1][1] && game[1][1] == game[1][2]) {
		cout << "O wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[2][0] == game[2][1] && game[2][1] == game[2][2]) {
		cout << "O wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[0][0] == game[1][0] && game[1][0] == game[2][0]) {
		cout << "O wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[0][1] == game[1][1] && game[1][1] == game[2][1]) {
		cout << "O wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[0][2] == game[1][2] && game[1][2] == game[2][2]) {
		cout << "O wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[0][0] == game[1][1] && game[1][1] == game[2][2]) {
		cout << "O wins" << endl << "Congratulations";
		exit(0);
	}
	else if (game[0][2] == game[1][1] && game[1][1] == game[2][0]) {
		cout << "O wins" << endl << "Congratulations";
		exit(0);
	}
}








// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
