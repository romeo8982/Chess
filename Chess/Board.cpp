#include "stdafx.h"
#include "Board.h"

using namespace std;

void Board::ShowBoard()
{
	HANDLE  hConsole;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	
	cout << " | h | g | f | e | d | c | b | a |" << endl;
	cout << "----------------------------------" << endl;
	cout << "1| "; SetConsoleTextAttribute(hConsole, console_color[0][0]); cout << tab[0][0]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[0][1]); cout << tab[0][1]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[0][2]); cout << tab[0][2]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[0][3]); cout << tab[0][3]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[0][4]); cout << tab[0][4]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[0][5]); cout << tab[0][5]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[0][6]); cout << tab[0][6]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[0][7]); cout << tab[0][7]; SetConsoleTextAttribute(hConsole, 15); cout << " |" << endl;
	cout << "----------------------------------" << endl;
	cout << "2| "; SetConsoleTextAttribute(hConsole, console_color[1][0]); cout << tab[1][0]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[1][1]); cout << tab[1][1]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[1][2]); cout << tab[1][2]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[1][3]); cout << tab[1][3]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[1][4]); cout << tab[1][4]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[1][5]); cout << tab[1][5]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[1][6]); cout << tab[1][6]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[1][7]); cout << tab[1][7]; SetConsoleTextAttribute(hConsole, 15); cout << " |" << endl;
	cout << "----------------------------------" << endl;
	cout << "3| "; SetConsoleTextAttribute(hConsole, console_color[2][0]); cout << tab[2][0]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[2][1]); cout << tab[2][1]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[2][2]); cout << tab[2][2]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[2][3]); cout << tab[2][3]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[2][4]); cout << tab[2][4]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[2][5]); cout << tab[2][5]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[2][6]); cout << tab[2][6]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[2][7]); cout << tab[2][7]; SetConsoleTextAttribute(hConsole, 15); cout << " |" << endl;
	cout << "----------------------------------" << endl;
	cout << "4| "; SetConsoleTextAttribute(hConsole, console_color[3][0]); cout << tab[3][0]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[3][1]); cout << tab[3][1]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[3][2]); cout << tab[3][2]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[3][3]); cout << tab[3][3]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[3][4]); cout << tab[3][4]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[3][5]); cout << tab[3][5]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[3][6]); cout << tab[3][6]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[3][7]); cout << tab[3][7]; SetConsoleTextAttribute(hConsole, 15); cout << " |" << endl;
	cout << "----------------------------------" << endl;
	cout << "5| "; SetConsoleTextAttribute(hConsole, console_color[4][0]); cout << tab[4][0]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[4][1]); cout << tab[4][1]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[4][2]); cout << tab[4][2]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[4][3]); cout << tab[4][3]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[4][4]); cout << tab[4][4]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[4][5]); cout << tab[4][5]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[4][6]); cout << tab[4][6]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[4][7]); cout << tab[4][7]; SetConsoleTextAttribute(hConsole, 15); cout << " |" << endl;
	cout << "----------------------------------" << endl;
	cout << "6| "; SetConsoleTextAttribute(hConsole, console_color[5][0]); cout << tab[5][0]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[5][1]); cout << tab[5][1]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[5][2]); cout << tab[5][2]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[5][3]); cout << tab[5][3]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[5][4]); cout << tab[5][4]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[5][5]); cout << tab[5][5]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[5][6]); cout << tab[5][6]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[5][7]); cout << tab[5][7]; SetConsoleTextAttribute(hConsole, 15); cout << " |" << endl;
	cout << "----------------------------------" << endl;
	cout << "7| "; SetConsoleTextAttribute(hConsole, console_color[6][0]); cout << tab[6][0]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[6][1]); cout << tab[6][1]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[6][2]); cout << tab[6][2]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[6][3]); cout << tab[6][3]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[6][4]); cout << tab[6][4]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[6][5]); cout << tab[6][5]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[6][6]); cout << tab[6][6]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[6][7]); cout << tab[6][7]; SetConsoleTextAttribute(hConsole, 15); cout << " |" << endl;
	cout << "----------------------------------" << endl;
	cout << "8| "; SetConsoleTextAttribute(hConsole, console_color[7][0]); cout << tab[7][0]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[7][1]); cout << tab[7][1]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[7][2]); cout << tab[7][2]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[7][3]); cout << tab[7][3]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[7][4]); cout << tab[7][4]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[7][5]); cout << tab[7][5]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[7][6]); cout << tab[7][6]; SetConsoleTextAttribute(hConsole, 15); cout << " | "; SetConsoleTextAttribute(hConsole, console_color[7][7]); cout << tab[7][7]; SetConsoleTextAttribute(hConsole, 15); cout << " |" << endl;
	cout << "----------------------------------" << endl;
	cout << " | h | g | f | e | d | c | b | a |" << endl;
}

void Board::AddPeace(Peace *peaces[])
{
	for (int i = 0; i < 32; i++)
	{
		if (peaces[i]->GetColor() == 1)
		{
			console_color[peaces[i]->GetCoordinateY() - 1][7-peaces[i]->GetCoordinateXInt()] = 2;
		}
		tab[peaces[i]->GetCoordinateY() - 1][7-peaces[i]->GetCoordinateXInt()] = peaces[i]->ShowPeace();
	}
}

void Board::MovePeace(char start_coordinate_x, int start_coordinate_y, char end_coordinate_x, int end_coordinate_y, Peace *peaces[])
{
	string LegalCoordinats;
	LegalCoordinats = end_coordinate_x;
	LegalCoordinats += (end_coordinate_y + 48);
	for (int i = 0; i < 32; i++)
	{
		if ((peaces[i]->GetCoordinateX() == start_coordinate_x) && (peaces[i]->GetCoordinateY() == start_coordinate_y))
		{
			size_t FoundLegalCoordinate = peaces[i]->GetLegalCoordinats().find(LegalCoordinats);
			if (FoundLegalCoordinate != string::npos)
			{

				for (int j = 0; j < 32; j++)
				{
					if ((peaces[j]->GetCoordinateX() == end_coordinate_x) && (peaces[j]->GetCoordinateY() == end_coordinate_y))
					{
						peaces[j]->PutCoordinateX('z');
						peaces[j]->PutCoordinateY(i);
						break;
					}
				}
				if (peaces[i]->GetColor() == 1)
				{
					console_color[peaces[i]->GetCoordinateY() - 1][7 - peaces[i]->GetCoordinateXInt()] = 2;
				}
				tab[peaces[i]->GetCoordinateY() - 1][7 - peaces[i]->GetCoordinateXInt()] = ' ';

				peaces[i]->PutCoordinateX(end_coordinate_x);
				peaces[i]->PutCoordinateY(end_coordinate_y);

				if (peaces[i]->GetColor() == 1)
				{
					console_color[peaces[i]->GetCoordinateY() - 1][7 - peaces[i]->GetCoordinateXInt()] = 2;
				}
				tab[peaces[i]->GetCoordinateY() - 1][7 - peaces[i]->GetCoordinateXInt()] = peaces[i]->ShowPeace();
				break;
			}
		}
	}
}

Board::Board()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
		tab[i][j] = ' ';
		console_color[i][j] = 15;
		}
	}
}

Board::~Board()
{
}
