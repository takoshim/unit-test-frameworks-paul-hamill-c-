#ifndef _LIBRARY_TEST_H_
#define _LIBRARY_TEST_H_

#include "UnitTest.h"
#include "Library.h"

class LibraryTest : public UnitTest {

public:
    void runTest() override {
    // Create library
    Library library;

    // Add book to library
    Book *book = new Book( "Cosmos" );
    library.addBook( book );

    // Lookup book in library
    Book *book2;
    book2 = library.getBook( "Cosmos" );
    UT_ASSERT( !strcmp( book2->title, "Cosmos") );
    }
};
#endif
