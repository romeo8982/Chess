#include "stdafx.h"
#include "Bishop.h"

char Bishop::ShowPeace()
{
	char sign='B';
	return sign;
}

char Bishop::GetCoordinateX()
{
	return CoordinateX;
}

int Bishop::GetCoordinateXInt()
{
	return CoordinateX- 97;
}

int Bishop::GetCoordinateY()
{
	return CoordinateY;
}

bool Bishop::GetColor()
{
	return Color;
}

void Bishop::PutData(char x, int y, bool color)
{
	CoordinateX = x;
	CoordinateY = y;
	Color = color;
}

void Bishop::PutCoordinateXInt(int x)
{
	CoordinateX = x;
	CoordinateX += 97;
}

void Bishop::PutCoordinateX(char x)
{
	CoordinateX = x;
}

void Bishop::PutCoordinateY(int y)
{
	CoordinateY = y;
}

std::string Bishop::GetCoordinates()
{
	std::string helper(1, GetCoordinateX());
	std::string coordinates = helper + std::to_string(GetCoordinateY());
	return coordinates;
}

std::string Bishop::GetLegalCoordinats()
{
	std::string LegalCoordinats;
	char helperCoordinateX = CoordinateX;
	int helperCoordinateY = CoordinateY;
	for (;;)
	{
		helperCoordinateX += 1;
		helperCoordinateY += 1;
		if (helperCoordinateX < 97 || helperCoordinateX > 104 || helperCoordinateY > 8 || helperCoordinateY < 1)
		{
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
			break;
		}
		else
		{
			LegalCoordinats += helperCoordinateX;
			LegalCoordinats += (helperCoordinateY + 48);
	
		}
	}
	for (;;)
	{
		helperCoordinateX += 1;
		helperCoordinateY -= 1;
		if (helperCoordinateX < 97 || helperCoordinateX > 104 || helperCoordinateY > 8 || helperCoordinateY < 1)
		{
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
			break;
		}
		else
		{
			LegalCoordinats += helperCoordinateX;
			LegalCoordinats += (helperCoordinateY + 48);
		}
	}
	for (;;)
	{
		helperCoordinateX -= 1;
		helperCoordinateY += 1;
		if (helperCoordinateX < 97 || helperCoordinateX > 104 || helperCoordinateY > 8 || helperCoordinateY < 1)
		{
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
			break;
		}
		else
		{
			LegalCoordinats += helperCoordinateX;
			LegalCoordinats += (helperCoordinateY + 48);
		}
	}
	for (;;)
	{
		helperCoordinateX -= 1;
		helperCoordinateY -= 1;
		if (helperCoordinateX < 97 || helperCoordinateX > 104 || helperCoordinateY > 8 || helperCoordinateY < 1)
		{
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
			break;
		}
		else
		{
			LegalCoordinats += helperCoordinateX;
			LegalCoordinats += (helperCoordinateY + 48);
		}
	}
	return LegalCoordinats;
}

