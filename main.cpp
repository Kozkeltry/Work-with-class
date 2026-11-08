#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
public:
    Person(std::string name, int age) : name(name), age(age) {
    }
    void output() {
        std::cout << "Сотрудника зовут: " << name << std::endl;
        std::cout << "Ему " << age << " лет" << std::endl;
    }
};

int main() {
    Person person("Иван", 20);
    person.output();

    return 0;
}