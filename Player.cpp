#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
	HP = 0;
	Items.clear();
	std::cout << "�÷��̾������" << std::endl;
}

FPlayer::~FPlayer()
{
	std::cout << "�÷��̾�Ҹ��" << std::endl;
}



const std::vector<int> FPlayer::DropItem()
{

	return Items;
}

