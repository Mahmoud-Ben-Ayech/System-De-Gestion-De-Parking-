#include "centrereservation.h"

centreReservation::centreReservation()
{
    cout<<"\n donner le nom de centre de reservation :  "<<endl;
    cin>>nomReservation;
    cout<<"\n donner le nombre de voitures :   "<<endl;
    cin>>nbrevoiture;
    cout<<"\n donner le nombre de chauffeurs :    "<<endl;
    cin>>nbrechauffeur;
    cout<<"\n donner le nombre d'emplacements :    "<<endl;
    cin>>nbreemplacement;
    cout<<"\n donner le nombre de fonctionnaires :  "<<endl;
    cin>>nbrefonctionnaire;
}

centreReservation::~centreReservation()
{
}
ostream& operator<<(ostream& out,centreReservation& a)
{
    out<<a.getnomReservation();
    out<<"\n";
    return out;

}
istream& operator>>(istream& in,centreReservation& a)
{   fstream file;
    file.open("centreReservation.txt",ios::out);
    file << a.getnomReservation()<<setw(10);
    return(in);
}

int centreReservation::nbre_voitures(fstream& f)
{
    int i=0;
    string readline;
    while(getline(f,readline))
    {
        i++;
        if(f.eof()) break;
    }
    return(nbrevoiture-i);

}

int centreReservation::nbre_chauffeurs(fstream&f)
{
    int i=0;
    string readline;
    while(getline(f,readline))
    {
        i++;
        if(f.eof()) break;
    }
    return(nbrechauffeur-i);

}

int centreReservation::nbre_emplacements(fstream& f)
{
    int i=0;
    string readline;
    while(getline(f,readline))
    {
        i++;
        if(f.eof()) break;
    }
    return(nbreemplacement-i);

}

int centreReservation::nbre_fonctionnaires(fstream& f)
{
    int i=0;
    string readline;
    while(getline(f,readline))
    {
        i++;
        if(f.eof()) break;
    }
    return(nbrefonctionnaire-i);

}
