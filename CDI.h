#ifndef CDI_H
#define CDI_H

#include "main.h"
using namespace std;

class CDI {
    public:
        void addBook(Livre _newBook);
        void deleteBook(string _newBook);
        bool searchBooks(string bookName);
        void TakeOrSend(string _newBook);
        void ShowBooks();
        CDI();
    
    private:
        unsigned long long int nbrBooks_ = 0;
        vector<Livre> BOOKS_;
    };


#endif //CDI_H