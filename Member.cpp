//
// Created by Thomas Ledar on 15/12/2017.
//

#include "Member.h"

unsigned Member::member_id=0;

Member::Member(string lastname, string firstname, string adress, string lib, vector<int> detained_books, int nb_allowed ){
    this->lastname = lastname;
    this->firstname = firstname;
    this->adress = adress;
    this->lib = lib;
    this->nb_allowed = nb_allowed;
    this->detained_books = detained_books;
};

void Member::affiche() {
    cout << "Nom: " << firstname << " " << lastname << endl << "Adresse: " << adress << endl << "Bibliothèque: " << lib <<endl<<"Livres détenus :";
    for (int i = 0; i < detained_books.size(); i++) {
        cout<< detained_books[i]<<", ";
    };
    cout << endl << "Nombre authorisé: " << nb_allowed << endl;
};

void Member::borrow_book(int book_id) {
    if (nb_allowed > 0) {
        nb_allowed--;
        detained_books.push_back(book_id);
    } else {
        cout<<"You already have borrow the maximum number of books !"<<endl;
    }
};

void Member::return_book(int book_id) {
    auto match = find(detained_books.begin(), detained_books.end(), book_id); // on cherche le livre dans le vecteur des livres détenus
    if(match != detained_books.end()) { // Si le livre a bien été emprunté alors il est effacé
        detained_books.erase(match);
    } else {                           // Sinon on prévient seulement que ce livre n'avait pas été emprunté
        cout << "Book not borrowed" <<endl;
    }
    nb_allowed++;
};