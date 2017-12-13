#include "Library.h"

//
// Created by marin on 13/12/17.
//
unsigned Library::lib_id=0;

Library::Library(string name, string adress, Book *book_list) {
    this->name=name;
    this->adress=adress;
    this->book_list=book_list;
    this->lib_id=++lib_id;
}
