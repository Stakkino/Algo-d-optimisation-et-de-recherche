#include "head.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    int choix;

    do {
        cout << "\n============================" << endl;
        cout << "   CHOISIR UN TYPE D\'ALGO"     << endl;
        cout << " 1. Glouton"                    << endl;
        cout << " 2. Programmation Dynamique"    << endl;
        cout << " 3. Backtracking"               << endl;
        cout << " 4. Branch and Bound"           << endl;
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
