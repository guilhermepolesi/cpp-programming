#include <iostream>

#ifndef REQUIRED_MACRO
#error "REQUIRED_MACRO is not defined. Please define it to proceed."
#endif
/* When the #error directive is encountered by the compiler, it issues an error message and stops the compilation process. This causes the compilation to fail and return an error code other than 0 (normally 1). This is expected, since #error is used precisely to prevent code from compiling when certain conditions are not met.
 * Expected behavior
   When you try to compile this code with g++, the compiler will issue the following error message:
 * g++     error.cpp   -o error
   error.cpp:4:2: error: #error "REQUIRED_MACRO is not defined. Please define it to proceed."
     4 | #error "REQUIRED_MACRO is not defined. Please define it to proceed."
       |  ^~~~~
   make: *** [<embutido>: error] Erro 1

 */

int main() {
    std::cout << "This will not compile if REQUIRED_MACRO is not defined." << std::endl;
    return 0;
}

