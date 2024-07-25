#include <iostream>

#pragma pack(push, 1)
// #pragma pack(push, 1) and #pragma pack(pop): These directives are used to set the alignment of structure members. 
// In this example, PackedStruct members are aligned on 1-byte boundaries, which ensures the structure has no padding between members. 
// This is useful for binary data formats and network protocols where the exact layout is crucial.

struct PackedStruct {
    char a;
    int b;
    char c;
};
#pragma pack(pop)

int main() {
    PackedStruct ps;
    ps.a = 'A';
    ps.b = 123456;
    ps.c = 'B';

    std::cout << "Size of PackedStruct: " << sizeof(PackedStruct) << " bytes" << std::endl;
    std::cout << "Values: " << ps.a << ", " << ps.b << ", " << ps.c << std::endl;

    return 0;
}

