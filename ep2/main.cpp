#include <iostream>

using namespace std;

void foo(void)
{
    char *Foo = "Welcome, Friend!\n";
    cout << Foo;
}

int main()
{

    char SmallS;            //  8 bit signed   / 256 values / [-128, 127]
    char unsigned SmallU;   //  8 bit unsigned / 256 values / [0, 255]

    short MediumS;          //  16 bit signed   / 65536 values / [-32768, 32767]
    short unsigned MediumU; //  16 bit unsigned / 65536 values / [0, 65535]

    int LargeS;             // 32 bits signed / ~ 4.2 billion values / [-~2.1 billion, ~2.1 billion]
    int unsigned LargeU;    // 32 bits unsigned / ~ 4.2 billion values / [0, ~4.2 billion]

    int integer;

    integer = 5;
    integer = 5 + 2;
    integer = integer + 7;

    char unsigned TestU;

    TestU = 255;
    TestU = TestU + 1; // 0

    char TestS;

    TestS = 127;
    TestS = TestS + 1; // -128

    foo();
    return 0;
}
