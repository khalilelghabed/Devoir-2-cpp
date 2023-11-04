#include <iostream>
using namespace std;

class vect {
protected:
    int nelem;
    int* adr;

public:
    vect(int n) : nelem(n), adr(new int[n]) {
        for (int i = 0; i < n; ++i) {
            adr[i] = 0;
        }
    }

    vect(const vect& other) : nelem(other.nelem), adr(new int[other.nelem]) {
        for (int i = 0; i < nelem; ++i) {
            adr[i] = other.adr[i];
        }
    }

    ~vect() {
        delete[] adr;
    }

    int& operator[](int index) {
        if (index < 0 || index >= nelem) {
            cout << "Indice hors limites." << endl;
            exit(1);
        }
        return adr[index];
    }

    int taille() const {
        return nelem;
    }
};

class vectok : public vect {
public:
    vectok(int n) : vect(n) {}

    int& operator[](int index) {
        if (index < 0 || index >= nelem) {
            cout << "Indice hors limites." << endl;
            exit(1);
        }
        return adr[index];
    }
};

int main() {
    vectok v1(5);
    v1[0] = 10;
    v1[1] = 20;
    v1[2] = 30;

    vectok v2 = v1; // Utilisation de la copie par valeur

    cout << "Taille de v1 : " << v1.taille() << endl;
    cout << "Taille de v2 : " << v2.taille() << endl;
    cout << "Contenu de v2[0] : " << v2[0] << endl;
    
    return 0;
}
