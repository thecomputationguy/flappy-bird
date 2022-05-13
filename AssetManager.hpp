#pragma once

#include <map>
#include <SFML/Graphics.hpp>

namespace Game
{
    class AssetManager
    {
        /**
         * @brief Responsible for loading textures, fonts, sounds etc
         * for the audio-visual aspects of the game.
         *
         */

    public:
        AssetManager() {}
        ~AssetManager() {}

        void LoadTexture(std::string name, std::string fileName);
        sf::Texture &GetTexture(std::string name);

        void LoadFont(std::string name, std::string fileName);
        sf::Font &GetFont(std::string name);

    private:
        // Generate a mapping between the texture/font name and the texture/font itself.
        std::map<std::string, sf::Texture> _textures;
        std::map<std::string, sf::Font> _fonts;
    };
}