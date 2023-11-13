#pragma once

#include <vector>
#include <string>

class FMaps
{
public:

	FMaps();
	~FMaps();

	const void Draw();
	const int PlayerStart(const int& XIndex, const int& YIndex);

	const int GetPlaerPosition(const int& XIndex, const int& YIndex);

private:

	 int PlayerX;
	 int PlayerY;
	 char Shape;

	std::vector<std::string>maps01;
};

