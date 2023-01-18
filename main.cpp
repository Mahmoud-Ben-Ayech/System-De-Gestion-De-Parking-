#include <iostream>
#include"voiture.h"
#include"chaffeur.h"
#include"centrereservation.h"
#include"emplacement.h"
#include<fstream>
#include"centrereservation.h"
#include"fonctionnaire.h"
#include<ctime>
#pragma once
#include<windows.h>
using namespace std;
void setcolor(int ForgC)
{ WORD wColor;
HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;
}
int main()
{   setcolor(55);
    int a,da,p,k;
    date b;
	int choice,ce,x,i=0;
	time_t t;
	time(&t);
	date d;
	voiture v;
	emplacement e(0,0,d);
	chaffeur c(0,"aa",4,5);
    fonctionnaire f(0,"aa",4,5,0);
	fstream fv,fc,fcen,femp,ff,centr;
    string log="mohamed";
    string  mdp="mohamed";
    string ch1,ch2,ch3,ch4,ch5,ch6;
	int xy;
	printf("Veuiller choisir  : \n 1/si vous avez un compte \n 2/creer un compte  \n ");
    cin>>xy;
    switch(xy){
        case 1 :
                while (1){
                   cout<<"\n ***** connexion **** \n  NB : dans notre cas 'mohamed' est a la fois login et mot de passe !! \n  ";
                    cout<<"donner votre login  \n ";
                    cin>>ch5;
                   cout<<"donner votre mot de passe   \n ";
                  cin>>ch6;
                   if ( log==ch5 && mdp==ch6 ) { cout<<" \n Felicitations vous avez connecter  avec succes \n ";
                                                                         break;}
                   else cout<<" \n verifier votre informations saisie !! \n ";
                   }
                  break ;

        case 2 :

                cout<<"donner votre nom \n";
                cin>>ch1;
                cout<<"donner votre prenom \n ";
                cin>>ch2;
                cout<<"saisir votre login  \n ";
                cin>>ch3;
                cout<<"saisir votre mot de passe   \n ";
                cin>>ch4;
            while (1){
                cout<<"\n ***** connexion **** \n ";
                cout<<"donner votre login  \n ";
                cin>>ch5;
               cout<<"donner votre mot de passe   \n ";
                cin>>ch6;
                if ( ch3==ch5 && ch4==ch6 ) { cout<<" \n Felicitations vous avez connecter  avec succes \n ";
                                                                         break;}
                   else cout<<" \n verifier votre informations saisie !! \n ";
                   }
                  break ;
         default : printf("\n choix invalide !!");
    }


    system("cls");   // FOR CLEARING SCREEN


 	cout<<"\t\t           ---------------------                \n";
	cout<<"\t\t                                                \n";
	cout<<"\t\t       -----------------------------            \n";
	cout<<"\t\t|       bienvenue au system  location           |\n";
	cout<<"\t\t|       des  voitures de la ministere           |\n";
	cout<<"\t\t|       -----------------------------           |\n";
	cout<<"\t\t|                                               |\n";
	cout<<"\t\t|                                               |\n";
	cout<<"\t\t|                                               |\n";
	cout<<"\t\t                                                \n";
	cout<<"\t\t                                                \n";
	cout<<"\t\t           ----------------------               \n\n\n";
		for(i=0;i<5;i++)
		cout<<">";
		cout<<"\ndate et temps "<<ctime(&t);
	    for(i=0;i<80;i++)
		cout<<"<";
	cout<<" \n taper pour continuer:";
    system("PAUSE");
    system("cls");
    cout<<"\n veuiller remplir  les informations Necessaire de  Reservation a l etat initial  :  \n \n ";
    centreReservation cen;

  while (1)  // repeter autant de fois que l'utilisateur veut choisir un sevice parmi ceux données
	{
    jump:
		system("cls");
        for(i=0;i<80;i++)
		   cout<<"-";
		cout<<"\n";
		cout<<"   ---------------------->>>>  |MAIN MENU|  <<<<------------------------ \n";
		for(i=0;i<80;i++)
		 cout<<"-";
		cout<<"\n";

		cout<<"\t\t *Selectionner et Entrer Votre Choix : ";
		cout<<"\n\n";
		cout<<"\n========================================";
		cout<<" \n Entrer 1 ->> Gestion des voitures";
		cout<<"\n========================================";
		cout<<" \n Entrer 2 ->> Gestion des emplacements";
		cout<<"\n========================================";
		cout<<" \n Entrer 3 ->> Gestion des chauffeurs";
		cout<<"\n========================================";
		cout<<" \n Entrer 4 ->> Gestion des fonctionnaires";
		cout<<"\n========================================";
		cout<<" \n Entrer 5 ->> Voir un 'feedback' des donnees du centre de reservation";
		cout<<"\n========================================";
		cout<<" \n Entrer 6 ->> Quitter programme";
		cout<<"\n========================================";
		cout<<"\n \n";
		for(i=0;i<80;i++)
		  cout<<">";
        cout<<"\nDate et temps :"<<ctime(&t);
	      for(i=0;i<80;i++)
		   cout<<"<";
        cout<<"ttt\n"<<endl;
		cin>>choice;
		cout<<"tt\n"<<endl;
		switch(choice)           // SWITCH STATEMENT
		{
			case 1:
			    v.creerfile(fv);
			    while(1){
                system("cls");

                 for(i=0;i<80;i++)
                    cout<<"-";
                cout<<"\n";
			    cout<< "GESTION DES VOITURES ----------------\n";
                for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
                cout<<"\t\t Choisir le service desire :";
                cout<<"\n\n";
                cout<<"\n============================================";
                cout<<" \n Entrer 1 ->> Ajouter  voitures";
                cout<<"\n============================================";
                cout<<" \n Entrer 2 ->> Afficher  les voitures";
                cout<<"\n============================================";
                cout<<" \n Entrer 3 ->>  Supprimer une voiture   ";
                cout<<"\n============================================";
                cout<<" \n Entrer 4 ->> Modifier une voiture ";
                cout<<"\n============================================";
                cout<<" \n Entrer 5 ->> Retour a la menu principale  ";
                cout<<"\n============================================";
                cout<<"\n \n";

                cin>>x;
			    switch(x)
			    {
                case 1:
                    v.remplirv(fv);
                    cout<<"\n les donnees sont bien enregistree dans le fichier 'voiture.txt' dans le meme emplacement de projet \n "<<endl;
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                 case 2:
                   v.afficherv(fv);
                   cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 3:
                    v.supprimerv(fv);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 4:
                     v.modifierv(fv);
                     cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;

                case 5 ://cout<<"\n merci d'avoir utiliser notre application !"<<endl;
                         //exit(0);
                         goto jump;
                         break;
                default:

				system("cls");
				cout<<"\n \n Entree Incorrecte";
				cout<<" \n taper pour continuer:";
                    system("PAUSE");
			    }
              }

			case 2:
			    e.creerfile(femp);
			    while(1){
                system("cls");
                 for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
			    cout<<"-------------- GESTION DES EMPLACEMENTS ----------------\n";
                for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
                cout<<"\t\t Choisissez le service que vous voulez :";
                cout<<"\n\n";
                cout<<"\n==================================================";
                cout<<" \n Entrez 1 ->> ajouter une voiture a l'emplacement";
                cout<<"\n==================================================";
                cout<<" \n Enter 2 ->> modifier une voiture a l'emplacement";
                cout<<"\n==================================================";
                cout<<" \n Enter 3 ->> supprimer une voiture de l'emplacement";
                cout<<"\n==================================================";
                cout<<" \n Enter 4 ->> chercher une voiture dans l'emplacement";
                cout<<"\n==================================================";
                cout<<" \n Entrer 5 ->> Retour a la menu principale  ";
                cout<<"\n============================================";
                cout<<"\n \n";

                cin>>x;
			    switch(x)
			    {
                case 1:
                    e.remplire(femp);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 2:
                    e.modifiere(femp);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 3:
                    e.supprimere(femp);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 4:
                     e.recherchere(femp);
                     cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 5 : goto jump;
                        //cout<<"merci d'avoir utiliser notre application !"<<endl;
                         //exit(0);
                         break;
                default:
				  system("cls");
				  cout<<"\n \n choix incorrecte !! ";
				  cout<<"\n taper pour continuer!!";
                    system("PAUSE");
			    }
			    }
			case 3 :
			    c.creerfile(fc);
			    while(1){
                system("cls");
                for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
			    cout<<"-------------GESTION DES CHAUFFEURS----------------\n";
                for(i=0;i<80;i++)
                 cout<<"-";
                cout<<"\n";
                cout<<"\t\t choisissez le service que vous voulez :";
                cout<<"\n\n";
                cout<<"\n========================================================================";
                cout<< "\n Entrer 1 -> Ajouter Chauffeurs";
                cout<<"\n========================================================================";
                cout<<" \n Enter 2 ->> Afficher Chauffeurs";
                cout<<"\n========================================================================";
                cout<<" \n Enter 3 ->> Modifier Chauffeur";
                cout<<"\n========================================================================";
                cout<<" \n Enter 4 ->> Supprimer Chauffeur";
                cout<<"\n========================================================================";
                cout<<" \n Enter 5 ->> affichier la disponibilitee du chauffeur a une date donnee";
                cout<<"\n========================================================================";
                cout<<" \n Entrer 6 ->> Retour a la menu principale ";
                cout<<"\n============================================";
                cout<<"\n \n";
                cin>>x;
			    switch(x)
			    {
                 case 1:
                    c.remplirc(fc);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                 case 2:
                    c.afficherc(fc);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                 case 3:
                    c.modifierc(fc);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                 case 4 :
                   c.supprimerc(fc);
                   cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                 case 5 :
                    cout<<"donner une date"<<endl;
                    cin>>da>>p>>k;
                    b.setjour(da);
                    b.setmois(p);
                    b.setannee(k);
                    if (c.disponible(b))
                        cout<<"disponible"<<endl;
                    else
                        cout<<"n est pas disponible"<<endl;
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                           break;
                 case 6: //cout<<"merci d'avoir utiliser notre application !"<<endl;
                         //exit(0);
                         goto jump;
                         break;
                 default:
				  system("cls");
				  cout<<"\n\n Choix incorrecte !! ";
				  cout<<"\n tapper pour continuer!!";
                    system("PAUSE");
			       }
			    }
            case 4:
                f.creerfilefonc(ff);
                while(1){
                system("cls");
                 for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
			    cout<<"-------------- GESTION DES FONCTIONNAIRES ----------------\n";
                for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
                cout<<"\t\t Choisissez le service que vous voulez :";
                cout<<"\n\n";
                cout<<"\n==================================================";
                cout<<" \n Entrez 1 ->> ajouter fonctionnaires";
                cout<<"\n==================================================";
                cout<<" \n Enter 2 ->>   afficher la liste des fonctionnaires";
                cout<<"\n==================================================";
                cout<<" \n Enter 3 ->> supprimer un fonctionnaire";
                cout<<"\n==================================================";
                cout<<" \n entrez 4 ->> modifier un fonctionnaire ";
                cout<<"\n==================================================";
                cout<<" \n Entrer 5 ->> Retour a la menu principale ";
                cout<<"\n============================================";
                cout<<"\n \n";

                cin>>x;
			    switch(x)
			    {
                case 1:
                   f.remplirfonc(ff);
                   cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 2:
                    f.afficherfonc(ff);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 3:
                    f.supprimerfonc(ff);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 4:
                    f.modifierf(ff);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 5: //cout<<"merci d'avoir utiliser notre application !"<<endl;
                         //exit(0);
                         goto jump;
                         break;
                default:
				  system("cls");
				  cout<<"\n\n choix incorrecte !! ";
				  cout<<"\n taper pour continuer!!";
				  system("PAUSE");
			    }
                    }
            case 5:
                    while (1){
                system("cls");
                 for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
			    cout<<"-------------- GESTION DU CENTRE DU RESERVATION ----------------\n";
                for(i=0;i<80;i++)
                  cout<<"-";
                cout<<"\n";
                cout<<"\t\t Choisissez le service que vous voulez :";
                cout<<"\n\n";
                cout<<"\n==================================================";
                cout<<" \n Entrez 1 ->> afficher nombre de voitures courantes";
                cout<<"\n==================================================";
                cout<<" \n Enter 2 ->> afficher nombre de chauffeurs courantes";
                cout<<"\n==================================================";
                cout<<" \n Enter 3 ->> afficher nombre de  emplacements courantes";
                cout<<"\n==================================================";
                cout<<" \n Enter 4 ->> afficher nombre de  fonctionnaires courantes";
                cout<<"\n==================================================";
                cout<<" \n Entrer 5 ->> Retour a la menu principale ";
                cout<<"\n============================================";
                cout<<"\n \n";

                cin>>x;
			    switch(x)
			    {
                case 1:
                   cout<<"\n"<<cen.nbre_voitures(fv);
                   cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 2:
                    cout<<"\n"<<cen.nbre_chauffeurs(fc);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 3:
                    cout<<"\n"<<cen.nbre_emplacements(femp);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 4:
                    cout<<"\n"<<cen. nbre_fonctionnaires(ff);
                    cout<<" \n taper pour continuer:";
                    system("PAUSE");
                    break;
                case 5: //cout<<"merci d'avoir utiliser notre application !"<<endl;
                         //exit(0);
                         goto jump;
                         break;
                default:
				system("cls");
				cout<<"\n\n choix incorrecte  !!! ";
				cout<<"\n taper pour continuer!!";
				 system("PAUSE");
			    }
                    }


			case 6:
				system("cls");
				cout<<"\n\n\t >>>>> MERCI <<<<<";
				cout<<"\n\t POUR AVOIR UTILISER NOTRE SERVICE";
				exit(0);
				break;
			default:
				system("cls");
				cout<<"\n \n CHOIX INCORRECTE !!";
				cout<<"\n taper pour continuer";
		}
  }


return 0;

}


