//(Prog Dynamique) Sélection du projet
#include "head.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Projet {
    string nom;
    int couts;
    double gain;
    int duree;
    double benefice;
}

double benefice_max = 0.0;
vector<string> listselct;
double budget_utile = 0.0;
double temps_utils = 0.0;

void mitady(int id, const vector<Projet>& listprojet, double budget_max, double temps_max, double budget, double temps, double beneficeactu, vector<string>& projetactu) {
    if(budget > budget_max || temps > temps_max) {
        return;
    }
    if(id==listprojet.size()){
        if(benefice > benefice_max) {
            benefice_max = beneficeactu;
            listselct = projetactu;
            budget_utile = budget;
            temps_utils = temps;
        }
        return;
    }
    voircombi(id+1, listprojet, budget_max, temps_max, budget, temps, beneficeactu, projetactu);
    projetactu.push_back(id+1, listprojet, budget_max, temps_max, budget+listprojet[i].couts, temps+listprojet[i].duree, benefice+listprojet[i].beneficeactu, projetactu);
    projetactu.pop_back();
}

void selectprodyna() {
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
    }

    double budget_max, temps_max;
    cout<<"Entrer le budget total maximum disponible : ";
    cin >> budget_max;
    cout<<"Entrer la durée total maximum disponible (mois) : ";
    cin >> temps_max;

    vector<string> dp;
    benefice_max = 0.0;
    mitady(0, p, budget_max, temps_max, 0.0, 0.0, 0.0, dp);

    cout<<"~~~~~~~~~~~RESULTAT~~~~~~~~~~~~~~~"<<endl;
    cout<<"Benefice maximal possible : "<<benefice_max<<" Ar"<<endl;
    cout<<"Budget utilise : "<<budget_utile<<"/"<<budget_max<<" Ar"<<endl;
    cout<<"Temps utilise : "<<temps_utils<<"/"<<temps_max<<" mois"<<endl;

    cout<<"~~~Liste des projet a réaliser : "<<endl;
    if(listselct.empty()) {
        cout << "Aucun projet ne respect les contraintes."<<endl;
    } else {
        for(int i=0; i<listselct; i++) {
            cout<<" - "<<listselct[i]<<endl;
        }
    }
    cout<<"___________________________________________________________________"<<endl;

    return;
}