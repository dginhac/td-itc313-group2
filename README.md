# Description des classes
## Classe Account

Variables:
* Client (customer) :  Objet de la classe Customer
* Solde  (balance) :  double
* IBAN (iban) : String ? ou Objet de la classe IBAN (voir page wikipedia IBAN)
* max debit (max_debit) : int ? double ?
* creation du compte (creation) : Objet de la classe Date

Methodes ou Fonctions Helper
* constructeur
* Getters ? / Setters ?
* surcharges d'opérateur ?
* ?

## Classe Customer

Variables:
* identifiant (id) : int
* nom (lastname) : string
* prenom (firstname) : string
* date de naissance (birthday) : objet de la classe Date
* genre (gender) : booleen ou objet de classe enum
* adresse (address) : Objet de la classe Address
* telephone (tel) : string (pour prendre en compte le 0 du début) ou int 
* email (email) : string

Methodes ou Fonctions Helper
* constructeur
* Getters ? / Setters ?
* surcharges d'opérateur ?
* ?

## Classe Address

Variables:
* numero (number) : int
* rue (street) : string
* code postal (zip) : string (pour prendre en compte les 0 du debut) ou int
* ville (city) : string

Methodes ou Fonctions Helper
* constructeur
* Getters ? / Setters ?
* addresse complete ?
* surcharges d'opérateur ?
* ?