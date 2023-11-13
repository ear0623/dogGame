#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include <memory.h>
#include "Slaim.h"
#include "Boar.h"
#include <vector>
#include <list>
#include "Maps.h"

using namespace std;

template <typename T>
class Container
{
public:
	Container()
	{

	}
	~Container()
	{

	}
	T i;
};

int main()
{
	Container<int> Mint;
	Container<FPlayer> Mint2;

	FMaps* map = new FMaps();
	if (map)
	{
		map->Draw();
	}
	delete map;

	FPlayer* MyFplayer = new FPlayer();
	MyFplayer->Move();
	delete MyFplayer;


	vector<FGoblin*> Enermy;
	Enermy.push_back(new FGoblin);
	

	vector<FSlaim*> Enermy02;
	Enermy02.push_back(new FSlaim);

	unique_ptr<FBoar> Slaim = make_unique<FBoar>();
	Slaim->Move();

	//stl,container
	vector<int> IntArray;
	IntArray.push_back(1);
	IntArray.push_back(2);
	IntArray.push_back(3);

	
	for (vector<int>::iterator i= IntArray.begin(); i != IntArray.end(); i++)
	{
		std::cout << *i << std::endl;
	}

	for (vector<int>::reverse_iterator i = IntArray.rbegin(); i != IntArray.rend(); i++)
	{
		std::cout << *i << std::endl;
	}

	for (auto i = IntArray.begin(); i != IntArray.end(); i++)
	{
		std::cout << *i << std::endl;
	}

	list<int> IntList;
	IntList.push_back(1);
	IntList.push_back(2);
	IntList.push_back(3);
	for (list<int>::reverse_iterator i= IntList.rbegin(); i != IntList.rend(); i++)
	{
		std::cout << *i << std::endl;
	}

	for (auto Value : IntArray)
	{
		std::cout << Value << std::endl;
	}



	//vector<ClassName*> Left;

	return 0;
	
}