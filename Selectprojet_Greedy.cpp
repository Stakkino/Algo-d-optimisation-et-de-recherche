// (Glouton) Sélection du projet
#include "head.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Projet {
    string nom;
    double couts;
    double gain;
    double duree;
    double benefice;
    double rentabilite;
    double score;
};

void selectglouton() {
    int n;
    cout << "Entrer le nombre du projet : ";
    cin >> n;
    
    vector<Projet> p(n);
    for(int i=0; i<n; i++){
        cout << "\nProjet" << i+1 << endl;
        cout<< "Nom du projet : ";
        cin >> p[i].nom;
        cout<< "Coût du projet : ";
        cin >> p[i].couts;
        cout<< "Gain du projet : ";
        cin >> p[i].gain;
        cout<< "Durée du projet (mois) : ";
        cin >> p[i].duree;
        p[i].benefice = p[i].gain - p[i].couts;
        p[i].rentabilite = p[i].benefice / p[i].couts;
        double gainmensuel = p[i].benefice / p[i].duree;
        p[i].score = p[i].rentabilite + gainmensuel;
    }

    int reponse = 0;
    for(int i=0; i<n; i++){
        if(p[i].score > p[reponse].score){
            reponse = i;
        }
    }

    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<"N^"<<i+1<<"| Projet " <<p[i].nom<<" | Coût : "<<p[i].couts<<" Ar | Gain : "<<p[i].gain<<" Ar | Durée "<<p[i].duree<<" mois"<<endl;
    }

    cout<<" - Le meilleur projet est Projet n^ " <<reponse<< ", nommé <<"<<p[reponse].nom<<">>, avec un bénéfice de "<<p[reponse].benefice<<" Ar."<<endl;
}