#include "livre.h"

Livre::Livre(string title, string autor, string year, bool isAvalible) : title_(title), autor_(autor),  year_(year), isAvalible_(isAvalible) {
    cout << "Class make" << endl;
};

string Livre::getAutor() {
    return autor_;
}
string Livre::getTitle() {
    return title_;
}
string Livre::getYear() {
    return year_;
}

string Livre::getPrintStatus() {
    return (isAvalible_ ? "Avalible" : " not avalible" );
}
