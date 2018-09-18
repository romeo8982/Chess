#include "stdafx.h"
#include "Rook.h"

char Rook::ShowPeace()
{
	char sign = 'R';
	return sign;
}

char Rook::GetCoordinateX()
{
	return CoordinateX;
}

int Rook::GetCoordinateXInt()
{
	return CoordinateX - 97;
}

int Rook::GetCoordinateY()
{
	return CoordinateY;
}

bool Rook::GetColor()
{
	return Color;
}

void Rook::PutData(char x, int y, bool color)
{
	CoordinateX = x;
	CoordinateY = y;
	Color = color;
}

std::string Rook::GetCoordinates()
{
	std::string helper(1, GetCoordinateX());
	std::string coordinates = helper + std::to_string(GetCoordinateY());
	return coordinates;
}

std::string Rook::GetLegalCoordinats()
{
	std::string LegalCoordinats;
	char helperCoordinateX = CoordinateX;
	int helperCoordinateY = CoordinateY;
	for (;;)
	{
		helperCoordinateX += 1;
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

void Rook::PutCoordinateXInt(int x)
{
	CoordinateX = x;
	CoordinateX += 97;
}

void Rook::PutCoordinateX(char x)
{
	CoordinateX = x;
}

void Rook::PutCoordinateY(int y)
{
	CoordinateY = y;
}
