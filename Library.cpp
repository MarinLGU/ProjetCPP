#include "Library.h"

//
// Created by marin on 13/12/17.
//
unsigned Library::lib_id=0;

Library::Library(string name, string adress) {
    this->name=name;
    this->adress=adress;
    this->book_list={};
    this->lib_id=++lib_id;
}

bool Library::book_in_lib(string isbn, Library L) {
    bool indic=0;
    for(Book* book : L.book_list){
        if(book->get_isbn()==isbn) indic =1;
    }
    return indic;
}

void Library::buy_book(Book book) {

    book_list.push_back(&book);
}

void Library::delete_book(Book book) {
    int indic=0;
    int i;
    for(i=0 ; book_list.size() ; i++){
        Book b=*book_list[i];
        if(b.get_book_id()==book.get_book_id()) indic=i;
    }
    book_list.erase(book_list.begin()+i);
}


void Library::ask_book(string isbn, Library L) {
    int i=0;
    if(book_in_lib(isbn, L)){
        while(L.book_list[i]->get_isbn()!=isbn) i=i+1;
        buy_book(*L.book_list[i]);
        L.delete_book(*L.book_list[i]);
        cout<<"Le livre a été transféré"<<endl;
    }

}

void Library::print_book_list() {
    for(Book* book : book_list){
        book->affiche();
    }

}