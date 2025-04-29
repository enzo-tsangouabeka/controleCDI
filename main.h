/**
* @file main.h
 * @brief Projet Application de gestion du CDI
 * @author Enzo Tsangouabeka
 * @version v1.0
 * @date 29/04/2025
 */

#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <limits> // Pour ignorer les mauvaises entrées (int)
#include <vector>
#include <windows.h> // Pour la couleur
#include <conio.h> // Input
#include <algorithm> // Pour l'extacte d'un tableau Vector

#include "livre.h"
#include "livre.cpp"
#include "CDI.h"
#include "CDI.cpp"


using namespace std;

int cheakTypeEntire(int& _entire);
void lunchMethode(int _methodeMode);
void printQuestion(std::vector<std::string> options = {"0"}, int cursorPosition = 0);
int chooseMenu(std::vector<std::string> options);
void setColor(int _color = 7);

#endif //MAIN_H