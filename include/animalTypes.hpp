#ifndef ANIMALTYPES_HPP
#define ANIMALTYPES_HPP
#include <string>

using namespace std;

class Animal {
private:
    string name;
    int age;

public:
    Animal(string name, int age);

    string getName() const;
    int getAge() const;

    virtual void eat() = 0;
    virtual void sleep() = 0;

    virtual ~Animal();
};

class Cow : public Animal {
    public:
        Cow(string name, int age);
        void eat() override;
        void sleep() override;
};

class Swine : public Animal {
    public:
        Swine(string name, int age);
        void eat() override;
        void sleep() override;
};

class Chicken : public Animal {
    public:
        Chicken(string name, int age);
        void eat() override;
        void sleep() override;
};


#endif