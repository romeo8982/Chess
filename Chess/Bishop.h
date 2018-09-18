#pragma once
#pragma once
#include "Peace.h"
#include <iostream>
class Bishop : public Peace
{
public:
	char ShowPeace();
	char GetCoordinateX();
	int GetCoordinateXInt();
	int GetCoordinateY();
	bool GetColor();
	std::string GetCoordinates();
	std::string GetLegalCoordinats();
	void PutData(char, int, bool);
	void PutCoordinateXInt(int);
	void PutCoordinateX(char);
	void PutCoordinateY(int);
	bool Color;
	char CoordinateX;
	int CoordinateY;
};
