#include <stdio.h>
const double pi = 3.1416; //TODO: Global constant variable

void greet(); //? Function Prototype

int main(){
    // int a = 10;
    // int b = 20;
    // int num= 144;
    // float num2 = 334.45;
    // double num3 = 123.456789;
    // char name= 'A';
    // char name2= 'B';
    // char name3[] = "Homaira Noor";
    // //! const double pi = 3.1416; // This would cause a redefinition error
    // //! pi = 3.29 // This will cause a compilation error because pi is declared as a constant
    // printf("Hello World!\n");
    // printf("a+b= %d\n",a+b);
    // printf("1+2= %d\n", 1+2);
    // printf("Homaira Noor\n");
    // printf("%lf\n",pi);

    // printf("num: %d\n num2: %f\n num3: %lf\n name: %c\n name2: %c\n name3: %s\n", num, num2, num3, name, name2, name3);

    // //* Arithmetic Operators(+, -, *, /, %)
    // int c;
    // scanf("%d", &c);
    // printf("You entered +: %d\n", c+a);
    // printf("You entered -: %d\n", c-b);
    // printf("You entered *: %d\n", c*a);
    // printf("You entered /: %d\n", c/b);
    // printf("You entered %%: %d\n", c%b);

    // //* Increment and Decrement Operators(++, --)
    // int d;
    // scanf("%d", &d);
    // printf("You entered *++: %d\n", d++); //+Postfix (+ পরে বসে = *++)
    // printf("d: %d\n", d);
    // printf("You entered ++*: %d\n", ++d); //+Prefix (+ আগে বসে = ++*)
    // int e;
    // scanf("%d", &e);
    // printf("You entered *--: %d\n", e--); //-Postfix (- পরে বসে = *--)
    // printf("e: %d\n", e);
    // printf("You entered --*: %d\n", --e); //-Prefix (- আগে বসে = --*)
    

    // //* Assignment Operators(=, +=, -=, *=, /=, %=)
    // int f = 50;
    // printf("f: %d\n", a+=f);
    // printf("f: %d\n", a-=f);
    // printf("f: %d\n", a*=f);
    // printf("f: %d\n", a/=f);
    // printf("f: %d\n", a%=f);
    
    // //* Comparison Operators(>, <, >=, <=) & Relational Operators(>, <, >=, <=, ==, !=,)          
    // //? "সব Relational অপারেটরই Comparison অপারেটর, কিন্তু সব Comparison অপারেটর Relational অপারেটর নয়।"
    // int g = 30;
    // printf("a > g: %d\n", a > g);
    // printf("a < g: %d\n", a < g);
    // printf("a >= g: %d\n", a >= g);
    // printf("a <= g: %d\n", a <= g);
    // printf("a == g: %d\n", a == g);
    // printf("a != g: %d\n", a != g);

    // //* Logical Operators(&&, ||, !)
    // int h = 5;
    // printf("h: %d\n", h);
    // printf("h > 3 && h < 10: %d\n", h > 3 && h < 10);
    // printf("h > 3 || h < 10: %d\n", h > 3 || h < 10);
    // printf("!(h > 3): %d\n", !(h > 3));
    // printf("h > 3 && h > 10: %d\n", h > 3 && h > 10);
    // printf("h > 3 || h > 10: %d\n", h > 3 || h > 10);
    // printf("!(h == 3): %d\n", !(h == 3));

    // //* Conditional Operator(?:)
    // int ab;
    // int ba;
    // int ac;
    // scanf("%d %d", &ab, &ba);
    // ac = (ab>ba) ? ab : ba;
    // printf("ac: %d\n", ac);
    
    // //* Bitwise Operators(&, |, ^, ~, <<, >>)
    // int i = 5; //? 0101 in binary
    // printf("i: %d\n", i);
    // printf("i & 3: %d\n", i & 3); //? 3 is 0011 in binary, so 0101 & 0011 = 0001 (which is 1 in decimal)
    // printf("i | 3: %d\n", i | 3); //? 0101 | 0011 = 0111 (which is 7 in decimal)
    // printf("i ^ 3: %d\n", i ^ 3); //? 0101 ^ 0011 = 0110 (which is 6 in decimal)
    // printf("~i: %d\n", ~i); //? ~0101 = 1010 (which is -6 in decimal) 
    // //! Note: (~ = NOT) বিট উল্টানো 0101 ~ 1010
    // printf("i << 1: %d\n", i << 1); //? 0101 << 1 = 1010 (which is 10 in decimal) 
    // //! Note: (<< = Left Shift) বাম দিকে বিট শিফট করা 0101 << 1 = 1010
    // printf("i >> 1: %d\n", i >> 1); //? 0101 >> 1 = 0010 (which is 2 in decimal) 
    // //! Note: (>> = Right Shift) ডান দিকে বিট শিফট করা 0101 >> 1 = 0010

    // //* Comma Operator(,)
    // int x=5, y=10, z=15;
    // printf("x: %d, y: %d, z: %d\n", x, y, z);
    // int j = (1, 2, 3); //? j-এর মান 3 হবে, কারণ কমা অপারেটর সমস্ত এক্সপ্রেশন মূল্যায়ন করে এবং শেষটি ফেরত দেয়।
    // printf("j: %d\n", j);
    // int k=10, l=20, m=30;
    // int n = (k + l, k + m, l + m); //? The value of n will be 50 (l+m= 20+30= 50), as the comma operator evaluates all expressions and returns the last one
    // printf("n: %d\n", n);

    // //* sizeof Operator
    // char charSize; //? 1 dyte
    // signed char signedSize; //? 1 dyte
    // unsigned char unsignedCharSize; //? 1 dyte
    // int intSize; //? 2/4 dyte
    // signed int signetIntSize; //? 2 dyte
    // unsigned int unsignedIntSize; //? 2 dyte
    // short int shortIntSize; //? 2 dyte
    // long int longIntSize; //? 4 dyte
    // signed long signedLongSize; //? 4 dyte (signed long int)
    // unsigned long unsignedLongSize; //? 4 dyte (unsigned long int)
    // float floatSize; //? 4 dyte
    // double doubleSize; //? 8 dyte
    // long double longDoubleSize; //? 10 dyte
    //                                                 //? Note: The actual size of these data types can vary based on the system and compiler, but the sizes mentioned are common for many platforms.
    //                                                 //!And the format specifier can be of two types: %lu &%zu.
    // printf("char: %zu bytes\n", sizeof(charSize));
    // printf("signed char: %zu bytes\n", sizeof(signedSize));
    // printf("unsigned char: %zu bytes\n", sizeof(unsignedCharSize));
    // printf("int: %zu bytes\n", sizeof(intSize));
    // printf("signed int: %zu bytes\n", sizeof(signedSize));
    // printf("unsigned int: %zu bytes\n", sizeof(unsignedIntSize));
    // printf("short int: %zu bytes\n", sizeof(shortIntSize));
    // printf("long int: %zu bytes\n", sizeof(longIntSize));
    // printf("signed long: %zu bytes\n", sizeof(signedLongSize));
    // printf("unsigned long: %zu bytes\n", sizeof(unsignedLongSize));
    // printf("float: %zu bytes\n", sizeof(floatSize));
    // printf("double: %zu bytes\n", sizeof(doubleSize));
    // printf("long double: %zu bytes\n", sizeof(longDoubleSize));
    
    // char c;
    // printf("Enter a character: ");
    // scanf("%c", &c);  
    
    // //? %d displays the integer value of a character
    // //? %c displays the actual character
    // printf("ASCII value of %c = %d\n", c, c);


    // //*IF...Else Statement (if,else if, eles)
    // int as;
    // printf("Enter your number: ");
    // scanf("%d", &as);
    // if(as <= 10)
    // {
    //     printf("You entered less then 10 or equal to 10\n");
    // }
    // else if(as == 11)
    // {
    //     printf("You entered 11\n");
    // }
    // else if(as == 12)
    // {
    //     printf("You entered 12\n");
    // }
    // else if(as == 13)
    // {
    //     printf("You entered 13\n");
    // }
    // else if(as == 14)
    // {
    //     printf("You entered 14\n");
    // }
    // else if(as == 15)
    // {
    //     printf("You entered 15\n");
    // }
    // else if(as == 16)
    // {
    //     printf("You entered 16\n");
    // }
    // else if(as == 17)
    // {
    //     printf("You entered 17\n");
    // }
    // else if(as == 18)
    // {
    //     printf("You entered 18\n");
    // }
    // else if(as == 19)
    // {
    //     printf("You entered 19\n");
    // }
    // else if(as == 20)
    // {
    //     printf("You entered 20\n");
    // }
    // else
    // {
    //     printf("You entered a number greater than 20\n");
    // }


    // //*For Loop 
    // //? Initialization Expression = "প্রাথমিক মান নির্ধারণী রাশিমালা" বা সহজ কথায় "শুরু করার সমীকরণ" (i=1)
    // //? Test Expression = "পরীক্ষার রাশিমালা" বা সহজ কথায় "চলতে থাকার শর্ত" (i<=10)
    // //? Update Expression = "আপডেটের রাশিমালা" বা সহজ কথায় "প্রতিবার লুপের শেষে কি হবে" (++i / i=i+1)
    // // //!Example 1
    // int j, aq;
    // for(j=1; j<=10; j++){
    //     printf("%d ", j);   //printf("%d\n", j); নতুন লাইনে লুপ(loop)
    //     // printf("Enter your number: ");
    //     // scanf("%d", &aq);
    //     // if(j == aq){
    //     //     printf("\nYou entered 5, Exiting the Loop.\n");
    //     //     break; //? This will exit the loop when j is equal to 5
    //     // }
    // }
    // //!Example 2
    // int num, i, sum = 0;
    // printf("\nEnter your number:");
    // scanf("%d",&num);
    // for(i=1; i<=num; i+=1){
    //     sum = sum + i;
    //     //TODO: if(num == 10 || num == 20 || num == 30 || num == 40 || num == 50 || num == 60 || num == 70 || num == 80 || num == 90 || num == 100){
    //     //TODO: if(num % 10 == 0 && num <= 100){
    //     //TODO: if(num == 10, 20, 30, 40, 50, 60, 70, 80, 90, 100){
    //     //? if(num % 10 == 0){
    //     //?     printf("You entered %d, Exiting the Loop.\n", num);
    //     //?     continue; //? This will skip the rest of the loop when i is equal to num, but since it's the last iteration, it will just end the loop.
    //     //? }
    // }
    
    // printf("Sum = %d\n",sum);


    // //*While Loop
    // //? Test Expression = "পরীক্ষার রাশিমালা" বা সহজ কথায় "চলতে থাকার শর্ত" (i<=10)
    // //!Example
    // int count = 1;
    // while (count <= 10)
    // {
    //     printf("%d\n",count); //! Spaces cannot be given after the format specifier, otherwise the code may be incorrect.
    //     ++count;
    // }

    // //* Do...While Loop
    // //? The body of the loop is executed at least once, and then the test expression is evaluated. If the test expression is true, the loop continues; otherwise, it terminates.
    // //? Test Expression = "পরীক্ষার রাশিমালা" বা সহজ কথায় "চলতে থাকার শর্ত" (count <= 10)
    // //!Example
    // double number, sum = 0;
    // do {
    //     printf("Enter your intger number: ");
    //     scanf("%lf", &number);   //! Spaces cannot be given after the format specifier, otherwise the code may be incorrect.
    //     sum += number;
    // }
    // while(number != 0.0);
    
    // printf("Sum = %.2lf\n",sum);
    

    //* Break and Continue Statements
    //? Break Statement: লুপের ভিতরে ব্যবহৃত হলে, এটি লুপকে অবিলম্বে বন্ধ করে দেয় এবং লুপের পরবর্তী কোডটি চালায়। এটি সাধারণত একটি নির্দিষ্ট শর্ত পূরণ হলে লুপ থেকে বের হতে ব্যবহৃত হয়।
    //? Continue Statement: লুপের ভিতরে ব্যবহৃত হলে, এটি লুপের বর্তমান পুনরাবৃত্তি (iteration) বন্ধ করে দেয় এবং লুপের পরবর্তী পুনরাবৃত্তিতে চলে যায়। এটি সাধারণত একটি নির্দিষ্ট শর্ত পূরণ হলে লুপের বাকি অংশটি এড়িয়ে যেতে ব্যবহৃত হয়।
    // //!Example of Break Statement
    // int ad, sum = 0;
    // do
    // {
    //     printf("\nEnter your number: ");
    //     scanf("%d", &ad);
    //         sum += ad;
    //         printf("Sum = %d\n", sum);
    //         if (ad == 0)
    //         {
    //             printf("You entered 0, Exiting the Program.\n");
    //             break; //? This will exit the loop when the user enters 0
    //         }
    // } while (ad <= 100);
    // printf("Total Sum = %d\n", sum);
    
    // //* Switch Case Statement
    // //? Switch Case Statement: এটি একটি নিয়ন্ত্রণ কাঠামো যা একটি ভেরিয়েবল বা এক্সপ্রেশন এর মানের উপর ভিত্তি করে বিভিন্ন কোড ব্লক চালায়। এটি সাধারণত একটি নির্দিষ্ট মানের জন্য বিভিন্ন কার্য সম্পদন করতে ব্যবহৃত হয়।
    // //? Switch Case Statement এর মধ্যে, প্রতিটি "case" একটি নির্দিষ্ট মানের জন্য কোড ব্লক নির্ধারণ করে, এবং "default" একটি ডিফল্ট কোড ব্লক নির্ধারণ করে যা তখন চালানো হয় যখন কোন "case" এর মান মেলে ना।
    // //!Example
    // char operation;
    // double n1, n2;
    // printf("Enter an operator (+, -, *, /): ");
    // scanf("%c", &operation);  //! Spaces cannot be given after the format specifier, otherwise the code may be incorrect.
    // printf("Enter two numbers below-  \nFirst number: ");
    // scanf("%lf", &n1);  //! Spaces & line break (\n)  cannot be given after the format specifier, otherwise the code may be incorrect.
    // printf("Second Number: ");
    // scanf("%lf", &n2);  //! line break (\n) cannot be given after the format specifier, otherwise the code may be incorrect.
    // switch(operation)
    // {
    //     case '+':
    //         printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
    //         break;

    //     case '-':
    //         printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2);
    //         break;
    //     case '*':
    //         printf("%.2lf * %.2lf = %.2lf", n1, n2, n1*n2);
    //         break;
    //     case '/':
    //         printf("%.3lf / %.3lf = %.3lf", n1, n2, n1/ n2);
    //         break;
    //     default:
    //         printf("Error! Enter operator is incorrect.");
    // }


    // //* Goto Statement
    // //? Goto Statement: এটি একটি নিয়ন্ত্রণ কাঠামো যা প্রোগ্রামের নির্দিষ্ট অংশে সরাসরি লাফ দেয়। এটি সাধারণত একটি লেবেল (label) এর সাথে ব্যবহৃত হয়, যা একটি নির্দিষ্ট কোড ব্লক নির্দেশ করে। Goto Statement সাধারণত প্রোগ্রামের প্রবাহ নিয়ন্ত্রণ করতে ব্যবহৃত হয়, তবে এটি প্রোগ্রামের পাঠযোগ্যতা এবং রক্ষণাবেক্ষণকে কমিয়ে দিতে পারে, তাই এটি সাধারণত পরামর্শ দেওয়া হয় না।
    // char operation, raw;
    // double n1, n2;

    // jamp:
    // printf("Enter an operator (+, -, *, /): ");
    // scanf("%c", &operation);
    // printf("Enter two numbers below-  \nFirst number: ");
    // scanf("%lf", &n1);
    // printf("Second Number: ");
    // scanf("%lf", &n2);
    // switch(operation)
    // {
    //     case '+':
    //         printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
    //         break;

    //     case '-':
    //         printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2);
    //         break;
    //     case '*':
    //         printf("%.2lf * %.2lf = %.2lf", n1, n2, n1*n2);
    //         break;
    //     case '/':
    //         printf("%.3lf / %.3lf = %.3lf", n1, n2, n1/ n2);
    //         break;
    //     default:
    //         printf("Error! Enter operator is incorrect. please try again.\n");
    //         scanf("%*c", &raw); //? This will consume the newline character left in the input buffer by the previous scanf, allowing the next input to be read correctly.
    //         goto jamp; //? This will jump back to the label "jamp" and ask the user to enter the operator and numbers again.
    // }


    //*C Function
    //? A function is a block of code that performs a specific task. It can take input in the form of parameters and can return a value. Functions are used to break down a program into smaller, manageable pieces, making it easier to read, maintain, and debug.
    //? In C, a function is defined with a return type, a name, and a parameter list. The body of the function contains the code that performs the task. Functions can be called from other parts of the program to execute the code within them.
    //? Functions can be categorized into 2 types:-----------------------------
        //? built-in functions or Standard library functions (provided by the C standard library) and user-defined functions (created by the programmer). Examples of built-in functions include printf(), scanf(), and strlen(), while 
        //? user-defined functions can be created to perform specific tasks as needed.
    //? Standard library functions are pre-defined functions that are included in the C standard library. They provide a wide range of functionality, such as input/output operations, string manipulation, mathematical calculations, and more. These functions are declared in header files, which can be included in a C program using the #include directive. Some commonly used header files and their descriptions include:
        //*  C Header Files	     Description
        //?     <assert.h>	 Program assertion functions
        //!     <ctype.h>	 Character type functions
        //?     <locale.h>	 Localization functions
        //!     <math.h>	 Mathematics functions
        //?     <setjmp.h>	 Jump functions
        //?     <signal.h>	 Signal handling functions
        //?     <stdarg.h>	 Variable arguments handling functions
        //TODO: <stdio.h>	 Standard Input/Output functions
        //?     <stdlib.h>	 Standard Utility functions
        //!     <string.h>	 String handling functions
        //?     <time.h>	 Date time functions
    //? Example of a user-defined function
            /*  #include <stdio.h>
            void functionName()
            {
                ... .. ...
                ... .. ...
            }

            int main()
            {
                ... .. ...
                ... .. ...

                functionName();
                
                ... .. ...
                ... .. ...
            } */

    greet();             //? Function Call

    printf("\nWelcome to cProgramming!! \nhasanSir!!! \n");
    return 0;
}

//* user-defined functions
void greet() {                            //? Function Definition
    printf("\nHello World!");
    return;                               //? return statement 
    //! return statement is optional in a void function, but it can be used to exit the function early if needed.
}