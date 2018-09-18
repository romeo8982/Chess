#pragma once
#include "stdafx.h"

class Peace
{
public:
	
	virtual char ShowPeace() = 0;
	virtual char GetCoordinateX() = 0;
	virtual int GetCoordinateXInt() = 0;
	virtual int GetCoordinateY() = 0;
	virtual bool GetColor() = 0;
	virtual std::string GetLegalCoordinats() = 0;
	virtual void PutData(char,int,bool) = 0;
	virtual void PutCoordinateXInt(int) = 0;
	virtual void PutCoordinateX(char) = 0;
	virtual void PutCoordinateY(int) = 0;
};