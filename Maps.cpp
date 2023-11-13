#include "Maps.h"
#include <vector>
#include <iostream>
#include <string>

FMaps::FMaps()
{
    Shape = 'p';
    PlayerX = 0;
    PlayerY = 0;

	maps01 = { 
        "*****************************************",
        "*                                       *",
        "*                                       *",
        "*                                       *",
        "*                                       *",
        "*                                       *",
        "*                                       *",
        "*                                       *",
        "*                                       *",
        "*                                       *",
        "*                                       *",
        "*                                       *",
        "*                                       *",
        "*****************************************", };

    
}

FMaps::~FMaps()
{

}

const void FMaps::Draw()
{
    for (const auto& DrawMap : maps01)
    {
        std::cout << DrawMap << std::endl;
        DrawMap[15]
    }

    GetPlaerPosition(15, 15);

}

const int FMaps::PlayerStart(const int& XIndex, const int& YIndex)
{

    return 0;
}

const int FMaps::GetPlaerPosition(const int& XIndex, const int& YIndex)
{
    for (std::vector<std::string>::iterator DrawMap= maps01.begin(); DrawMap!= maps01.end();DrawMap++)
    {
        if(XIndex == maps01[X])
    }

    PlayerX = XIndex;
    PlayerY = YIndex;
    std::cout << Shape << std::endl;

    return PlayerX,PlayerY;
}
