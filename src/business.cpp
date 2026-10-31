#include <iostream>
#include <fstream>
#include <string>
#include "../include/animalTypes.hpp"
#include "../include/businessLogic.hpp"

void PolyDemo::demonstratePolymorphism() {

    Animal* animals[3] = {nullptr, nullptr, nullptr};

    int animalCount = 0;
    int option;

    cout << "\n=== REGISTRO DE ANIMALES ===\n";

    while (animalCount < 3) {

        cout << "\nSeleccionar tipo de animal:\n";
        cout << "1. Vaca" << endl;
        cout << "2. Cerdo" << endl;
        cout << "3. Pollo" << endl;
        cout << "0. Finalizar selección" << endl;
        cout << "Opción: ";

        if (!(cin >> option)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Opción inválida." << endl;
            continue;
        }

        if (option == 0) {
            break;
        }

        Animal* animal = nullptr;

        switch (option) {

            case 1:
                animal = new Cow("Lola", 5);
                break;

            case 2:
                animal = new Swine("Pepe", 3);
                break;

            case 3:
                animal = new Chicken("Pipo", 1);
                break;

            default:
                cout << "Tipo de animal inválido." << endl;
                continue;
        }

        animals[animalCount] = animal;
        animalCount++;

        cout << "Animal agregado correctamente." << endl;
    }

    if (animalCount == 0) {
        cout << "No se seleccionaron animales." << endl;
        return;
    }

    cout << "\n=== DEMOSTRACION DE POLIMORFISMO ===\n";

    for (int i = 0; i < animalCount; i++) {

        cout << "\nAnimal: " << animals[i]->getName() << endl;
        cout << "Edad: " << animals[i]->getAge() << endl;

        animals[i]->eat();
        animals[i]->sleep();
    }

    cout << "\n=== LIBERANDO MEMORIA ===\n";

    for (int i = 0; i < animalCount; i++) {

        delete animals[i];
        animals[i] = nullptr;
    }

    cout << "Animales eliminados correctamente." << endl;
}


void PolyDemo::showMenu() {
    int option;

    do {
        cout << "\n=== DEMO DE POLIMORFISMO ===\n";
        cout << "1. Polimorfismo animal" << endl;
        cout << "0. Salir" << endl;
        cout << "Opción: ";

        if (!(cin >> option)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Opción inválida." << endl;
            continue;
        }

        switch (option) {
            case 1: 
                this->demonstratePolymorphism(); 
                break;
            case 0: 
                cout << "Adios!" << endl; 
                break;
            default: 
                cout << "Opción inválida." << endl;
        }

    } while (option != 0);
}

