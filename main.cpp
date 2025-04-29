#include "main.h"

using namespace std;

CDI collection;

int main()
{
    // Test
    Livre l1("livre" , "autor", "year", true);
    cout << "Auteur : " << l1.getAutor() << endl;
    cout << "Titre : " << l1.getTitle() << endl;
    cout << "Annee : " << l1.getYear() << endl;
    cout << "Status : " << l1.getPrintStatus() << endl;

    // Code
    while (true)
    {
        int answer(0);
        bool isntGoodNumber(true);
        system("cls");
    
        cout << "Choisissez un niveau de jeu :" << endl;
        cout << " - f.0 = Ajouter" << endl;
        cout << " - f.1 = Supprimer" << endl;
        cout << " - f.2 = Rechercher" << endl;
        cout << " - f.3 = Emprunter" << endl;
        cout << " - f.4 = Afficher tous les livres" << endl;
        // Stop ?
    
        while (isntGoodNumber) {
            cout << "Votre reponse >";
            cheakTypeEntire(answer);
            isntGoodNumber = !(answer == 0 || answer == 1 || answer == 2 || answer == 3 || answer == 4);
        }
        system("cls");
        lunchMethode(answer);
    }
    return 0;
}

void lunchMethode(int _methodeMode) {
    string title, autor, year;

    if(_methodeMode == 1) {
        cout << "Quel est le nom de votre livre";
        cin >> title;
        cout << "Quel est l'auteur de votre livre";
        cin >> autor;
        cout << "Quel est l'annee de création de votre livre livre";
        cin >> year;
        Livre newBook(title , autor, year, true);
    }
    
    collection.deleteBook();
    collection.searchBooks();
    collection.TakeOrSend();
    collection.ShowBooks();
}


int cheakTypeEntire(int& _entire) {
    while (!(cin >> _entire)) {
        cin.clear();  // Efface le message d'erreur de cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore la dernière mauvaise entrées
        cout << "Erreur : Veuillez entrer un nombre entier :";
    }
    return _entire;  // Retourner l'entier validé
}