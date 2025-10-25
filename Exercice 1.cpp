#include <iostream>
#include <string>

using namespace std;


class Personne {
protected:
    string nom;
    int age;
public:
   
    Personne(string n, int a) : nom(n), age(a) {}

   
    virtual void afficher() const {
        cout << "Nom : " << nom << endl;
        cout << "Age : " << age << endl;
    }
};


class Etudiant : public Personne {
private:
    string niveau;
public:
    
    Etudiant(string n, int a, string niv) : Personne(n, a), niveau(niv) {}

    
    void afficher() const override {
        Personne::afficher(); 
        cout << "Niveau : " << niveau << endl;
    }
};

int main() {
    
    Etudiant e("Salma", 21, "Licence 2");

    
    e.afficher();

    return 0;
}
