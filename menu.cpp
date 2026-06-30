#include "head.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    int choix;

    do {
        cout << "=========================================" << endl;
        cout << "      CHOISIR UN TYPE D\'ALGORITHME      " << endl;
        cout << " 1. Sélection du projet (Méthode Glouton)" << endl;
        cout << " 2. Sélection du projet (Prog Dynamique)"  << endl;
        cout << " 3. Planification d'étude (Prog Dynamique)"<< endl;
        cout << " 4. Backtracking"               << endl;
        cout << " 5. Branch and Bound"           << endl;
        cout << " 0. Sortir"                     << endl;
        cout << "\nVotre choix : ";
        cin >> choix;
        cout << endl;

        switch(choix) {
        case 0:
            cout << " Au revoir, A plus!\n"<<endl;
            return 0;
        case 1:
            cout << " - ALGO Glouton en cours...\n"<<endl;
            algoglouton();
            break;
        case 2:
            cout << " - Programmation Dynamique en cours...\n"<<endl;
            prodynamique();
            break;
        case 3:
            cout << " - Backtracking en cours...\n"<<endl;
            backtracking();
            break;
        case 4:
            cout << " - Branch and Bound en cours...\n"<<endl;
            branchbound();
            break;
        default:
            cout << "Erreur du choix!"<<endl;
        }
    } while(choix!=4);

    return 0;
}
