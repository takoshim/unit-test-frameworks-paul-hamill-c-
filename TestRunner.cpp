#include <cstdio>
#include "BookTest.h"
#include "LibraryTest.h"

int main() {

    BookTest test;
    test.runTest();
    printf("SUCCESS!\n");

    LibraryTest test2;
    test2.runTest();
    printf("SUCCESS!\n");

    printf("%d tests completed successfully\n",
           UnitTest::getNumSuccess());
    return 0;
}
