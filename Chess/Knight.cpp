#include "stdafx.h"
#include "Knight.h"

char Knight::ShowPeace()
{
	char sign = 'N';
	return sign;
}

char Knight::GetCoordinateX()
{
	return CoordinateX;
}

int Knight::GetCoordinateXInt()
{
	return CoordinateX - 97;
}

int Knight::GetCoordinateY()
{
	return CoordinateY;
}

bool Knight::GetColor()
{
	return Color;
}

void Knight::PutData(char x, int y, bool color)
{
	CoordinateX = x;
	CoordinateY = y;
	Color = color;
}
void Knight::PutCoordinateXInt(int x)
{
	CoordinateX = x;
	CoordinateX += 97;
}
void Knight::PutCoordinateX(char x)
{
	CoordinateX = x;
}
void Knight::PutCoordinateY(int y)
{
	CoordinateY = y;
}
std::string Knight::GetCoordinates()
{
	std::string helper(1, GetCoordinateX());
	std::string coordinates = helper + std::to_string(GetCoordinateY());
	return coordinates;
}

std::string Knight::GetLegalCoordinats()
{
	std::string LegalCoordinats;
	char helperCoordinateX = CoordinateX;
	int helperCoordinateY = CoordinateY;

	helperCoordinateX += 2;
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
	helperCoordinateX += 2;
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
	helperCoordinateX -= 2;
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
	helperCoordinateX -= 2;
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
	helperCoordinateX += 1;
	helperCoordinateY -= 2;
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
	helperCoordinateY -= 2;
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
	helperCoordinateX += 1;
	helperCoordinateY += 2;
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
	helperCoordinateY += 2;
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
	return LegalCoordinats;
}
