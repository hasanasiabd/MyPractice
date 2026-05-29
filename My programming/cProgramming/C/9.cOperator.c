// #include <stdio.h>

// int main() {
//     int a = 10;
//     int b = 5;
//     int c;

//     c = a + b;  // Addition
//     printf("Addition: %d\n", c);

//     c = a - b;  // Subtraction
//     printf("Subtraction: %d\n", c);

//     c = a * b;  // Multiplication
//     printf("Multiplication: %d\n", c);

//     c = a / b;  // Division
//     printf("Division: %d\n", c);

//     c = a % b;  // Modulus
//     printf("Modulus: %d\n", c);

//     //* Arithmetic Operators(+, -, *, /, %)
//     int c;
//     scanf("%d", &c);
//     printf("You entered +: %d\n", c+a);
//     printf("You entered -: %d\n", c-b);
//     printf("You entered *: %d\n", c*a);
//     printf("You entered /: %d\n", c/b);
//     printf("You entered %%: %d\n", c%b);

//     //* Increment and Decrement Operators(++, --)
//     int d;
//     scanf("%d", &d);
//     printf("You entered *++: %d\n", d++); //+Postfix (+ পরে বসে = *++)
//     printf("d: %d\n", d);
//     printf("You entered ++*: %d\n", ++d); //+Prefix (+ আগে বসে = ++*)
//     int e;
//     scanf("%d", &e);
//     printf("You entered *--: %d\n", e--); //-Postfix (- পরে বসে = *--)
//     printf("e: %d\n", e);
//     printf("You entered --*: %d\n", --e); //-Prefix (- আগে বসে = --*)
    

//     //* Assignment Operators(=, +=, -=, *=, /=, %=)
//     int f = 50;
//     printf("f: %d\n", a+=f);
//     printf("f: %d\n", a-=f);
//     printf("f: %d\n", a*=f);
//     printf("f: %d\n", a/=f);
//     printf("f: %d\n", a%=f);
    
//     //* Comparison Operators(>, <, >=, <=) & Relational Operators(>, <, >=, <=, ==, !=,)          
//     //? "সব Relational অপারেটরই Comparison অপারেটর, কিন্তু সব Comparison অপারেটর Relational অপারেটর নয়।"
//     int g = 30;
//     printf("a > g: %d\n", a > g);
//     printf("a < g: %d\n", a < g);
//     printf("a >= g: %d\n", a >= g);
//     printf("a <= g: %d\n", a <= g);
//     printf("a == g: %d\n", a == g);
//     printf("a != g: %d\n", a != g);

//     //* Logical Operators(&&, ||, !)
//     int h = 5;
//     printf("h: %d\n", h);
//     printf("h > 3 && h < 10: %d\n", h > 3 && h < 10);
//     printf("h > 3 || h < 10: %d\n", h > 3 || h < 10);
//     printf("!(h > 3): %d\n", !(h > 3));
//     printf("h > 3 && h > 10: %d\n", h > 3 && h > 10);
//     printf("h > 3 || h > 10: %d\n", h > 3 || h > 10);
//     printf("!(h == 3): %d\n", !(h == 3));

//     //* Conditional Operator(?:)
//     int ab;
//     int ba;
//     int ac;
//     scanf("%d %d", &ab, &ba);
//     ac = (ab>ba) ? ab : ba;
//     printf("ac: %d\n", ac);
    
//     //* Bitwise Operators(&, |, ^, ~, <<, >>)
//     int i = 5; //? 0101 in binary
//     printf("i: %d\n", i);
//     printf("i & 3: %d\n", i & 3); //? 3 is 0011 in binary, so 0101 & 0011 = 0001 (which is 1 in decimal)
//     printf("i | 3: %d\n", i | 3); //? 0101 | 0011 = 0111 (which is 7 in decimal)
//     printf("i ^ 3: %d\n", i ^ 3); //? 0101 ^ 0011 = 0110 (which is 6 in decimal)
//     printf("~i: %d\n", ~i); //? ~0101 = 1010 (which is -6 in decimal) 
//     //! Note: (~ = NOT) বিট উল্টানো 0101 ~ 1010
//     printf("i << 1: %d\n", i << 1); //? 0101 << 1 = 1010 (which is 10 in decimal) 
//     //! Note: (<< = Left Shift) বাম দিকে বিট শিফট করা 0101 << 1 = 1010
//     printf("i >> 1: %d\n", i >> 1); //? 0101 >> 1 = 0010 (which is 2 in decimal) 
//     //! Note: (>> = Right Shift) ডান দিকে বিট শিফট করা 0101 >> 1 = 0010

//     //* Comma Operator(,)
//     int x=5, y=10, z=15;
//     printf("x: %d, y: %d, z: %d\n", x, y, z);
//     int j = (1, 2, 3); //? j-এর মান 3 হবে, কারণ কমা অপারেটর সমস্ত এক্সপ্রেশন মূল্যায়ন করে এবং শেষটি ফেরত দেয়।
//     printf("j: %d\n", j);
//     int k=10, l=20, m=30;
//     int n = (k + l, k + m, l + m); //? The value of n will be 50 (l+m= 20+30= 50), as the comma operator evaluates all expressions and returns the last one
//     printf("n: %d\n", n);

//     //* sizeof Operator
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