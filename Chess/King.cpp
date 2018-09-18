#include "stdafx.h"
#include "King.h"

char King::ShowPeace()
{
	char sign = 'K';
	return sign;
}

char King::GetCoordinateX()
{
	return CoordinateX;
}

int King::GetCoordinateXInt()
{
	return CoordinateX - 97;
}

int King::GetCoordinateY()
{
	return CoordinateY;
}

bool King::GetColor()
{
	return Color;
}

void King::PutData(char x, int y, bool color)
{
	CoordinateX = x;
	CoordinateY = y;
	Color = color;
}

void King::PutCoordinateXInt(int x)
{
	CoordinateX = x;
	CoordinateX += 97;
}

void King::PutCoordinateX(char x)
{
	CoordinateX = x;
}

void King::PutCoordinateY(int y)
{
	CoordinateY = y;
}

std::string King::GetCoordinates()
{
	std::string helper(1,GetCoordinateX());
	std::string coordinates =  helper + std::to_string(GetCoordinateY());
	return coordinates;
}

std::string King::GetLegalCoordinats()
{
std::string LegalCoordinats;
char helperCoordinateX = CoordinateX;
int helperCoordinateY = CoordinateY;

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
