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
	int HP;
	int MP;
	int ATK;
	int DEF;
	int SPD;

	Player()
		: Player("Default")
	{
	}

	Player(std::string name, int hp = 100, int mp = 0, int atk = 1, int def = 1, int spd = 1)
		: Name(name), HP(hp), MP(mp), ATK(atk), DEF(def), SPD(spd)
	{
	}

	Player(const Player& other)
		: Name(other.Name), HP(other.HP), MP(other.MP), ATK(other.ATK), DEF(other.DEF), SPD(other.SPD)
	{
	}

	Player(std::string name, const PlayerSettings& setting)
		: Player(name, setting.HP, setting.MP, setting.ATK, setting.DEF, setting.SPD)
	{
	}
};

void Show(const Player& player)
{
	std::cout << "Name : "  << player.Name
			  << ", HP : "  << player.HP
			  << ", MP : "  << player.MP
			  << ", ATK : " << player.ATK
			  << ", DEF : " << player.DEF
			  << ", SPD : " << player.SPD
			  << std::endl;
}

int main()
{
	Player player1("勇者", 200, 0, 10, 5, 1);
	Player player2 = player1;
	Player player3("勇者", hero);

	Show(player1);
	Show(player2);
	Show(player3);
}