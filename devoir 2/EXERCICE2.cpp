#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void afficher(list <int> g){
    list<int> ::iterator it;
     
    for ( it=g.begin(); it !=g.end(); ++it)
    {
        cout<<" "<<*it<<endl; 
    }
    
}
void tri_bull(list<int>& L){
      list<int>::iterator i ; 
       int nbr;
       bool echange;
       do { 
         echange=false;
      for ( i = L.begin(); i!=prev(L.end()); ++i)
      {  
       
         if (*i>*next(i))
         {
            nbr=*i;
            *i=*next(i);
            *next(i)=nbr;
            echange=true;
         }
      }
      } while(echange);
}  
   void tri_selection(list<int>& L){
    int min=*L.begin();
     int nbr;
    for(auto j=L.begin(); j!=L.end();++j){ 
        int min=*j;
    for (auto it =j; it != L.end(); ++it)
    {
        if (*it<min)
        { 
          nbr=min;
          min=*it;
          
          *it=nbr;
        }
    }
    *j=min;
     }
}

void tri_insertion(list<int>& L) {
    for (auto it = next(L.begin()); it != L.end(); ++it) {
        int valeur = *it;
        auto j = it;
        while (j != L.begin() && *prev(j) > valeur) {
            *j = *prev(j);
            --j;
        }
        *j = valeur;
    }
}
int main(){
    int max,i,nbr; 
    cout<<"entrer le nombre des entiers : "<<endl;
    cin>>max;
   list <int> liste;
   for ( i = 0; i < max; i++)
   {    
        cout<<"nbr "<<i+1<<": "; 
        cin>>nbr; 
        liste.push_back(nbr);
   }
   cout<<"la liste avant le tri : "<<endl;
   afficher(liste);
   cout<<"entrer la methode que vous voulez utiliser pour trier :"<<endl;
   cout<<" 1 - bull \n 2 - selection \n 3 - insertion"<<endl;
   int choix; 
   cin>>choix;


   switch (choix)
   {
   case 1:
    tri_bull(liste);
    break;
     case 2:
    tri_selection(liste);
    break;
   
    case 3:
   tri_insertion(liste);
    break;
   
   
   default:
    break;
   }
 
   cout<<"la liste apres le tri: "<<endl;
   afficher(liste);

   return 0;
  

}