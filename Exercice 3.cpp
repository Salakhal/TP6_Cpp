#include <iostream>
#include <string>

using namespace std;


class Produit {
protected:
    string nom;
    double prix;
public:
    
    Produit(string n, double p) : nom(n), prix(p) {}

    
    virtual void afficherInfos() const {
        cout << "Produit : " << nom << ", Prix : " << prix << "€" << endl;
    }

    
    virtual ~Produit() {}
};


class ProduitAlimentaire : public Produit {
private:
    string dateExpiration;
public:
    ProduitAlimentaire(string n, double p, string dateExp) 
        : Produit(n, p), dateExpiration(dateExp) {}

    void afficherInfos() const override {
        cout << "Produit Alimentaire : " << nom 
             << ", Prix : " << prix 
             << "€, Date d'expiration : " << dateExpiration << endl;
    }
};


class ProduitElectronique : public Produit {
private:
    int garantie; 
public:
    ProduitElectronique(string n, double p, int g) 
        : Produit(n, p), garantie(g) {}

    void afficherInfos() const override {
        cout << "Produit Electronique : " << nom 
             << ", Prix : " << prix 
             << "€, Garantie : " << garantie << " mois" << endl;
    }
};

int main() {
    
    ProduitAlimentaire pa("Lait", 2.5, "2025-12-31");
    ProduitElectronique pe("Smartphone", 450, 24);

    
    pa.afficherInfos();
    pe.afficherInfos();

    Produit* tabProduits[2];
    tabProduits[0] = &pa;
    tabProduits[1] = &pe;

    cout << "\nAffichage via pointeurs (polymorphisme) :" << endl;
    for (int i = 0; i < 2; i++) {
        tabProduits[i]->afficherInfos();
    }

    return 0;
}
