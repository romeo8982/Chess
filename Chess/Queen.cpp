#include "stdafx.h"
#include "Queen.h"

char Queen::ShowPeace()
{
	char sign = 'Q';
	return sign;
}

char Queen::GetCoordinateX()
{
	return CoordinateX;
}

int Queen::GetCoordinateXInt()
{
	return CoordinateX - 97;
}

int Queen::GetCoordinateY()
{
	return CoordinateY;
}

bool Queen::GetColor()
{
	return Color;
}

void Queen::PutData(char x, int y, bool color)
{
	CoordinateX = x;
	CoordinateY = y;
	Color = color;
}

void Queen::PutCoordinateXInt(int x)
{
	CoordinateX = x;
	CoordinateX += 97;
}

void Queen::PutCoordinateX(char x)
{
	CoordinateX = x;
}

void Queen::PutCoordinateY(int y)
{
	CoordinateY = y;
}

std::string Queen::GetCoordinates()
{
	std::string helper(1, GetCoordinateX());
	std::string coordinates = helper + std::to_string(GetCoordinateY());
	return coordinates;
}

std::string Queen::GetLegalCoordinats()
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
