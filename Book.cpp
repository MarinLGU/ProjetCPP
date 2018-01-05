//
// Created by marin on 12/12/17.
//
#include "Book.h"

int compteur_book=0;


Book::Book(string author, string title, string editor, string isbn, Target target, string lib_id, bool state){
    this->author=author;
    this->title=title;
    this->editor=editor;
    this->isbn=isbn;
    this->target=target;
    this->state=state;
    ++compteur_book;
    this->book_id=compteur_book;
    this->lib_id=lib_id;

}

string Book::detarget() {
    string table[]={"Tous","Jeunesse","Feminin","Masculin"};
    return table[target];
}

void Book::affiche() {
    cout<<"auteur :"<<author<<" titre :"<<title<<" public :"<<detarget()<<" état"<<state<<" book_id= "<<book_id <<endl;
}

void Book::is_available() {
    if(state==1)
        cout<<"le livre est disponible"<<endl;

    else
        cout<<"le livre est indisponible"<<endl;

}

