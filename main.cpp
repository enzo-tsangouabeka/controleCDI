#include "main.h"

using namespace std;

CDI collection;

int main() {
    const vector<string> options = {"Ajouter", "Supprimer", "Rechercher", "Emprunter", "Afficher tous les livres", "Quitter"};
    int answer(0);
    bool isntGoodNumber(true);

    // Création de plein de livre (chatGPT)
    collection.addBook(Livre("Le Petit Prince", "Antoine de Saint-Exupéry", "1943", true));
    collection.addBook(Livre("L'Étranger", "Albert Camus", "1942", true));
    collection.addBook(Livre("Fahrenheit 451", "Ray Bradbury", "1953", true));

    while (answer != 5)
    {
        system("cls");
        do {
            answer = chooseMenu(options);
            if (answer != 5) lunchMethode(answer);
        } while (answer != 5);
    }
    return 0;
}

void lunchMethode(int _methodeMode) {
    string title, autor, year;

    if(_methodeMode == 0) {
        cout << "Quel est le nom de votre livre ?" << endl;
        cin >> title;
        cout << "Quel est l'auteur de votre livre ?" << endl;
        cin >> autor;
        cout << "Quel est l'annee de creation de votre livre ?" << endl;
        cin >> year;
        Livre newBook(title , autor, year, true);
        collection.addBook(newBook);
        system("Pause");
    }
    else if(_methodeMode == 1) {
        cout << "Quel est le nom du livre ?" << endl;
        cin >> title;
        collection.deleteBook(title);
        system("Pause");
    }    
    else if(_methodeMode == 2) {
        string bookTitle;
        cout << "Quel est le titre de votre livre ?" << endl;
        cin >> bookTitle;
        if(collection.searchBooks(bookTitle)) cout << "Le livre existe" << endl;
        else cout << "Le livre n'existe pas" << endl;
        system("pause");
    }    
    else if(_methodeMode == 3) {
        string bookTitle;
        cout << "Quel est le titre de votre livre ?" << endl;
        cin >> bookTitle;
        collection.TakeOrSend(bookTitle);
        system("pause");
    }    
    else if(_methodeMode == 4) {
        collection.ShowBooks();
        system("Pause");
    }
}

int cheakTypeEntire(int& _entire) {
    while (!(cin >> _entire)) {
        cin.clear();  // Efface le message d'erreur de cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore la dernière mauvaise entrées
        cout << "Erreur : Veuillez entrer un nombre entier :";
    }
    return _entire;  // Retourner l'entier validé
}

int chooseMenu(vector<string> options) {
    int lenOfOptions(options.size()), cursorPosition(0);
    while (true) {
        system("cls"); // Supprimer les lignes + couleur 7 (gris clair)
        printQuestion(options, cursorPosition);
        char ch = _getch();
        if (ch == 27) { // ESC key
            cout << "Exiting...\n";
            break;
        } 
        else if (ch == -32) { // Arrow keys return -32 first
            switch (_getch()) {
                case 72: ((cursorPosition > 0) ? (cursorPosition--) : (cursorPosition)); break; // UP keys
                case 80: ((cursorPosition < (lenOfOptions-1)) ? (cursorPosition++) : (cursorPosition)); break; // DOWN keys
                case 77: cout << "Valide\n"; break; // Left arrow : 75
            }
        } 
        else if (ch == 13) {
            system("cls");
            return cursorPosition;
        }
        // else {cout << "You pressed: " << ch << "\n";}
    }
    system("cls");
    return -1;
}

void printQuestion(vector<string> options, int cursorPosition) {
    int nbr(0);
    cout << "Faite un choix d'action :" << endl; 
    for (string porp : options)
    {
        ((cursorPosition == nbr) ? setColor(5) : setColor(7));
        cout << " - " << porp << endl;
        nbr++;
        setColor(7);
    }
}

void setColor(int _color) {
    /*
    0	Noir
    1	Bleu
    2	Vert
    3	Cyan
    4	Rouge
    5	Magenta
    6	Jaune
    7	Gris clair (couleur par défaut)
    8	Gris foncé
    9	Bleu clair
    10	Vert clair
    11	Cyan clair
    12	Rouge clair
    13	Magenta clair
    14	Jaune clair
    15	Blanc
    */
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, _color);
}