//
// Created by marin on 12/12/17.
//
#include "Book.h"

unsigned Book::book_id=0;


Book::Book(string author, string title, string editor, string isbn, Target target, string lib_id, bool state){
    this->author=author;
    this->title=title;
    this->editor=editor;
    this->isbn=isbn;
    this->target=target;
    this->state=state;
    this->book_id=++book_id;
    this->lib_id=lib_id;

}

void Book::affiche() {
    cout<<"auteur :"<<author<<" titre :"<<title<<" public :"<<target<<" état"<<state<<" book_id= "<<book_id <<endl;
}

void Book::is_available() {
    if(state==1)
        cout<<"le livre est disponible"<<endl;

    else
        cout<<"le livre est indisponible"<<endl;

}