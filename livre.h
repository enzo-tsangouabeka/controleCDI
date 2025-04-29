#ifndef LIVRE_H
#define LIVRE_H

#include "main.h"
#include <string>
using namespace std;

class Livre {
    public:
        string getAutor();
        string getTitle();
        string getYear();
        string getPrintStatus();
        Livre(string title, string autor, string year, bool isAvalible);
    
    private:
        string autor_ = "N/A";
        string title_ = "N/A";
        string year_ = "N/A";
        bool isAvalible_ = true;
        
    };


#endif //LIVRE_H