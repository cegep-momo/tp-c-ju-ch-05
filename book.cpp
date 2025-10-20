#include <iostream>
#include <string>

#include "book.h"

using namespace std;

// Constructors

// Par défaut
Book::Book() : title(""), author(""), isbn(""), isAvailable(true), borrowerName("") {};

// Paramètré
Book::Book(const string &title, const string &author, const string &isbn)
{
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    this->isAvailable = false;
    this->borrowerName = "";
};

// Getters
string Book::getTitle() const
{
    return title;
}

string Book::getAuthor() const
{
    return author;
}

string Book::getISBN() const
{
    return isbn;
}

bool Book::getAvailability() const
{
    return isAvailable;
}

string Book::getBorrowerName() const
{
    return borrowerName;
}

// Setters
void Book::setTitle(const string &title)
{
    this->title = title;
}

void Book::setAuthor(const string &author)
{
    this->author = author;
}

void Book::setISBN(const string &isbn)
{
    this->isbn = isbn;
}

void Book::setAvailability(bool available)
{
    this->isAvailable = isAvailable;
}

void Book::setBorrowerName(const string &borrowerName)
{
    this->borrowerName = borrowerName;
}

// Methods
void Book::checkOut(const string &borrower)
{
    this->borrowerName = borrower;
    this->isAvailable = false;
}

void Book::returnBook()
{
    this->borrowerName = "";
    this->isAvailable = true;
}

string Book::toString() const
{
    string dispo;
    string bookToString;
    if (this->isAvailable)
    {
        dispo = "Disponible";
    }
    else
    {
        dispo = "Indisponible";
    }
    bookToString = "Titre : " + this->title +
                   "\nAuteur : " + this->author +
                   "\nISBN : " + this->isbn +
                   "\nStatut : " + dispo +
                   "\nNom de l'emprunteur : " + this->borrowerName;
    return bookToString;
}

string Book::toFileFormat() const
{
    string dispo;
    if (this->isAvailable)
    {
        dispo = "1";
    }
    else
    {
        dispo = "0";
    }
    string ligne = this->title +
                   "|" + this->author +
                   "|" + this->isbn +
                   "|" + dispo +
                   "|" + this->borrowerName;
    return ligne;
}