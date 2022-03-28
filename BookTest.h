#ifndef _BOOK_TEST_H_
#define _BOOK_TEST_H_

#include "UnitTest.h"
#include "Book.h"

class BookTest : public UnitTest {

public:
    void runTest() override {
        Book book("Cosmos");
        UT_ASSERT(!strcmp(book.title, "Cosmos"));
    }
};
#endif