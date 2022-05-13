#pragma once

namespace Game
{
    class State
    {
        /**
         * @brief Abstract class that defines what a game state consists of.
         *
         */

    public:
        virtual void Init() = 0;

        // Updates the game state based on inputs and sends to display.
        virtual void HandleInput() = 0;
        virtual void Update(float dt) = 0;
        virtual void Draw(float dt) = 0;

        // Methods to move through the game state.
        virtual void Pause(){};
        virtual void Resume(){};
    };
}