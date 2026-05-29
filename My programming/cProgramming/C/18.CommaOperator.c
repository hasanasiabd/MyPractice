// #include <stdio.h>

// int main() {
//     int a = 10;
//     int b = 5;
//     int c;
// //* Comma Operator(,)
//     c = (a, b);  // Comma operator
//     printf("Comma operator: %d\n", c); //? The value of c will be 5, as the comma operator evaluates both a and b, but returns the value of the last expression (b in this case).
    
//     int x=5, y=10, z=15;
//     printf("x: %d, y: %d, z: %d\n", x, y, z);
//     int j = (1, 2, 3); //? j-এর মান 3 হবে, কারণ কমা অপারেটর সমস্ত এক্সপ্রেশন মূল্যায়ন করে এবং শেষটি ফেরত দেয়।
//     printf("j: %d\n", j);
//     int k=10, l=20, m=30;
//     int n = (k + l, k + m, l + m); //? The value of n will be 50 (l+m= 20+30= 50), as the comma operator evaluates all expressions and returns the last one
//     printf("n: %d\n", n);

//     return 0;
// }