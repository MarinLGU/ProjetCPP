#include <iostream>
#include "Book.h"
#include "Comic.h"
#include "Poetry.h"
#include "Novel.h"
#include "Drama.h"
#include "Album.h"

int main() {
    Novel B1=Novel("Victor Hugo", "Les Misérables", "Folio Classique","9792070409228", TOUS,"2",Litterature);
    B1.affiche();
    B1.is_available();
    Novel B2=Novel("Stendhal", "Le Rouge et le Noir", "Folio Classique", "9792070412396", TOUS,"2",Litterature);
    B2.affiche();
    B2.set_state(0);
    B2.is_available();
    Comic B3=Comic("Hergé","Tintin Objectif Lune","Casterman","2203001151",JEUNESSE,"1","Hergé");
    B3.affiche();
    Poetry B4=Poetry("Baudelaire","Les Fleurs du Mal", "Folio Classique", "2070466655",TOUS, "1",PROSE);
    B4.affiche();
    Drama B5=Drama("Eschyle","Les Perses","Belles Lettres","2251799567",TOUS,"3",AV_IV);
    B5.affiche();
    Album B6=Album("Chris Van Allsburg","L'épave du Zéphyr","L'Ecole Des Loisirs", "9782211211567 ",JEUNESSE,"2",DRAW);
    B6.affiche();

    return 0;
}