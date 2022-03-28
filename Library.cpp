#include "Library.h"

Library::Library() {}
Library::~Library() {}

void Library::addBook(Book *book) {
    books = book;
}

Book* Library::getBook(const char *title) {
    return books;
}

