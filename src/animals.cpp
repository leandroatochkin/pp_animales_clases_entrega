#include <iostream>
#include <fstream>
#include <string>
#include "../include/animalTypes.hpp"


Animal::Animal(string name, int age){
    this -> name = name;
    this -> age = age;
}

string Animal::getName() const{
    return name;
};

int Animal::getAge() const{
    return age;
};

Animal::~Animal(){};

//Vacas
Cow::Cow(string name, int age) : Animal(name, age){};

void Cow::eat(){
    cout << "La vaca está comiendo!" << endl;
};

void Cow::sleep(){
    cout << "La vaca está durmiendo!" << endl;
};

//Cerdos
Swine::Swine(string name, int age) : Animal(name, age){};

void Swine::eat(){
    cout << "El cerdo está comiendo!" << endl;
};

void Swine::sleep(){
    cout << "El cerdo está durmiendo!" << endl;
};

//Pollos
Chicken::Chicken(string name, int age) : Animal(name, age){};

void Chicken::eat(){
    cout << "El pollo está comiendo!" << endl;
};

void Chicken::sleep(){
    cout << "El pollo está durmiendo!" << endl;
};

