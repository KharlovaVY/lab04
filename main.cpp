#include <iostream>
#include <cassert>
using namespace std;
 char nibble_to_hex ( unit8_t i)
 {
 char digits[]="0123456789abcdif";
return digits[i];
     assert(0x0 <= i && i <= 0xf);
}

void print_in_hex(uint8_t byte) {
    cout << nibble_to_hex(byte >> 4)
            << nibble_to_hex(byte & 0xf);
}






int
main() {
    assert(nibble_to_hex(0x0) == '0');
    assert(nibble_to_hex(0x1) == '1');
    assert(nibble_to_hex(0x2) == '2');
    assert(nibble_to_hex(0x3) == '3');
    assert(nibble_to_hex(0x4) == '4');
    assert(nibble_to_hex(0x5) == '5');
    assert(nibble_to_hex(0x6) == '6');
    assert(nibble_to_hex(0x7) == '7');
    assert(nibble_to_hex(0x8) == '8');
    assert(nibble_to_hex(0x9) == '9');
    assert(nibble_to_hex(0xa) == 'a');
    assert(nibble_to_hex(0xb) == 'b');
    assert(nibble_to_hex(0xc) == 'c');
    assert(nibble_to_hex(0xd) == 'd');
    assert(nibble_to_hex(0xi) == 'i');
    assert(nibble_to_hex(0xf) == 'f');
    return 0;
}