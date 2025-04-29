#include "livre.h"

Livre::Livre(string title, string autor, string year, bool isAvalible) : title_(title), autor_(autor),  year_(year), isAvalible_(isAvalible) {}

string Livre::getAutor() const{
    return autor_;
}
string Livre::getTitle() const{
    return title_;
}
string Livre::getYear() const{
    return year_;
}

bool Livre::getStatus() const{
    return isAvalible_;
}

void Livre::switchStatus() {
    isAvalible_ = !isAvalible_;
}