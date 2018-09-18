#include "stdafx.h"
#include "Pon.h"

char Pon::ShowPeace()
{
	char sign = 'P';
	return sign;
}

char Pon::GetCoordinateX()
{
	return CoordinateX;
}

int Pon::GetCoordinateXInt()
{
	return CoordinateX - 97;
}

int Pon::GetCoordinateY()
{
	return CoordinateY;
}

bool Pon::GetColor()
{
	return Color;
}

std::string Pon::GetCoordinates()
{
	std::string helper(1, GetCoordinateX());
	std::string coordinates = helper + std::to_string(GetCoordinateY());
	return coordinates;
}

std::string Pon::GetLegalCoordinats()
{
	std::string LegalCoordinats;
	char helperCoordinateX = CoordinateX;
	int helperCoordinateY = CoordinateY;
	if (!Color)
	{
		helperCoordinateX += 1;
		helperCoordinateY += 1;
		if (helperCoordinateX < 97 || helperCoordinateX > 104 || helperCoordinateY > 8 || helperCoordinateY < 1)
		{
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
		else
		{
			LegalCoordinats += helperCoordinateX;
			LegalCoordinats += (helperCoordinateY + 48);
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
		helperCoordinateX -= 1;
		helperCoordinateY += 1;
		if (helperCoordinateX < 97 || helperCoordinateX > 104 || helperCoordinateY > 8 || helperCoordinateY < 1)
		{
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
		else
		{
			LegalCoordinats += helperCoordinateX;
			LegalCoordinats += (helperCoordinateY + 48);
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
		helperCoordinateY += 1;
		if (helperCoordinateX < 97 || helperCoordinateX > 104 || helperCoordinateY > 8 || helperCoordinateY < 1)
		{
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
		else
		{
			LegalCoordinats += helperCoordinateX;
			LegalCoordinats += (helperCoordinateY + 48);
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
		if (CoordinateY == 2)
		{
			helperCoordinateY += 2;
			LegalCoordinats += helperCoordinateX;
			LegalCoordinats += (helperCoordinateY + 48);
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
	}
	else
	{
		helperCoordinateX += 1;
		helperCoordinateY -= 1;
		if (helperCoordinateX < 97 || helperCoordinateX > 104 || helperCoordinateY > 8 || helperCoordinateY < 1)
		{
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
		else
		{
			LegalCoordinats += helperCoordinateX;
			LegalCoordinats += (helperCoordinateY + 48);
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;

		}
		helperCoordinateX -= 1;
		helperCoordinateY -= 1;
		if (helperCoordinateX < 97 || helperCoordinateX > 104 || helperCoordinateY > 8 || helperCoordinateY < 1)
		{
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
		else
		{
			LegalCoordinats += helperCoordinateX;
			LegalCoordinats += (helperCoordinateY + 48);
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
		helperCoordinateY -= 1;
		if (helperCoordinateX < 97 || helperCoordinateX > 104 || helperCoordinateY > 8 || helperCoordinateY < 1)
		{
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
		else
		{
			LegalCoordinats += helperCoordinateX;
			LegalCoordinats += (helperCoordinateY + 48);
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
		if (CoordinateY == 7)
		{
			helperCoordinateY -= 2;
			LegalCoordinats += helperCoordinateX;
			LegalCoordinats += (helperCoordinateY + 48);
			helperCoordinateX = CoordinateX;
			helperCoordinateY = CoordinateY;
		}
	}
	return LegalCoordinats;
}

void Pon::PutData(char x, int y, bool color)
{
	CoordinateX = x;
	CoordinateY = y;
	Color = color;
}

void Pon::PutCoordinateXInt(int x)
{
	CoordinateX = x;
	CoordinateX += 97;
}

void Pon::PutCoordinateX(char x)
{
	CoordinateX = x;
}

void Pon::PutCoordinateY(int y)
{
	CoordinateY = y;
}
