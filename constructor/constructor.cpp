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
//　魔法使いの設定
PlayerSettings magician = {
	"魔法使い", 400, 300, 30, 20, 5
};

PlayerSettings custom;

class Player
{
public:
	PlayerSettings Settings;

	Player(const Player& other)
		: Player(other.Settings)
	{
	}

	//　引数を受け取る（設定）
	Player(const PlayerSettings& settings)
		//　設定（hero）から設定を参照
		: Settings(settings)
	{
	}
};

void GetSettings(PlayerSettings& settings)
{
	std::cout << "Name : ";
	std::cin >> settings.Name;
	std::cout << "HP   : ";
	std::cin >> settings.HP;
	std::cout << "MP   : ";
	std::cin >> settings.MP;
	std::cout << "ATK  : ";
	std::cin >> settings.ATK;
	std::cout << "DEF  : ";
	std::cin >> settings.DEF;
	std::cout << "SPD  : ";
	std::cin >> settings.SPD;
	std::cout << std::endl;
}

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
	//　設定：customにユーザーからの入力を受け取る
	GetSettings(custom);
	//　Playerクラス（設定：hero）をplayerに代入
	Player player(hero);
	Player player2(magician);
	Player player3(custom);
	//　playerの情報を表示
	Show(player);
	Show(player2);
	Show(player3);
}