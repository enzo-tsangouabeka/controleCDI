#include "main.h"

using namespace std;

int main()
{
    // Test
    Livre l1("livre" , "autor", "year", true);
    cout << "Auteur : " << l1.getAutor() << endl;
    cout << "Titre : " << l1.getTitle() << endl;
    cout << "Annee : " << l1.getYear() << endl;
    cout << "Status : " << l1.getPrintStatus() << endl;

    // Code
    int answer(0);
    bool isntGoodNumber(true);
    system("cls");

    cout << "Choisissez un niveau de jeu :" << endl;
    cout << " - f.0 = Ajouter" << endl;
    cout << " - f.1 = Supprimer" << endl;
    cout << " - f.2 = Rechercher" << endl;
    cout << " - f.3 = Emprunter" << endl;
    cout << " - f.4 = Afficher tous les livres" << endl;

    while (isntGoodNumber) {
        cout << "Votre reponse >";
        cheakTypeEntire(answer);
        isntGoodNumber = !(answer == 0 || answer == 1 || answer == 2 || answer == 3 || answer == 4);
    }
    system("cls");
    lunchMethode(answer);
    return 0;
}

void lunchMethode(int _methodeMode) {
    
}

int cheakTypeEntire(int& _entire) {
    while (!(cin >> _entire)) {
        cin.clear();  // Efface le message d'erreur de cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore la dernière mauvaise entrées
        cout << "Erreur : Veuillez entrer un nombre entier :";
    }
    return _entire;  // Retourner l'entier validé
}