#pragma once
#include <vector>
#include "Character.h"

class FPlayer : public FCharacter
{
	
//interface
public:
	FPlayer();
	//�ڽĵ� ã�Ƽ� �����ϰ� �����.
	~FPlayer();
	//accessor

	
	//return���� �ٲ��� ���� Ȯ�θ�
	const std::vector<int> DropItem();


	
	//ĸ��ȭ

	
private:


	
	
	//int Item[10];
	std::vector<int> Items;

};

