#include <iostream>
#include "Book.h"
#include "Comic.h"

int main() {
    Book B1=Book("Victor Hugo", "Les Misérables", "Folio Classique","9792070409228",Book::Target::TOUS, "1");
    B1.affiche();
    B1.is_available();
    Book B2=Book("Stendhal", "Le Rouge et le Noir", "Folio Classique", "9792070412396", Book::Target::TOUS,"2",1);
    B2.affiche();
    B2.set_state(0);
    B2.is_available();
    Comic B3=Comic("Hergé","Tintin Objectif Lune","Casterman","2203001151",Book::Target::JEUNESSE,"1","Hergé");
    B3.affiche();
    return 0;
}