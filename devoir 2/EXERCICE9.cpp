/* 
a-  Dans les instructions données,  l'objet est creé  avec le type de données char et essayez
 d'initialiser ses coordonnées avec les valeurs 60 et 65. Cela provoque un problème car char est destiné 
 à stocker des caractères,
b- 
template <class T>
class point {
    T x, y; // coordonnees
public:
    point(T abs, T ord) { x = abs; y = ord; }
    void affiche() {
        cout << "Coordonnees : " << static_cast<int>(x) << " " << static_cast<int>(y) << "\n";
    }
};

*/