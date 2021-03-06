// Chess.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Pon.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "King.h"
#include "Queen.h"
#include "Board.h"
#include "Peace.h"
#include "iostream"

using namespace std;


string interpreter(string input, Peace *peaces[])
{
	//musze tutaj wrocic bo potrzebuje islegalmove(bool)
	for (string::iterator it = input.begin(); it != input.end(); it++)
	{
		if (*it == 'R')
		{

		}
	}
	string output;
	return output;
}

void start_position(Peace *peaces[])
{
	int xcoordinate = 97;//a
	int ycoordinate = 2;
	int color = 0;

	for (int i = 0; i < 32; i++)
	{
		if (i < 16)
		{
			//pon
			if (i == 8)
			{
				xcoordinate = 97-8;//a
				ycoordinate = 7;
				color = 1;
			}
			peaces[i]->PutData(xcoordinate + i, ycoordinate, color);
		}
		if (i >= 16 && i < 20)
		{
			//rook
			if (i == 16)
			{
				xcoordinate = 97;//a
				ycoordinate = 1;
				color = 0;
			}
			if (i == 18)
			{
				color = 1;
				xcoordinate = 97;//a
				ycoordinate = 8;
			}
			peaces[i]->PutData(xcoordinate, ycoordinate, color);
			xcoordinate = xcoordinate + 7;
		}
		if (i >= 20 && i < 24)
		{
			//knight
			if (i == 20)
			{
				xcoordinate = 98;//b
				ycoordinate = 1;
				color = 0;
			}
			if (i == 22)
			{
				color = 1;
				xcoordinate = 98;//b
				ycoordinate = 8;
			}
			peaces[i]->PutData(xcoordinate, ycoordinate, color);
			xcoordinate = xcoordinate + 5;
			
		}
		if (i >= 24 && i < 28)
		{
			//bishop
			if (i == 24)
			{
				xcoordinate = 99;//c
				ycoordinate = 1;
				color = 0;
			}
			if (i == 26)
			{
				color = 1;
				xcoordinate = 99;//c
				ycoordinate = 8;
			}
			peaces[i]->PutData(xcoordinate, ycoordinate, color);
			xcoordinate = xcoordinate + 3;
		}
		if (i >= 28 && i < 30)
		{
			//king
			if (i == 28)
			{
				xcoordinate = 101;//e
				ycoordinate = 1;
				color = 0;
			}
			if (i == 29)
			{
				color = 1;
				xcoordinate = 101;//e
				ycoordinate = 8;
			}
			peaces[i]->PutData(xcoordinate, ycoordinate, color);
		}
		if (i >= 30 && i < 32)
		{
			//queen
			if (i == 30)
			{
				xcoordinate = 100;//d
				ycoordinate = 1;
				color = 0;
			}
			if (i == 31)
			{
				color = 1;
				xcoordinate = 100;//d
				ycoordinate = 8;
			}
			peaces[i]->PutData(xcoordinate, ycoordinate, color);
		}
	}
}

int main()
{
	Board board;
	Peace *peaces[32];
	for (int i = 0; i<32; i++ )
	{
		if (i < 16)
		{
			peaces[i] = new Pon;
		}
		if (i >= 16 && i < 20)
		{
			peaces[i] = new Rook;
		}
		if (i >= 20 && i < 24)
		{
			peaces[i] = new Knight;
		}
		if (i >= 24 && i < 28)
		{
			peaces[i] = new Bishop;
		}
		if (i >= 28 && i < 30)
		{
			peaces[i] = new King;
		}
		if (i >= 30 && i < 32)
		{
			peaces[i] = new Queen;
		}
	}
	start_position(peaces);
	board.AddPeace(peaces);
	char move[4];
	do
	{
		board.ShowBoard();
		//cout << endl << peaces[10]->GetCoordinateX() << " " << peaces[10]->GetCoordinateY() << endl;
		//cout << peaces[10]->GetLegalCoordinats() << endl;
		cin >> move;
		board.MovePeace(move[0], move[1]-48, move[2], move[3]-48, peaces);
		system("cls");
	} while (true);
	system("pause");
	return 0;
}
