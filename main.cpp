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
    
    return 0;
}