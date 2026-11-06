#include <iostream>
#include <string>
#include <vector>
using namespace std;

class eleve
{
 
private:
int mat; 
string nomPrenom; 
vector<double> nNote ;


public:

eleve (int m, string n, vector<double> l) // creation du constructeur 
{ 
  mat = m ;
  nomPrenom = n;
  nNote = l;
}

~eleve (){

}


void replissage () //methode de re;plissqge des note
{ 
  int nbNotes;
 std:: cout << "veillez entrez votre matricule : " << endl;
 std:: cin >>mat;
 cin.ignore(); // pour ignorer le caractere de nouvelle ligne apres la saisie du matricule
 cout<<"veillez entrez votre nom et prenom : " << endl;
 getline(cin, nomPrenom); //utilisation de getline pour permettre la saisie du nom et prenom avec espace
 
 std:: cout << "veillez entrez combien de notes vous voulez saisir : " << endl; //demande de nombre de note comme cest tab
 
 std:: cin >> nbNotes;
 for (int i = 0; i < nbNotes; i++)
 {
    double n;
    std:: cout << "veillez entrez votre note :" << i + 1 << endl;
    std:: cin >> n;
   nNote.push_back(n);
 }
}

void afficher () //affichage
{
  std:: cout <<"|votre matricule est :" <<mat << endl;
  std:: cout <<"|votre nom est : "<<nomPrenom << endl;
  std:: cout <<"|votre no;bre de notes est  :" <<nNote.size() <<endl;
  for (int i = 0; i < nNote.size(); i++)
  {
    std:: cout <<"|vos note sont    : " << i <<nNote[i] << endl;
  }
}
 /*int getmat  () const
 {
   return mat;
 }*/
};

  int main()
  {
    cout <<"===========================| bienvenu dans mon programme de gestion des eleves |===========================:" << endl;
     vector<eleve> liste ;
     int choix ;
    eleve el(0,"",{}); //creation d'un objet de type eleve
    do {
        std:: cout <<"Taper -->" << endl;
        std:: cout <<"1 pour ajouter un eleve :"<< endl;
        std:: cout <<"2 pour afficher la liste des eleves :"<< endl;
        std:: cout <<"0 pour quitter le programme :"<< endl;
        std:: cin >> choix;

       switch (choix )

      {
      case 1:
          {
             cout <<"===========================| Nous allons proceder a l\'ajout d\'un eleve |===========================:" << endl;
              el.replissage(); //appel de la methode 
              liste.push_back(el); //ajout de l'objet el dans la liste
            
              break;
          }
      case 2:
          {
            cout <<"===========================| Nous allons proceder a l\'affichage de tous les eleves |===========================:" << endl;
             
             for (size_t i = 0; i < liste.size(); i++)
             {
                 liste[i].afficher();
             }
          break;
          }
       case 0:
        cout <<"===========================| A bientot |===========================:" << endl;
        break;

        default:
      std:: cout <<"Choix invalide. Veuillez réessayer." << endl;


       
       }
       }while (choix != 0);
       return 0;
  }
  















