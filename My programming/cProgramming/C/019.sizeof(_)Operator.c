// #include <stdio.h>

// int main() {
//     int a;
//     printf("Size of int: %zu bytes\n", sizeof(a));

// //* sizeof Operator
//     char charSize; //? 1 byte
//     signed char signedSize; //? 1 byte
//     unsigned char unsignedCharSize; //? 1 byte
//     int intSize; //? 2/4 bytes
//     signed int signetIntSize; //? 2 bytes
//     unsigned int unsignedIntSize; //? 2 bytes
//     short int shortIntSize; //? 2 bytes
//     long int longIntSize; //? 4 bytes
//     signed long signedLongSize; //? 4 bytes (signed long int)
//     unsigned long unsignedLongSize; //? 4 bytes (unsigned long int)
//     float floatSize; //? 4 bytes
//     double doubleSize; //? 8 bytes
//     long double longDoubleSize; //? 10 bytes
//                                                     //? Note: The actual size of these data types can vary based on the system and compiler, but the sizes mentioned are common for many platforms.
//                                                     //!And the format specifier can be of two types: %lu &%zu.
//     printf("char: %zu bytes\n", sizeof(charSize));
//     printf("signed char: %zu bytes\n", sizeof(signedSize));
//     printf("unsigned char: %zu bytes\n", sizeof(unsignedCharSize));
//     printf("int: %zu bytes\n", sizeof(intSize));
//     printf("signed int: %zu bytes\n", sizeof(signedSize));
//     printf("unsigned int: %zu bytes\n", sizeof(unsignedIntSize));
//     printf("short int: %zu bytes\n", sizeof(shortIntSize));
//     printf("long int: %zu bytes\n", sizeof(longIntSize));
//     printf("signed long: %zu bytes\n", sizeof(signedLongSize));
//     printf("unsigned long: %zu bytes\n", sizeof(unsignedLongSize));
//     printf("float: %zu bytes\n", sizeof(floatSize));
//     printf("double: %zu bytes\n", sizeof(doubleSize));
//     printf("long double: %zu bytes\n", sizeof(longDoubleSize));
    
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);  
    
//     //? %d displays the integer value of a character
//     //? %c displays the actual character
//     printf("ASCII value of %c = %d\n", c, c);

//     return 0;
// }