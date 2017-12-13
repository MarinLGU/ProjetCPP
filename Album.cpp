//
// Created by marin on 13/12/17.
//

#include "Album.h"

Album::Album(string author, string title, string editor, string isbn, Target target, string lib_id, illustration type,
               bool state):Book(author,title,editor,isbn,target,lib_id,state){
    this->type=type;
}

string Album::deillustration() {
    string table[]={"Draw","Picture","Draw & Picture"};
    return table[type];
}

void Album::affiche() {
    Book::affiche();
    cout<<"Type d'illustration : "<<deillustration()<<endl;
}
