#ifndef HUD_H
#define HUD_H

#include <SFML/Graphics.hpp>
#include "GameLogic.h"
#include "ScreenManager.h"

class HUD {
public:
    HUD();
    void handleEvents(sf::Event& event, GameLogic& gameLogic, ScreenManager& screenManager);
    void update(int score, int lives, int level);
    void render(sf::RenderWindow& window, bool isGameOver);

private:
    sf::Font font;
    sf::Text scoreText;
    sf::Text levelText;
    sf::Text gameOverText;
    sf::RectangleShape uiPanel;
    sf::RectangleShape pauseResumeButton;
    sf::Text pauseResumeText;
    sf::Texture heartTexture;
    std::vector<sf::Sprite> heartSprites;
};

#endif