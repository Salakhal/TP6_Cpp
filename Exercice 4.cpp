#include <iostream>
#include <string>

using namespace std;


class Employe {
protected:
    string nom;
    int id;
    float salaireDeBase;
public:
 
    Employe(string n, int i, float s) : nom(n), id(i), salaireDeBase(s) {}

    
    virtual void afficherInfos() const {
        cout << "Nom : " << nom << ", ID : " << id 
             << ", Salaire de base : " << salaireDeBase << endl;
    }

    virtual ~Employe() {
        cout << "Destruction de l'employé " << nom << endl;
    }
};


class Permanent : public Employe {
private:
    float primeAnnuelle;
public:
    Permanent(string n, int i, float s, float prime) 
        : Employe(n, i, s), primeAnnuelle(prime) {}

    void afficherInfos() const override {
        Employe::afficherInfos();
        cout << "Prime annuelle : " << primeAnnuelle << endl;
    }

    ~Permanent() {
        cout << "Destruction du permanent " << nom << endl;
    }
};

class Contractuel : public Employe {
private:
    int dureeContrat; // en mois
    float tauxHoraire;
public:
    Contractuel(string n, int i, float s, int duree, float taux) 
        : Employe(n, i, s), dureeContrat(duree), tauxHoraire(taux) {}

    void afficherInfos() const override {
        Employe::afficherInfos();
        cout << "Durée contrat : " << dureeContrat << " mois, Taux horaire : " 
             << tauxHoraire << endl;
    }

    float calculerSalaireMensuel(int heures) const {
        return tauxHoraire * heures;
    }

    ~Contractuel() {
        cout << "Destruction du contractuel " << nom << endl;
    }
};

int main() {
    
    Employe* equipe[3];

    // Ajout d'employés de types différents
    equipe[0] = new Permanent("Alice", 1, 3000.0f, 500.0f);
    equipe[1] = new Contractuel("Bob", 2, 0.0f, 12, 20.0f);
    equipe[2] = new Permanent("Charlie", 3, 3200.0f, 700.0f);

    
    
    cout << "--- Informations sur les employés ---" << endl;
    for (int i = 0; i < 3; i++) {
        equipe[i]->afficherInfos();

        Contractuel* c = dynamic_cast<Contractuel*>(equipe[i]);
        if (c != nullptr) {
            cout << "Salaire mensuel pour 160 heures : " << c->calculerSalaireMensuel(160) << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete equipe[i];
    }

    return 0;
}
