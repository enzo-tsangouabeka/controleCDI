#ifndef LIVRE_H
#define LIVRE_H

#include "main.h"
#include <string>
using namespace std;

class Livre {
    public:
        Livre(string title, string autor, string year, bool isAvalible);
        string getAutor()const;
        string getTitle()const;
        string getYear()const;
        bool getStatus()const;
        void switchStatus();
        
    
    private:
        string autor_;
        string title_;
        string year_;
        bool isAvalible_;
    };


#endif //LIVRE_H