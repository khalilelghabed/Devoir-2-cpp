#include<iostream>
#include<iomanip>
using namespace std ; 
class complex {
    private:
     float reel ; 
     float imaginaire; 
     public: 
     complex(float a, float b ): reel(a),imaginaire(b){}
     complex operator+(complex &A){
        float neewreel=reel+A.reel;
        float neewimg=imaginaire+A.imaginaire;
        return complex(neewreel,neewimg);
     }
     complex operator-(complex &A){
      float neewreel=reel - A.reel;
      float neewimg=imaginaire - A.imaginaire;
      return complex(neewreel,neewimg);
     }
     complex operator*(complex &A){
             float neewreel=reel*A.reel -  imaginaire * A.imaginaire;
             float neewimg=reel*A.imaginaire+imaginaire*A.reel;
             return complex(neewreel,neewimg);
     }
     complex operator/(complex &A){
      return complex((reel * A.reel + imaginaire * A.imaginaire) / (A.reel*A.reel + A.imaginaire*A.imaginaire) ,(imaginaire * A.reel - reel * A.imaginaire)/ (A.reel*A.reel + A.imaginaire*A.imaginaire));
     }
     void afficher(){
        cout<<"la resultat d'operation est : "<<reel<<"+"<<imaginaire<<"i"<<endl;
     }
} ;

int main(){
   float reel1 , img1, reel2,img2 ; 
   int choix;
   cout<<"pliz entrer les valeurs de nombre 1"<<endl<<"partie reel: ";
   cin>>reel1;
   cout<<"partie imaginaire: ";
   cin>>img1;
      cout<<"pliz entrer les valeurs de nombre 2"<<endl<<"partie reel: ";
   cin>>reel2;
   cout<<"partie imaginaire: ";
   cin>>img2;
   
    complex A(reel1,img1);
    complex B(reel2,img2);
    cout<<"liste des operators: "<<endl;
    cout<<"1-addition "<<endl<<"2-soustraction"<<endl<<"3-multipication"<<endl<<"4-division"<<endl;
    cout<<"entrer le numero de l'operation que vous voulez:";
    cin>>choix; 
    while (choix<1 || choix>4)
    {
        cout<<"pliz entrer un nombre valide! ";
        cin>>choix;
    }
    switch (choix)
    {
    case 1:
      (A+B).afficher();
      break;
   case 2: 
     (A-B).afficher();
   break;
   case 3: 
   (A*B).afficher();
   break;
   case 4:
   (A/B).afficher();
   break;
    default:
      break;
    }
   
  return 0;  
}