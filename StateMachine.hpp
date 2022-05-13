#pragma once

#include <memory>
#include <stack>
#include "State.hpp"

namespace Game
{
    typedef std::unique_ptr<State> StateRef;

    class StateMachine
    {
        /**
         * @brief This class stores the states of the game in a stack 
         * and adds/removes/modifies states on the stack.
         * 
         */

        public:
            StateMachine(){}
            ~StateMachine(){}

            void AddState(StateRef newState, bool isReplacing = true);
            void RemoveState();

            // This method is responsible for updating the game state.
            void ProcessStateChanges();

            StateRef &GetActiveState();

        private:
            std::stack<StateRef> _states;
            StateRef _newState;

            bool _isRemoving;
            bool _isAdding;
            bool _isReplacing;
    };
 }