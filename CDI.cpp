#include "CDI.h"

CDI::CDI() {
    cout << "Class make" << endl;
};

bool CDI::searchBooks(string bookName) {
    for(Livre i : BOOKS_) {
        if(i.getTitle() == bookName) return true;
    }
    return false;
}

void CDI::addBook(Livre _newBook) {
    if(!searchBooks(_newBook.getTitle())) {
        BOOKS_.push_back(_newBook);
        cout << "Le livre a ete ajoute" << endl;
    }
    else cout << "Le livre existe deja" << endl;
}

void CDI::deleteBook(string _newBook) {
    if(searchBooks(_newBook)) {
        BOOKS_.erase(std::remove_if(BOOKS_.begin(), BOOKS_.end(), [&_newBook]( Livre& p) { return p.getTitle() == _newBook; }), BOOKS_.end());
        cout << "Le livre a ete supprime" << endl;
    }
    else cout << "Le livre n'existe pas" << endl;
}

void CDI::TakeOrSend(string _newBook) {
    if(searchBooks(_newBook)) {
        for(Livre& i : BOOKS_) {
            if(i.getTitle() == _newBook) {
                i.switchStatus();
                cout << "Le livre a ete " << (i.getStatus() ? "rendu" : "pris") << endl;
            }
        }
    }
    else cout << "Le livre n'existe pas" << endl;
}

void CDI::ShowBooks() {
    cout << "livre | auteur | annee" << endl;
    for(Livre i : BOOKS_) {
        cout << i.getTitle() << "|" << i.getAutor() << "|" << i.getYear() << endl;
    }
}