#include <iostream>
#include "Book.h"
#include "Comic.h"
#include "Poetry.h"

int main() {
    Book B1=Book("Victor Hugo", "Les Misérables", "Folio Classique","9792070409228",TOUS, "1");
    B1.affiche();
    B1.is_available();
    Book B2=Book("Stendhal", "Le Rouge et le Noir", "Folio Classique", "9792070412396", TOUS,"2",1);
    B2.affiche();
    B2.set_state(0);
    B2.is_available();
    Comic B3=Comic("Hergé","Tintin Objectif Lune","Casterman","2203001151",JEUNESSE,"1","Hergé");
    B3.affiche();
    Poetry B4=Poetry("Baudelaire","Les Fleurs du Mal", "Folio Classique", "2070466655",TOUS, "1",PROSE);
    B4.affiche();
    return 0;
}