#pragma once
#include <vector>
#include "Character.h"

class FPlayer : public FCharacter
{
	
//interface
public:
	FPlayer();
	//자식도 찾아서 삭제하게 만들기.
	~FPlayer();
	//accessor

	
	//return값을 바꾸지 말고 확인만
	const std::vector<int> DropItem();


	
	//캡슐화

	
private:


	
	
	//int Item[10];
	std::vector<int> Items;

};

