#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
	HP = 0;
	Items.clear();
	std::cout << "ÇÃ·¹ÀÌ¾î»ý¼ºµÊ" << std::endl;
}

FPlayer::~FPlayer()
{
	std::cout << "ÇÃ·¹ÀÌ¾î¼Ò¸êµÊ" << std::endl;
}



const std::vector<int> FPlayer::DropItem()
{

	return Items;
}

