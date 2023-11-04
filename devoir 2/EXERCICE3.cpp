#include<iostream>
#include<list>
#include<iterator>
#include <algorithm>
using namespace std;
class Personne {
    private:
    string nom; 
    string prenom ;
    int age ; 
    public: 
    Personne(string nm, string pr , int a):nom(nm),prenom(pr),age(a){}
    string getNom()const {
        return nom;
    }
    string getPrenom() const {
        return prenom;
    }
    int getAge(){
        return age ;
    }
 };
void afficher(list<Personne> L){
     list<Personne>:: iterator it;
     for ( it =L.begin(); it!=L.end(); ++it)
     {
        cout<<it->getNom()<<"   "<<it->getPrenom()<<"   "<<it->getAge()<<endl;
     }
     
}
bool comparePersonnes(const Personne& personne1, const Personne& personne2) {
    if (personne1.getNom() == personne2.getNom()) {
        return personne1.getPrenom() < personne2.getPrenom();
    }
    return personne1.getNom()< personne2.getNom();
}
int main(){
    list<Personne>  L ; 
    int max ,age;
    string name, prenom ;
    cout<<"entrer le nombre des personnes :"; 
    cin>>max; 
    for (int  i = 0; i < max; i++)
    {
        cout<<"entrer les informations de personne numero "<<i+1<<" : "<<endl;
        cout<<"nom : ";
        cin>>name;
        cout<<"prenom : ";
        cin>>prenom;
        cout<<"age : ";
        cin>>age; 
        Personne prs(name,prenom,age);
        L.push_back(prs);
        
       
    }
     cout<<"la liste que vous avez entrer : \n";
    afficher(L);
   L.sort(comparePersonnes);
   cout<<" \n la liste en ordre alphabitique : \n ";
   afficher(L);
   return 0;
}