#include "Boar.h"
#include <iostream>

FBoar::FBoar()
{
	std::cout << "FboarSpawn" << std::endl;
}

FBoar::~FBoar()
{
	std::cout << "FboarEliminate" << std::endl;
}

void FBoar::Move()
{
	std::cout << "Boar Move" << std::endl;
}
