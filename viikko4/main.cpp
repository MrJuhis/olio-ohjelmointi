#include <iostream>
#include <string>

class Pankkitili {
protected:
    std::string omistaja;
    double saldo;

public:
    Pankkitili(std::string nimi) : omistaja(nimi), saldo(0) {}
    virtual ~Pankkitili() {}

    double getBalance() const {
        return saldo;
    }

    virtual bool deposit(double amount) {
        if (amount <= 0) return false;
        saldo += amount;
        return true;
    }

    virtual bool withdraw(double amount) {
        if (amount <= 0 || amount > saldo) return false;
        saldo -= amount;
        return true;
    }
};

class Luottotili : public Pankkitili {
protected:
    double luottoRaja;

public:
    Luottotili(std::string nimi, double raja) : Pankkitili(nimi), luottoRaja(raja) {}

    bool deposit(double amount) override {
        if (amount <= 0 || saldo + amount > 0) return false;
        saldo += amount;
        return true;
    }

    bool withdraw(double amount) override {
        if (amount <= 0 || saldo - amount < -luottoRaja) return false;
        saldo -= amount;
        return true;
    }
};

class Asiakas {
private:
    std::string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;

public:
    Asiakas(std::string nimi, double luottoRaja) : nimi(nimi), kayttotili(nimi), luottotili(nimi, luottoRaja) {}

    std::string getNimi() const {
        return nimi;
    }

    void showSaldo() const {
        std::cout << "Asiakas: " << nimi << "\n";
        std::cout << "Pankkitilin saldo: " << kayttotili.getBalance() << "\n";
        std::cout << "Luottotilin saldo: " << luottotili.getBalance() << "\n";
    }

    bool talletus(double amount) {
        return kayttotili.deposit(amount);
    }

    bool nosto(double amount) {
        return kayttotili.withdraw(amount);
    }

    bool luotonMaksu(double amount) {
        return luottotili.deposit(amount);
    }

    bool luotonNosto(double amount) {
        return luottotili.withdraw(amount);
    }

    bool tiliSiirto(double amount, Asiakas &vastaanottaja) {
        if (amount <= 0 || !kayttotili.withdraw(amount)) return false;
        return vastaanottaja.talletus(amount);
    }
};

int main() {
    Asiakas asiakas1("Matti Meikalainen", 200);
    Asiakas asiakas2("Pekka Pankki", 300);

    asiakas1.talletus(500);
    asiakas1.nosto(100);
    asiakas1.showSaldo();

    asiakas2.luotonNosto(150);
    asiakas2.showSaldo();

    asiakas1.tiliSiirto(200, asiakas2);
    asiakas1.showSaldo();
    asiakas2.showSaldo();

    return 0;
}
