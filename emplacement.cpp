#include "emplacement.h"
#include"date.h"
emplacement::emplacement(int a,int b, date d)
{ numEmplacement=a;
bloc=b;
dateEmplacement.setjour(d.getjour());
dateEmplacement.setmois(d.getmois());
dateEmplacement.setannee(d.getannee());
}
emplacement::~emplacement()
{
}
void emplacement::creerfile(fstream& f){
    f.open("emplacement.txt",ios::in | ios::out | ios::trunc);
    if (!f) exit(-1);
}
void emplacement::remplire(fstream& f){
 voiture a;
 int n;
 cout<<"\n donner nombres de voitures � entrer : \n "<<endl;
 cin>>n;
 for (int i=0;i<n;i++){
    cin>>a;
    f<<a<<endl;
 }
}
void emplacement::affichere(fstream& f){
 voiture a;
 f.seekg(0);
 while (1)
 {
     f>>a;
     if(f.eof()) break;
     cout<<a<<endl;
 }
 }
 void emplacement::supprimere(fstream& f)
 {
     string deleteline;
      string line;
      ifstream fin;
f.open("emplacement.txt");
ofstream temp;
temp.open("emp.txt");
cout << "\n donner  la matricule de la voiture en 2 nombres : \n ";
cin >> deleteline;
while (getline(f,line))
{
    if (line.substr(0,2) != deleteline)
    {
    temp << line << endl;
    }
}
cout<<"suppression validee avec succes !";
temp.close();
f.close();
remove("emplacement.txt");
rename("emp.txt","emplacement.txt");
 }
 void emplacement::recherchere(fstream& f)
 {  bool z;
    voiture v;
    cin>>v;
    string deleteline;
    string line;
    f.open("emplacement.txt");
cout << "\n donner  la matricule de la voiture en 2 nombres : \n ";
cin >> deleteline;
while (getline(f,line))
{
    if ((line.substr(0,2) != deleteline) ||(!f.eof()))
    {
      z==0;
    }
    else{
       z==1;}
}

if (z==0) cout<<"voiture n exsiste pas dans l emplacement"<<endl;
else cout<<"voiture exsiste"<<endl;
 }
 void emplacement::modifiere(fstream& f){
 {   string line;
     f.open("emplacement.txt");
      ofstream temp;
     temp.open("modif.txt");
     cout<<"\n donner le numero d'emplacement : \n";
     string name;
     cin>>name;
     if(f.fail())
{
     cout<<"File is empty.\n";
}
while ((getline(f,line)))
{   date d;
    voiture c("","",0,0);
    if (line.substr(0,2) != name)
    {
    temp << line << endl;
    }
    else
        cout<<"\n donner nouveaux valeurs : \n ";
        cin>>c;
        temp<<c;
}
temp.close();
f.close();
remove("emplacement.txt");
rename("emp.txt","emplacement.txt");


 }
 }





