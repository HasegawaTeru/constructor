#include <iostream>

struct PlayerSettings
{
	char Name[256];
	int HP;
	int MP;
	int ATK;
	int DEF;
	int SPD;
};

//　勇者の設定
PlayerSettings hero = {
	"勇者", 1000, 100, 100, 50, 10
};

class Player
{
public:
	PlayerSettings Settings;

	Player(const Player& other)
		: Player(other.Settings)
	{
	}

	//　引数を受け取る（名前、設定）
	Player(const PlayerSettings& settings)
		//　名前（勇者）設定（hero）から数値を参照
		: Settings(settings)
	{
	}
};

void Show(const Player& player)
{
	std::cout << "Name : "  << player.Settings.Name
			  << ", HP : "  << player.Settings.HP
			  << ", MP : "  << player.Settings.MP
			  << ", ATK : " << player.Settings.ATK
			  << ", DEF : " << player.Settings.DEF
			  << ", SPD : " << player.Settings.SPD
			  << std::endl;
}

int main()
{
	//　Playerクラス（名前：勇者、設定：hero）をplayerに代入
	Player player(hero);
	//　playerの情報を表示
	Show(player);
}