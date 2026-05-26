#include <iostream>

struct PlayerSettings
{
	int HP;
	int MP;
	int ATK;
	int DEF;
	int SPD;
};

PlayerSettings hero = {
	1000, 100, 100, 50, 10
};

class Player
{
public:
	std::string Name;
	PlayerSettings Settings;

	Player(const Player& other)
		: Player(other.Name, other.Settings)
	{
	}

	Player(std::string name, const PlayerSettings& settings)
		: Name(name), Settings(settings)
	{
	}
};

void Show(const Player& player)
{
	std::cout << "Name : "  << player.Name
			  << ", HP : "  << player.Settings.HP
			  << ", MP : "  << player.Settings.MP
			  << ", ATK : " << player.Settings.ATK
			  << ", DEF : " << player.Settings.DEF
			  << ", SPD : " << player.Settings.SPD
			  << std::endl;
}

int main()
{
	Player player("勇者", hero);

	Show(player);
}