// #include <stdio.h>

// int main() {

// //? Switch Case Statement: এটি একটি নিয়ন্ত্রণ কাঠামো যা একটি ভেরিয়েবল বা এক্সপ্রেশন এর মানের উপর ভিত্তি করে বিভিন্ন কোড ব্লক চালায়। এটি সাধারণত একটি নির্দিষ্ট মানের জন্য বিভিন্ন কার্য সম্পদন করতে ব্যবহৃত হয়।
// //? Switch Case Statement এর মধ্যে, প্রতিটি "case" একটি নির্দিষ্ট মানের জন্য কোড ব্লক নির্ধারণ করে, এবং "default" একটি ডিফল্ট কোড ব্লক নির্ধারণ করে যা তখন চালানো হয় যখন কোন "case" এর মান মেলে नা।
//     //!Example

//     char operation;
//     double n1, n2;
//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &operation);  //! Spaces cannot be given after the format specifier, otherwise the code may be incorrect.
//     printf("Enter two numbers below-  \nFirst number: ");
//     scanf("%lf", &n1);  //! Spaces & line break (\n)  cannot be given after the format specifier, otherwise the code may be incorrect.
//     printf("Second Number: ");
//     scanf("%lf", &n2);  //! line break (\n) cannot be given after the format specifier, otherwise the code may be incorrect.
//     switch(operation)
//     {
//         case '+':
//             printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
//             break;

//         case '-':
//             printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2);
//             break;
//         case '*':
//             printf("%.2lf * %.2lf = %.2lf", n1, n2, n1*n2);
//             break;
//         case '/':
//             printf("%.3lf / %.3lf = %.3lf", n1, n2, n1/ n2);
//             break;
//         default:
//             printf("Error! Enter operator is incorrect.");
//     }

//     return 0;
// }