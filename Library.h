#ifndef _LIBRARY_H_
#define _LIBRARY_H_

#include "Book.h"

class Library {

public:
    Library();
    ~Library();

    void addBook(Book *book);
    Book* getBook(const char *title);

private:
    Book *books;
};


#endif
