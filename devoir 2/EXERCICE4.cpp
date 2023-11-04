#include<iostream>
#include<set>
#include<vector>
#include<list>
using namespace std; 
void afficher(set<int>& s){
   for (auto it =s.begin() ; it!=s.end(); ++it)
   {
      cout<<*it<<endl;
   }
   
}
bool chercher(set<int>& s,int nbr){
    bool tr=false;
    for ( auto it =s.begin(); it!=s.end(); ++it)
    {
        if (nbr==*it)
        { 
           tr=true;
           break;
        }
        
    }
   return tr; 
}
bool chercherplage(set<int>::iterator debut, set<int> ::iterator fin , int n  ){
      for (auto it=debut; it!=fin; it++)
      {
        if (n==*it)
        {
            return true;
        }
        
      }
   return false;   
}
template <class T> 

 bool chercherT(T debut,T fin ,typename T::value_type valeur ){
      for(auto it=debut; it!=fin ;it++){
        if (valeur==*it)
        {
            return true;
        }
        
       }
       return false; 
}
int main(){
    set<int> s;
    int nbr; 
    for (int i = 1; i < 101; i++)
    {
        s.insert(i);
    }
    cout<<"entrer un valeur : ";
    cin>>nbr;
    cout<<"entrer deux valeurs pour la plage ";
    int nbr1,nbr2;
    cin>>nbr1;
    cin>>nbr2;
    /*  set<int>::iterator debut=s.lower_bound(nbr1);
     set<int>:: iterator fin=s.upper_bound(nbr2);*/
    bool T=chercherplage(s.lower_bound(nbr1),s.upper_bound(nbr2),nbr);
    cout<<T<<endl;
    vector<string> vect={"ahmed","khalil","mohamed","ayoub"}; 
    vector<string>::iterator debut=vect.begin();
    vector<string>::iterator fin=vect.begin()+2;
     bool trouveDansVecteur = chercherT( debut, fin, "khalil");

    if (trouveDansVecteur) {
        cout << "La valeur a été trouvée dans le vecteur." << endl;
    } else {
        cout << "La valeur n'a pas été trouvée dans le vecteur." << endl;
    }

    list<int> maListe = {1, 2, 3, 4, 5};
    list<int>::iterator debutListe = maListe.begin();
    list<int>::iterator finListe = maListe.end();
    bool trouveDansListe = chercherT(debutListe, finListe, 3);

    if (trouveDansListe) {
        cout << "La valeur a été trouvée dans la liste." << endl;
    } else {
        cout << "La valeur n'a pas été trouvée dans la liste." << endl;
    }


    return 0;
}







    
