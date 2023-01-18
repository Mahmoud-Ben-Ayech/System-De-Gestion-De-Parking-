
#include "fonctionnaire.h"

fonctionnaire::fonctionnaire(int a,string b ,float c,int d,bool e):chaffeur(a,b,c,d)
{
    testchauffeur=e;
}fonctionnaire::fonctionnaire(){}
fonctionnaire::~fonctionnaire()
{
}
istream& operator>> (istream& in, fonctionnaire& v)
{
    cout<<"donner les coordonees de fonctionnaire sous la forme identifiant , nom , duree travail , annee d'experience ,test de chauffeur (1/0) "<<endl ;
in>>v.identifiantChauffeur;
in>>v.nomChauffeur;
in>>v.dureeTravail;
in>>v.anneexperience;
in>>v.testchauffeur;
return in;
}
ostream& operator<< (ostream& out, fonctionnaire& v)
{
out<<v.identifiantChauffeur;
out<<v.nomChauffeur;
out<<v.dureeTravail;
out<<v.anneexperience;
out<<v.testchauffeur;
return out;
}
void fonctionnaire::remplirfonc(fstream& ff){
fonctionnaire a;
 int n;
 cout<<"donner nombres de fonctionnaires à entrer"<<endl;
 cin>>n;
 for (int i=0;i<n;i++){
    cin>>a;
    ff<<a<<endl;}
}
void  fonctionnaire:: creerfilefonc (fstream& ff)
{
     ff.open("fonctionnaire.txt",ios::in | ios::out | ios::trunc);
    if (!ff) exit(-1);
}
void fonctionnaire::afficherfonc(fstream& ff)
{
  string line;
 ff.seekg(0);
 while (getline(ff,line))
 {
    cout<<"\n "<<line<<endl;
 }
 }

 void fonctionnaire::supprimerfonc(fstream& ff)
 {
     string deleteline;
      string line;
      ifstream fin;
     ff.open("fonctionnaire.txt");
    ofstream temp;
     temp.open("emp.txt");
cout << "ecrire le id de chauffeur en 2 nombres ";
cin >> deleteline;
while (getline(ff,line))
{
    if (line.substr(0,2) != deleteline)
    {
    temp << line << endl;
    }
}
cout<<"suppression validee avec succes ! "<<endl;
temp.close();
ff.close();
remove("fonctionnaire.txt");
rename("emp.txt","fonctionnaire.txt");
 }

 void fonctionnaire::modifierf(fstream& f)
 {   string line;
     f.open("fonctionnaire.txt");
      ofstream temp;
     temp.open("modif.txt");
     cout<<"donner identifiant fonctionnaire";
     string name;
     cin>>name;
     if(f.fail())
{
     cout<<"File is empty.\n";
}
while ((getline(f,line)))
{
    fonctionnaire c(0,"",0,0,false);
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
remove("fonctionnaire.txt");
rename("modif.txt","fonctionnaire.txt");


 }
 }




