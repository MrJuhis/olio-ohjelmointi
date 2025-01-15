#include "game.h"

int main() {
    int maxNumber;
    std::cout << "Enter the maximum value for the game: ";
    std::cin >> maxNumber;

    Game game(maxNumber);
    game.play();
    game.printGameResult();

    return 0;
}
