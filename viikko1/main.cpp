#include <iostream>
#include <cstdlib>

int game(int maxnum);

int main() {
    int maxnum;
    std::cout << "Anna suurin mahdollinen etsittava luku: ";
    std::cin >> maxnum;

    int guessCount = game(maxnum);
    std::cout << "Peli paattyi! Arvasit oikein " << guessCount << " arvauksella" << std::endl;

    return 0;
}

int game(int maxnum) {
    std::srand(666);
    int randomNum = std::rand() % maxnum + 1;
    int guessedNum = 0;
    int guessedCount = 0;

    std::cout << "Arvaa arvottu satunnainen luku valilta 1-" << maxnum << std::endl;

    while (true) {
        std::cout << "Syota arvauksesi: ";
        std::cin >> guessedNum;
        guessedCount++;

        if (guessedNum < randomNum) {
            std::cout << "Luku on suurempi" << std::endl;
        } else if (guessedNum > randomNum) {
            std::cout << "Luku on pienempi" << std::endl;
        } else {
            std::cout << "Oikein! Arvasit luvun" << std::endl;
            break;
        }
    }

    return guessedCount;
}
