#include "Character.h"
#include <iostream>
#include <conio.h>

FCharacter::FCharacter()
{
	std::cout << "������" << std::endl;
}

FCharacter::~FCharacter()
{
	std::cout << "���ŵ�" << std::endl;
}

void FCharacter::Move()
{
	//FCharacter::Move();
	char Key = _getch();
	

	if ('w' == Key ||'W' == Key)
	{
		std::cout << "���� �����δ�." << std::endl;
	}
	else if ('s' == Key || 'S' == Key)
	{
		std::cout << "�Ʒ��� �����δ�." << std::endl;
	}
	else if ('a' == Key || 'A' == Key)
	{
		std::cout << "�������� �����δ�." << std::endl;
	}
	else if ('d' == Key || 'D' == Key)
	{
		std::cout << "���������� �����δ�." << std::endl;
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
