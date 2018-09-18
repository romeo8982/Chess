#pragma once
#include "Peace.h"
class Board
{
public:
	char tab[8][8];
	int console_color[8][8];
	Board();
	void ShowBoard();
	void AddPeace(Peace *peaces[]);
	void MovePeace(char start_coordinate_x, int start_coordinate_y, char end_coordinate_x, int end_coordinate_y,Peace *peaces[]);
	~Board();
};

