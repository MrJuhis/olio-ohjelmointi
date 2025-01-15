#include "game.h"

Game::Game(int maxNumber) : maxNumber(maxNumber), playerGuess(0), randomNumber(0), numOfGuesses(0) {
    std::srand(std::time(0));
    randomNumber = std::rand() % maxNumber + 1;
    std::cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << std::endl;
}

Game::~Game() {
    std::cout << "GAME DESTRUCTOR: object cleared from stack memory" << std::endl;
}

void Game::play() {
    do {
        std::cout << "Give your guess between 1-" << maxNumber << ": ";
        std::cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber) {
            std::cout << "Your guess is too small" << std::endl;
        } else if (playerGuess > randomNumber) {
            std::cout << "Your guess is too big" << std::endl;
        }
    } while (playerGuess != randomNumber);
}

void Game::printGameResult() {
    std::cout << "Your guess is right = " << randomNumber << std::endl;
    std::cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << std::endl;
}
