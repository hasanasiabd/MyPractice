// #include <stdio.h>

// int main() {
//     //* Goto Statement
//     //? Goto Statement: এটি একটি নিয়ন্ত্রণ কাঠামো যা প্রোগ্রামের নির্দিষ্ট অংশে সরাসরি লাফ দেয়। এটি সাধারণত একটি লেবেল (label) এর সাথে ব্যবহৃত হয়, যা একটি নির্দিষ্ট কোড ব্লক নির্দেশ করে। Goto Statement সাধারণত প্রোগ্রামের প্রবাহ নিয়ন্ত্রণ করতে ব্যবহৃত হয়, তবে এটি প্রোগ্রামের পাঠযোগ্যতা এবং রক্ষণাবেক্ষণকে কমিয়ে দিতে পারে, তাই এটি সাধারণত পরামর্শ দেওয়া হয় না।
//     char operation, raw;
//     double n1, n2;

//     jamp:
//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &operation);
//     printf("Enter two numbers below-  \nFirst number: ");
//     scanf("%lf", &n1);
//     printf("Second Number: ");
//     scanf("%lf", &n2);
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
//             printf("Error! Enter operator is incorrect. please try again.\n");
//             scanf("%*c", &raw); //? This will consume the newline character left in the input buffer by the previous scanf, allowing the next input to be read correctly.
//             goto jamp; //? This will jump back to the label "jamp" and ask the user to enter the operator and numbers again.
//     }

//     return 0;
// }