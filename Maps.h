#pragma once

#include <vector>
#include <string>
#include <Windows.h>

class FMaps
{
public:

	FMaps();
	FMaps(int _rows,int _cols, char initialValue);
	~FMaps();

	const void Draw();
	const int PlayerStart(const int& XIndex, const int& YIndex);

	const int GetPlaerPosition(const int& XIndex, const int& YIndex);

private:

	 int PlayerX;
	 int PlayerY;
	 char ChracterShape;


	 int rows;
	 int cols;
	 char MapShape;

	std::vector<std::string>maps01;
};

