//
// Created by marin on 12/12/17.
//
#include "Comic.h"


Comic::Comic(string author, string title, string editor, string isbn, Target target, string lib_id, string drawer, bool state)
        :Book(author,title,editor,isbn,target, lib_id,state){
    this->drawer=drawer;
}

void Comic::affiche() {
    Book::affiche();
    cout<<"dessinateur : "<<drawer<<endl;
}
