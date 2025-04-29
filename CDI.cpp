#include "CDI.h"

CDI::CDI() {
    cout << "Class make" << endl;
};

void CDI::addBook(Livre _newBook) {
    BOOKS_.push_back(_newBook);
    cout << "Livre ajouté" << endl;
}

void CDI::deleteBook() {

}

void CDI::searchBooks() {

}

void CDI::TakeOrSend() {

}

void CDI::ShowBooks() {

}