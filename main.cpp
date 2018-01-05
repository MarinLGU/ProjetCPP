#include <iostream>
#include "Book.h"
#include "Comic.h"
#include "Poetry.h"
#include "Novel.h"
#include "Drama.h"
#include "Album.h"
#include "Library.h"
#include "Member.h"
using namespace std;


int main() {
    Book* B1=new Novel("Victor Hugo", "Les Misérables", "Folio Classique","9792070409228", TOUS,Litterature);
    Book* B2=new Novel("Stendhal", "Le Rouge et le Noir", "Folio Classique", "9792070412396", TOUS,Litterature);
    Book* B3=new Comic("Hergé","Tintin Objectif Lune","Casterman","2203001151",JEUNESSE,"Hergé");
    Book* B4=new Poetry("Baudelaire","Les Fleurs du Mal", "Folio Classique", "2070466655",TOUS,PROSE);
    Book* B5=new Drama("Eschyle","Les Perses","Belles Lettres","2251799567",TOUS,AV_IV);
    Book* B6=new Album("Chris Van Allsburg","L'épave du Zéphyr","L'Ecole Des Loisirs", "9782211211567 ",JEUNESSE,DRAW);
    Library L1=Library("Alcazar","Belsunce");
    Library L2=Library("Castellane","Castellane");
    L2.buy_book(B1);
    L2.buy_book(B2);
    L1.buy_book(B5);
    L1.buy_book(B6);
    L1.buy_book(B3);
    L1.buy_book(B4);
    L1.ask_book("9792070412396",L2);
    L1.print_book_list();
    Member M1=Member("Ledar", "Thomas", "117 boulevard de la Libération", "ALcazar", {10, 13}, 4);
    M1.set_firstname("Lucas");
    M1.borrow_book(219);
    M1.borrow_book(1200);
    M1.return_book(10);


    return 0;
}