#ifndef PROJET_BOOK_H
#define PROJET_BOOK_H

#include <iostream>
#include <string>
using namespace std ;

class Book{
public:
    enum Target{TOUS, JEUNESSE, FEMININ, MASCULIN};
protected:
    static unsigned book_id;
    string author;
    string title;
    string editor;
    string isbn;
    Target target;
    bool state ; //1 si disponible 0 sinon
    string lib_id;
public:
    Book(string author, string title, string editor, string isbn, Target target, string lib_id, bool state=1);
    static unsigned get_book_id(){ return book_id;}
    string get_author(){ return  author;}
    string get_lib_id(){ return lib_id;}
    string get_title(){ return title;}
    string get_editor(){ return editor;}
    string get_isbn(){ return isbn ;}
    Target get_target(){ return target ;}
    bool get_state(){ return state ;}
    void set_state(bool state){
        this->state=state;
    }
    void affiche();
    void is_available();





};



#endif //PROJET_BOOK_H
