#include <iostream>
#include <string>

using namespace std;

class Seuraaja {
public:
    Seuraaja(string A){
        cout << "Luodaan seuraaja " << A << endl;
        nimi = A;
    }

    string getNimi()
    {return nimi;}

    Seuraaja* next = nullptr;
    void paivitys(string);
private:
    string nimi;
};

class Notifikaattori {
public:
    Notifikaattori(){
        cout << "Luodaan notifikaattori" << endl;
    }
    void lisaa(Seuraaja *A){
        cout << "Notifikaattori lisaa seuraajan " << A->getNimi() << endl;
        A->next = seuraajat;
        seuraajat = A;
    }
    void poista(Seuraaja *A){
        if (A == nullptr || seuraajat == nullptr) return;

        cout << "Notifikaattori poistaa seuraajan " << A->getNimi() << endl;

        if (seuraajat == A) {
            seuraajat = seuraajat->next;
            delete A;
            return;
        }

        Seuraaja* current = seuraajat;
        while (current->next != nullptr && current->next != A) {
            current = current->next;
        }

        if (current->next == A) {
            current->next = A->next;
            delete A;
        }
    }

    void tulosta(){
        cout << "Notifikaattorin seuraajat: " << endl;

        Seuraaja* current = seuraajat;
        while (current != nullptr) {
            cout << "Seuraaja " << current->getNimi() << endl;
            current = current->next;
        }
    }

    void postita(string A){
        cout << "Notifikaattori postaa viestin: " << A << endl;

        Seuraaja* current = seuraajat;
        while (current != nullptr) {
            cout << "Seuraaja " << current->getNimi() << " sai viestin: " << A << endl;
            current = current->next;
        }
    }
private:
    Seuraaja* seuraajat = nullptr;
};

int main()
{
    Notifikaattori n;

    Seuraaja* a = new Seuraaja("A");
    Seuraaja* b = new Seuraaja("B");
    Seuraaja* c = new Seuraaja("C");

    n.lisaa(a);
    n.lisaa(b);
    n.lisaa(c);

    n.tulosta();

    n.postita("Viesti 1");
    n.poista(b);
    n.postita("Viesti 2");
    return 0;
}
