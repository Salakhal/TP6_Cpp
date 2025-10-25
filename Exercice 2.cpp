#include <iostream>

using namespace std;


class Compte {
protected:
    int numero;
    double solde;
public:
    
    Compte(int num, double sol = 0.0) : numero(num), solde(sol) {}

   
    void deposer(double montant) {
        solde += montant;
        cout << "Déposé : " << montant << ", Nouveau solde : " << solde << endl;
    }

    
    void retirer(double montant) {
        if (montant <= solde) {
            solde -= montant;
            cout << "Retiré : " << montant << ", Nouveau solde : " << solde << endl;
        } else {
            cout << "Solde insuffisant pour retirer " << montant << endl;
        }
    }

    
    void afficher() const {
        cout << "Compte n°" << numero << ", Solde : " << solde << endl;
    }
};


class CompteEpargne : public Compte {
private:
    double tauxInteret; 
public:
    
    CompteEpargne(int num, double sol, double taux) : Compte(num, sol), tauxInteret(taux) {}

    
    double calculerInteret() const {
        double interet = solde * tauxInteret / 100;
        cout << "Intérêt calculé (" << tauxInteret << "%) : " << interet << endl;
        return interet;
    }
};

int main() {
    
    CompteEpargne ce(101, 1000.0, 5.0);

   
    ce.afficher();

    
    ce.deposer(500.0);
    ce.retirer(200.0);
    ce.retirer(2000.0); 

    
    ce.calculerInteret();

    return 0;
}
