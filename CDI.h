#ifndef CDI_H
#define CDI_H

#include "main.h"
using namespace std;

class CDI {
    public:
        void addBook(Livre _newBook);
        void deleteBook();
        void searchBooks();
        void TakeOrSend();
        void ShowBooks();
        CDI();
    
    private:
        unsigned long long int nbrBooks_ = 0;
        vector<Livre> BOOKS_;
    };


#endif //CDI_H