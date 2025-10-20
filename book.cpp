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