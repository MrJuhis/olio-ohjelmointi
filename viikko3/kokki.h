#ifndef KOKKI_H
#define KOKKI_H
#include <string>
#include <iostream>

class Chef {
protected:
    std::string chefName;

public:
    Chef(std::string name) : chefName(name) {
        std::cout << "Chef " << chefName << " constructor." << std::endl;
    }

    ~Chef() {
        std::cout << "Chef " << chefName << " destructor." << std::endl;
    }

    std::string getName() {
        return chefName;
    }

    int makeSalad(int ingredients) {
        int servings = ingredients / 5;
        std::cout << chefName << " is making a salad. Ingredients: " << ingredients << ", servings: " << servings << std::endl;
        return servings;
    }

    int makeSoup(int ingredients) {
        int servings = ingredients / 3;
        std::cout << chefName << " is making a soup. Ingredients: " << ingredients << ", servings: " << servings << std::endl;
        return servings;
    }
};

class ItalianChef : public Chef {
private:
    std::string password = "pizza";
    int flour;
    int water;

    void makePizza(int flourAmount, int waterAmount) {
        int pizzas = std::min(flourAmount / 5, waterAmount / 5);
        std::cout << "ItalianChef " << chefName << " is making pizza. Flour: " << flourAmount << ", Water: " << waterAmount << ", Pizzas: " << pizzas << std::endl;
    }

public:
    ItalianChef(std::string name) : Chef(name) {
        std::cout << "ItalianChef " << chefName << " constructor." << std::endl;
    }

    ~ItalianChef() {
        std::cout << "ItalianChef " << chefName << " destructor." << std::endl;
    }

    bool askSecret(std::string inputPassword, int flourAmount, int waterAmount) {
        std::cout << "Password attempt for pizza preparation: " << inputPassword << std::endl;
        if (inputPassword == password) {
            std::cout << "Password correct! Preparing pizza..." << std::endl;
            makePizza(flourAmount, waterAmount);
            return true;
        }
        std::cout << "Incorrect password! Access denied." << std::endl;
        return false;
    }
};

#endif // KOKKI_H
