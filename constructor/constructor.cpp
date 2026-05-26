#include <iostream>

class Player
{
public:
	std::string Name;
	int HP;

	Player()
		: Player("Default", 100)
	{
	}

	Player(std::string name, int hp)
		: Name(name), HP(hp)
	{
	}
};

int main()
{
	Player player1;
	Player player2("勇者", 200);

	std::cout << "Name : " << player1.Name << ", HP : " << player1.HP << std::endl;
	std::cout << "Name : " << player2.Name << ", HP : " << player2.HP << std::endl;
}