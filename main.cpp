#include <iostream>
#include <cassert>
using namespace std;
 char nibble_to_hex (uint8_t i)
 {
 char digits[]="0123456789abcdef";
return digits[i];
     assert(0x0 <= i && i <= 0xf);
}

void print_in_hex(uint8_t byte) {
    cout << nibble_to_hex(byte >> 4)
            << nibble_to_hex(byte & 0xf);
}

const uint8_t* as_bytes(const void* data) {
    return reinterpret_cast<const uint8_t*>(data);
}
const uint8_t* as_bytes(const void* data);

void print_in_hex(const void* data, size_t size) {
    const uint8_t* bytes = as_bytes(data);
    for (size_t i = 0; i < size; i++) {
        print_in_hex(bytes[i]);

        // Для удобства чтения: пробелы между байтам, по 16 байт на строку.
        if ((i + 1) % 16 == 0) {
            cout << '\n';
        }
        else {
            cout << ' ';
        }
    }
}
//1.7
char bit_digit(uint8_t byte, uint8_t bit) {
    if (byte & (0x1 << bit)) {
        return '1';
    }
    return '0';
}
void print_in_binary(uint8_t byte) {
    for (uint8_t bit = 7; bit > 0; bit--) {
        cout << bit_digit(byte, bit);
    }
}

//1.8
void print_in_binary(const void* data, size_t size) {
    const uint8_t* bytes = as_bytes(data);
    for (size_t i = 0; i < size; i++) {
        print_in_binary(bytes[i]);

        // Для удобства чтения: пробелы между байтами, по 4 байта на строку.
        if ((i + 1) % 4 == 0) {
            cout << '\n';
        }
        else {
            cout << ' ';
        }
    }
}
 struct Student {
     char name[17];
     uint32_t year;
     float sted_ball;
     int sex: 1;
     uint8_t courses;
     Student* starosta;
 };
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
    assert(nibble_to_hex(0xe) == 'e');
    assert(nibble_to_hex(0xf) == 'f');
    print_in_hex (123);
    print_in_hex (0xff);
    print_in_hex (0xab);

    uint32_t u32 = 0x42;
    cout << "u32 bytes: ";
    print_in_hex(&u32, sizeof(u32));
    cout << '\n';
    print_in_binary(3);


    uint32_t u42 = 0x42;
    cout << "u42 bytes: ";
    print_in_hex(&u42, sizeof(u42));
    cout << '\n';

    uint16_t operant1,operant3, res;
    char operant2;
    cin>>operant1>>operant2>>operant3;
    if (operant2=='&') {
        res = operant1 & operant3;
        cout<<res;
        print_in_hex(&operant2, sizeof(operant2));
                cout << operant2;
        print_in_hex(&operant3, sizeof(operant3));
        cout << "=";
        print_in_hex(&res, sizeof(res));
    }

    //создаем массив из трех студентов
    Student studarray[3]={
            {"Eioi",2017,4.3,1,7,&studarray[1]},
            {"starosta",2017,2.4,1,7,nullptr},
            {"veronika",2017,4.3,1,6,&studarray[1]}
    };
    cout << "address ot array"<<&studarray;
    cout <<"Size of array: "<<sizeof(studarray);
    cout <<"\t Adress of elem: \t Size of elem:\n";
    for (int i = 0; i < 3; i++) {
        cout << i << ":\t" <<  studarray[0].name <<"\t"<< sizeof(studarray)<<"\n";
//???
        cout<<"FIRST ELEMENT\n";
        cout<<"t Address of field: \t sizeof field \f offset:\n";
        cout <<"Name:\t\t"<<studarray[0].name<<"\t\t"<<sizeof(studarray)<<offsetof(struct
                Student,name )<<"\n";
        cout<<"SECOND ELEMENT\n";
        cout<<"t Address of field: \t sizeof field \f offset:\n";
        cout <<"Name:\t\t"<<studarray[0].name<<"\t\t"<<sizeof(studarray)<<offsetof(struct
                Student,name )<<"\n";
        //для года,пола,средний балл и тд

    }

    cout << "NAME: \n";
    cout << "Brimary ";
    print_in_binary(&studarray[0].name, sizeof(studarray);
    cout<<"\n Hex:";
    //год поступления, средний балл
    cout<<"FIRST ELEMENT\n";
    cout<<"t Address of field: \t sizeof field \f offset:\n";
    cout <<"Name:\t\t"<<studarray[0].name<<"\t\t"<<sizeof(studarray)<<offsetof(struct
            Student,name )<<"\n";
    return 0;
}