#include <iostream>
#include <string>

class Etudiant
{
private:
    std::string nom;
    int age;
    double moyenne;

public:
    Etudiant(std::string n, int a, double m)
    {
        nom = n;
        age = a;
        moyenne = m;
    }

    void ajoutNote(double note)
    {
        moyenne = (moyenne + note) / 2.0;
    }

    bool estMajeur() const
    {
        return age >= 18;
    }

    void afficher() const
    {
        std::cout << nom << " (" << age << " ans) - Moyenne : " << moyenne << std::endl;
    }
    std::string getNom() const
    {
        return nom;
    }
    double getMoyenne() const
    {
        return moyenne;
    }
};

int main()
{
    Etudiant *promo[5];

    std::cout << "--- Saisie des étudiants ---\n";
    for (int i = 0; i < 5; i++) {
        std::string n;
        int a;
        double m;

        std::cout << "Etudiant " << i + 1 << "\nNom : ";
        std::cin >> n;
        std::cout << "Age : ";
        std::cin >> a;
        std::cout << "Moyenne : ";
        std::cin >> m;
        promo[i] = new Etudiant(n, a, m);
    }
    std::cout << "\n--- Liste de la promo ---\n";

    for (int i = 0; i < 5; i++) {
        promo[i]->afficher();
    }
    double somme = 0;
    int indexMeilleur = 0;

    for (int i = 0; i < 5; i++) {
        somme = somme + promo[i]->getMoyenne();
        if (promo[i]->getMoyenne() > promo[indexMeilleur]->getMoyenne()) {
            indexMeilleur = i;
        }
    }
    std::cout << "\nMoyenne de la promo : " << somme / 5 << std::endl;
    std::cout << "Meilleur etudiant : " << promo[indexMeilleur]->getNom() << std::endl;

    for (int i = 0; i < 5; i++)
    {
        delete promo[i];
    }
    return 0;
}
