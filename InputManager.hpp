#pragma once

#include <SFML/Graphics.hpp>

namespace Game
{
    class InputManager
    {
        /**
         * @brief Responsible for loading controller inputs
         * for the control aspects of the game.
         *
         */

    public:
        InputManager() {}
        ~InputManager() {}

        // Checks if a sprite has been clicked on by the user.
        bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);

        // Gets the position of the mouse pointer on the screen.
        sf::Vector2i GetMousePosition(sf::RenderWindow &window);
    };
}