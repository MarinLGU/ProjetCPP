//
// Created by marin on 13/12/17.
//

#ifndef PROJETCPP_LIBRARY_H
#define PROJETCPP_LIBRARY_H
#include <iostream>
#include <string>
#include "Book.h"

using namespace std ;


class Library{
protected:
    string name;
    string adress;
    static unsigned lib_id;
    Book book_list[];

public:
    Library(string name, string adress, Book book_list[]={});
    string get_name(){ return name ;}
    string get_adress(){ return adress ;}
    static unsigned get_lib_id(){ return lib_id ;}
    Book get_book_list(){ return *book_list;}
    string ask_book(string isbn, static unsigned lib_id); /*retourne "le livre a été ajouté" ou "le
    livre est indisponible dans la bibliothèque indiquée" après avoir ajouté ou pas le livre*/
    void buy_book(Book book);
    void delete_book(static unsigned book_id);
    void send_back(static unsigned book_id);




};
#endif //PROJETCPP_LIBRARY_H
