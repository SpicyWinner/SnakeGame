#pragma once
#include "Defination.hpp"
#include"State.hpp"
//#include"Game.hpp"
#include"Snake.hpp"
#include"Food.hpp"

class Level_01 : public State
{
public:
	Level_01(GameDataRef data);
	~Level_01();

	void init() override;
	void handleInput() override;
	void update() override;
	void draw() override;
private:
	GameDataRef data;
	Snake snake;
	Food food;
	sf::Sprite background;
	sf::Sprite background02;
	sf::Sprite pauseButton;
	sf::Clock clk;
	float timer;
	float delay;
	bool isMouseButtonReleased;
};