#pragma once

#include <SFML/Graphics.hpp>
#include "../../header/Global/ServiceLocator.h"

namespace Main {

    enum class GameState {
        BOOT,
        SPLASH_SCREEN,
        MAIN_MENU,
        INSTRUCTIONS,
        GAMEPLAY,
        CREDITS
    };

    class GameService {
    private:
        static GameState current_state;
        Global::ServiceLocator service_locator;
        sf::RenderWindow game_window; // Corrected 

        void initialize();
        void initializeVariables();
        void showSplashscreen(); // Corrected function name
        void destroy();

    public:
        GameService();
        virtual ~GameService(); // Corrected syntax

        void ignite(); // Corrected spelling
        void update();
        void render();
        bool isRunning(); // Corrected syntax

        static void setGameState(GameState newState); // Corrected function name and parameter
        static GameState getGameState();
    };

} // namespace Main
