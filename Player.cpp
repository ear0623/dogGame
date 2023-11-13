#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
	HP = 100;
	Items.clear();
	
}

FPlayer::~FPlayer()
{
	
}



const std::vector<int> FPlayer::DropItem()
{

	return Items;
}

