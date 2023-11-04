#include <iostream>
using namespace std;
template <typename T>
T carre(const T& valeur) {
    return valeur * valeur;
}

int main() {
    int entier = 5;
    float reel = 2.5;
    
    cout << "Carré de " << entier << " : " << carre(entier) << endl;
    cout << "Carré de " << reel << " : " << carre(reel) << endl;
    
    return 0;
}
