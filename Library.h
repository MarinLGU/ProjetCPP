//
// Created by marin on 13/12/17.
//

#ifndef PROJETCPP_LIBRARY_H
#define PROJETCPP_LIBRARY_H
#include <iostream>
#include <string>
#include <vector>
#include "Book.h"

using namespace std ;


class Library{
protected:
    string name;
    string adress;
    static unsigned lib_id;
    vector<Book*> book_list;

public:
    Library(string name, string adress);
    string get_name(){ return name ;}
    string get_adress(){ return adress ;}
    static unsigned get_lib_id(){ return lib_id ;}
    vector<Book*> get_book_list(){ return book_list;}
    bool book_in_lib(string isbn, Library L);
    void ask_book(string isbn, Library L); /*retourne "le livre a été ajouté" ou "le
    livre est indisponible dans la bibliothèque indiquée" après avoir ajouté ou pas le livre*/
    void buy_book(Book book);
    void delete_book(Book book);
    void print_book_list();
    void send_back(Book book);




};
#endif //PROJETCPP_LIBRARY_H
