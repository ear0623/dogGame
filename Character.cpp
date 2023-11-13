#include "Character.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>

FCharacter::FCharacter()
{
	Shape = 'P';
	PlayerX = 10;
	PlayerX = 10;
}

FCharacter::~FCharacter()
{
	
}

void FCharacter::Move()
{
	//FCharacter::Move();
	COORD cur;
	cur.X = PlayerX;
	cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);

	while (true)
	{
		char Key = _getch();
		std::cout << Shape;

		if ('w' == Key || 'W' == Key)
		{
			
			PlayerY -= 1;
		}
		else if ('s' == Key || 'S' == Key)
		{
			
			PlayerY += 1;
		}
		else if ('a' == Key || 'A' == Key)
		{
			
			PlayerX -= 1;
		}
		else if ('d' == Key || 'D' == Key)
		{
			
			PlayerX += 1;
		}
		else
		{
			break;
		}
	}
	
}

inline void FCharacter::SetHP(const int InNewHP)
{
	if (HP >= 0)
	{
		HP = InNewHP;
	}
	else
	{
		std::cout << "HP already 0" << std::endl;
	}
}

void FCharacter::ApplyDamage(FCharacter* DamagedActor, float BaseDamage, FCharacter* Controller)
{
	if (DamagedActor && (BaseDamage != 0.0f))
	{
		return DamagedActor->TakeDamage(BaseDamage,DamagedActor);
	}
}

void FCharacter::TakeDamage(float BaseDamage, FCharacter* TargetActor)
{
	if (TargetActor)
	{
		TargetActor->HP -= BaseDamage;

	}
	
}
