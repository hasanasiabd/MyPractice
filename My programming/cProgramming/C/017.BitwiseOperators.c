// #include <stdio.h>

// int main() {
//     int a = 10;
//     int b = 5;
//     int c;
// //* Bitwise Operators(&, |, ^, ~, <<, >>)
//     c = (a & b);  // Bitwise AND
//     printf("Bitwise AND: %d\n", c); //? 0101 & 0011 = 0001 (which is 1 in decimal)
//     //! Note: (& = AND) 0101 & 0011 = 0001

//     c = (a | b);  // Bitwise OR
//     printf("Bitwise OR: %d\n", c);  //? 0101 | 0011 = 0111 (which is 7 in decimal)
//     //! Note: (| = OR) 0101 | 0011 = 0111

//     c = (a ^ b);  // Bitwise XOR
//     printf("Bitwise XOR: %d\n", c);  //? 0101 ^ 0011 = 0110 (which is 6 in decimal)
//     //! Note: (^ = XOR) 0101 ^ 0011 = 0110

//     c = (~a);      // Bitwise NOT 
//     printf("Bitwise NOT: %d\n", c); //? ~0101 = 1010 (which is -6 in decimal) 
//     //! Note: (~ = NOT) বিট উল্টানো 0101 ~ 1010

//     c = (a << 1); // Left shift
//     printf("Left shift: %d\n", c);  //? 0101 << 1 = 1010 (which is 10 in decimal)
//     //! Note: (<< = Left shift) 0101 << 1 = 1010

//     c = (a >> 1); // Right shift
//     printf("Right shift: %d\n", c);  //? 0101 >> 1 = 0010 (which is 2 in decimal)
//     //! Note: (>> = Right shift) 0101 >> 1 = 0010

//     return 0;
// }