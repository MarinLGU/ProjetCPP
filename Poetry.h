//
// Created by marin on 12/12/17.
//

#ifndef PROJET_POETRY_H
#define PROJET_POETRY_H
#include "Book.h"
class Poetry : public Book{
protected:
    string indic;

public:
    Poetry(string author, string title, string editor, string isbn, Target target, string lib_id, string drawer, bool state=1);
    string get_indic(){ return indic;}
    void affiche();
};

#endif //PROJET_POETRY_H
