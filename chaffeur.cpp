#include "chaffeur.h"
#include<iomanip>
#include"date.h"
#pragma once
chaffeur::chaffeur(int a,string ch,float b,int c)
{
   identifiantChauffeur=a;
  nomChauffeur=ch;
    dureeTravail=b;
    anneexperience=c;
}
chaffeur::chaffeur(){};
chaffeur::~chaffeur()
{
}
bool chaffeur::disponible(date d)
{
    float k;
    cout<<"donner la duree demandee"<<endl;
    cin>>k;
    if(k<=dureeTravail) return(1);
    else return(0);

}
istream& operator>> (istream& in, chaffeur& v)
{
     cout<<"donner les coordonnee de chaufeur sous la forme  identifiant , nom , duree de travail , annee d'experience : \n ";
     in>>v.identifiantChauffeur;
     in>>v.nomChauffeur;
     in>>v.dureeTravail;
     in>>v.anneexperience;
return in;
}
ostream& operator<< (ostream& out, chaffeur& v)
{
out<<v.identifiantChauffeur;
out<<v.nomChauffeur;
out<<v.dureeTravail;
out<<v.anneexperience;
return out;
}
void chaffeur::creerfile(fstream& f){
    f.open("chauffeur.txt",ios::in | ios::out | ios::trunc);
    if (!f) exit(-1);
}
void chaffeur::remplirc(fstream& f){
 chaffeur a;
 int n;
 cout<<"\n donner nombres de chauffeurs à entrer : \t "<<endl;
 cin>>n;
 for (int i=0;i<n;i++){

    cin>>a;
    f<<a<<endl;
 }
}
void chaffeur::afficherc(fstream& f){
 string line;
 f.seekg(0);
 while (getline(f,line))
{
    cout<<"\n "<<line<<"\t"<<endl;
}
 }
 void chaffeur::supprimerc(fstream& f)
 {
     string deleteline;
      string line;
      ifstream fin;
f.open("chauffeur.txt");
ofstream temp;
temp.open("emp.txt");
cout << "ecrire le id de chauffeur en 2 nombres ";
cin >> deleteline;
while (getline(f,line))
{
    if (line.substr(0,2) != deleteline)
    {
    temp << line << endl;
    }
}
cout<<" suppression validee avec succes !  "<<endl;
temp.close();
f.close();
remove("chauffeur.txt");
rename("emp.txt","chauffeur.txt");
 }



 ostream& chaffeur::travailler(ostream& sortie,date b){
   sortie<<"\n Date du travail "<<endl;
   sortie<<setw(7)<<b.getjour()<<setw(7)<<b.getmois()<<setw(7)<<b.getannee()<<endl;
   return(sortie);
 }
 void chaffeur::modifierc(fstream& f)
 {   string line;
     f.open("chauffeur.txt");
      ofstream temp;
     temp.open("modif.txt");
     cout<<"donner identifiant chauffeur";
     string name;
     cin>>name;
     if(f.fail())
{
     cout<<"File is empty..\n";
}
while ((getline(f,line)))
{
    chaffeur c(0,"",0,0);
    if (line.substr(0,2) != name)
    {
    temp << line << endl;
    }
    else
        cout<<"donner nouveaux valeurs";
        cin>>c;
        temp<<c;

{
       f>> name;
}
temp.close();
f.close();
remove("chauffeur.txt");
rename("modif.txt","chauffeur.txt");


 }
 }

