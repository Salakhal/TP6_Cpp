# TP6 – Héritage Simple 

## Exercice 1 – Classe Personne et Etudiant

**Objectifs pédagogiques :**
- Comprendre la notion de classe dérivée.
- Réutiliser les attributs de la classe de base.
- Initier l’utilisation de constructeurs dans l’héritage.

**Résumé :**
- Création de la classe `Personne` avec les attributs `nom` et `age`.
- Création de la classe dérivée `Etudiant` avec l'attribut `niveau`.
- Méthode `afficher()` dans chaque classe pour afficher les informations.
- Instanciation d’un objet `Etudiant` et affichage complet.

**Exemple de sortie :**
 ```
Nom : Salma
Age : 21
Niveau : Licence 3

```
<img width="833" height="148" alt="image" src="https://github.com/user-attachments/assets/c52a836a-f937-4d06-a3d7-92a13d4abf4e" />

---

## Exercice 2 – Compte bancaire

**Objectifs pédagogiques :**
- Appliquer l’héritage public.
- Comprendre l’appel au constructeur de la classe de base.
- Utiliser des méthodes spécialisées dans la classe dérivée.

**Résumé :**
- Création de la classe `Compte` avec `numero` et `solde`.
- Méthodes `deposer()` et `retirer()`.
- Classe dérivée `CompteEpargne` avec `tauxInteret` et méthode `calculerInteret()`.
- Test des opérations sur un objet `CompteEpargne`.

**Exemple de sortie :**

```
Compte n°101, Solde : 1000
Déposé : 500, Nouveau solde : 1500
Retiré : 200, Nouveau solde : 1300
Solde insuffisant pour retirer 2000
Intérêt calculé (5%) : 65

```

<img width="831" height="198" alt="image" src="https://github.com/user-attachments/assets/f1d986f0-10f9-463e-89db-6f41698865b0" />

---

## Exercice 3 – Hiérarchie de produits

**Objectifs pédagogiques :**
- Gérer des classes spécialisées avec héritage simple.
- Manipuler le mot-clé `virtual` pour permettre la redéfinition de méthodes.
- Organiser un mini-système orienté objet basé sur des catégories de produits.

**Résumé :**
- Classe de base `Produit` avec `nom` et `prix`.
- Classes dérivées :
  - `ProduitAlimentaire` avec `dateExpiration`.
  - `ProduitElectronique` avec `garantie`.
- Méthode virtuelle `afficherInfos()` redéfinie dans chaque classe.
- Polymorphisme démontré via un tableau de pointeurs `Produit*`.

**Exemple de sortie :**

```
Produit Alimentaire : Lait, Prix : 2.5€, Date d'expiration : 2025-12-31
Produit Electronique : Smartphone, Prix : 450€, Garantie : 24 mois

Affichage via pointeurs (polymorphisme) :
Produit Alimentaire : Lait, Prix : 2.5€, Date d'expiration : 2025-12-31
Produit Electronique : Smartphone, Prix : 450€, Garantie : 24 mois

```
<img width="1147" height="244" alt="image" src="https://github.com/user-attachments/assets/1ff330dc-daa2-4513-9ec9-0405191e78f9" />

---

## Exercice 4 – Système de gestion d'employés

**Objectifs pédagogiques :**
- Maîtriser l’héritage simple avec redéfinition.
- Gérer dynamiquement des objets de types dérivés via des pointeurs vers la classe de base.
- Illustrer le polymorphisme avec des fonctions virtuelles.
- Appliquer une gestion correcte de la mémoire avec des destructeurs virtuels.

**Résumé :**
- Classe de base `Employe` avec `nom`, `id`, `salaireDeBase`.
- Classes dérivées :
  - `Permanent` avec `primeAnnuelle`.
  - `Contractuel` avec `dureeContrat` et `tauxHoraire`.
- Méthode virtuelle `afficherInfos()` redéfinie dans chaque classe dérivée.
- Tableau dynamique de pointeurs `Employe*` pour stocker différents types d’employés.
- Libération correcte de la mémoire avec destructeurs virtuels.
- Calcul de salaire mensuel pour les contractuels.

**Exemple de sortie :**

```
--- Informations sur les employés ---
Nom : Alice, ID : 1, Salaire de base : 3000
Prime annuelle : 500

Nom : Bob, ID : 2, Salaire de base : 0
Durée contrat : 12 mois, Taux horaire : 20
Salaire mensuel pour 160 heures : 3200

Nom : Charlie, ID : 3, Salaire de base : 3200
Prime annuelle : 700

Destruction du permanent Alice
Destruction de l'employé Alice
Destruction du contractuel Bob
Destruction de l'employé Bob
Destruction du permanent Charlie
Destruction de l'employé Charlie

```

<img width="844" height="580" alt="image" src="https://github.com/user-attachments/assets/8568983f-d2f7-4a5a-9d59-1fe6345b827c" />

