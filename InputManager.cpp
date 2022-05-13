#include "InputManager.hpp"

namespace Game
{
    bool InputManager::IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window)
    {
        if(sf::Mouse::isButtonPressed(button))
        {
            // Create a temporary object to check if it contains the mouse pointer.
            // A brief overview of sprites and textures can be found here:
            // https://www.sfml-dev.org/tutorials/2.5/graphics-sprite.php
            sf::IntRect tempRect(object.getPosition().x, object.getPosition().y, object.getGlobalBounds().width, object.getGlobalBounds().height);

            // Check if the rectangle contains the mouse pointer.
            if(tempRect.contains(sf::Mouse::getPosition(window)))
            {
                return true;
            }

            return false;
        }
    }

    sf::Vector2i InputManager::GetMousePosition(sf::RenderWindow &window)
    {
        return sf::Mouse::getPosition(window);
    }
}