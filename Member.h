//
// Created by Thomas Ledar on 15/12/2017.
//

#ifndef PROJETCPP_MEMBER_H
#define PROJETCPP_MEMBER_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std ;

class Member {
protected :
    static unsigned member_id;
    string lastname;
    string firstname;
    string adress;
    string lib;
    vector<int> detained_books;
    int nb_allowed;
public:
    Member(string lastname, string firstname, string adress, string lib, vector<int> detained_books, int nb_allowed);
    static unsigned get_member_id() { return member_id; }
    string get_lastname() { return lastname; }
    void set_lastname(string new_lastname) { lastname = new_lastname; }
    string get_firstname() { return firstname; }
    void set_firstname(string new_firstname) { firstname = new_firstname; }
    string get_adress() { return adress; }
    void set_adress(string new_adress) { adress = new_adress; }
    string get_lib() { return lib; }
    void set_lib(int lib_id) { lib = lib_id; }
    vector<int> get_detained_books() { return detained_books; }
    int get_nb_allowed() { return nb_allowed; }
    void affiche();
    void borrow_book(int book_id);
    void return_book(int book_id);

};

#endif //PROJETCPP_MEMBER_H