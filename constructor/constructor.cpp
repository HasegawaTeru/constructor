#include <iostream>

class Player
{
public:
	int HP;

	Player(int hp) : HP(hp)
	{

	}
};

int main()
{
	Player player(100);

	std::cout << "HP : " << player.HP;
}