#include <iostream>
#include <string>

std::string* create_fiche(std::string name)
{
    return new std::string(name);
}

int main(void)
{
    std::string n;
    std::cout << "Nom : ";
    std::cin >> n;
    std::string* f = create_fiche(n);
    std::cout << "Fiche : " << *f << std::endl;
    delete f;
    return 0;
}
