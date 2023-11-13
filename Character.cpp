#include "Character.h"
#include <iostream>
#include <conio.h>

FCharacter::FCharacter()
{
	std::cout << "생성됨" << std::endl;
}

FCharacter::~FCharacter()
{
	std::cout << "제거됨" << std::endl;
}

void FCharacter::Move()
{
	//FCharacter::Move();
	char Key = _getch();
	

	if ('w' == Key ||'W' == Key)
	{
		std::cout << "위로 움직인다." << std::endl;
	}
	else if ('s' == Key || 'S' == Key)
	{
		std::cout << "아래로 움직인다." << std::endl;
	}
	else if ('a' == Key || 'A' == Key)
	{
		std::cout << "왼쪽으로 움직인다." << std::endl;
	}
	else if ('d' == Key || 'D' == Key)
	{
		std::cout << "오른쪽으로 움직인다." << std::endl;
	}
	else
	{
		
	}
}

inline void FCharacter::SetHP(const int InNewHP)
{
	if (HP >= 0)
	{
		HP = InNewHP;
	}
}
