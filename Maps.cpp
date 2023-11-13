#include "Maps.h"
#include <vector>
#include <iostream>
#include <string>

FMaps::FMaps()
{
    ChracterShape = 'p';
    PlayerX = 0;
    PlayerY = 0;

    rows = 50;
    cols = 50;
    MapShape = '*';
    
}

FMaps::FMaps(int _rows, int _cols, char initialValue)
{
    
}

FMaps::~FMaps()
{

}

const void FMaps::Draw()
{
    for (const auto& row : maps01)
    {
        for (const auto& cole : row)
        {
            std::cout << cole << " ";
        }
        std::cout << std::endl;

    }

    

}

const int FMaps::PlayerStart(const int& XIndex, const int& YIndex)
{

    return 0;
}

const int FMaps::GetPlaerPosition(const int& XIndex, const int& YIndex)
{
    for (std::vector<std::string>::iterator DrawMap= maps01.begin(); DrawMap!= maps01.end();DrawMap++)
    {
       
    }

    PlayerX = XIndex;
    PlayerY = YIndex;
    std::cout << ChracterShape << std::endl;

    return PlayerX,PlayerY;
}
