// #include <stdio.h>

// int main() {

// //? Break Statement: লুপের ভিতরে ব্যবহৃত হলে, এটি লুপকে অবিলম্বে বন্ধ করে দেয় এবং লুপের পরবর্তী কোডটি চালায়। এটি সাধারণত একটি নির্দিষ্ট শর্ত পূরণ হলে লুপ থেকে বের হতে ব্যবহৃত হয়।
// //? Continue Statement: লুপের ভিতরে ব্যবহৃত হলে, এটি লুপের বর্তমান পুনরাবৃত্তি (iteration) বন্ধ করে দেয় এবং লুপের পরবর্তী পুনরাবৃত্তিতে চলে যায়। এটি সাধারণত একটি নির্দিষ্ট শর্ত পূরণ হলে লুপের বাকি অংশটি এড়িয়ে যেতে ব্যবহৃত হয়।
//     //! break statement
//     for (int i = 1; i <= 10; i++) {
//         if (i == 5) {
//             break; //? This will exit the loop when i is equal to 5
//         }
//         printf("%d ", i);
//     }
//     printf("\n");

//     //! continue statement
//     for (int i = 1; i <= 10; i++) {
//         if (i == 5) {
//             continue; //? This will skip the rest of the loop when i is equal to 5
//         }
//         printf("%d ", i);
//     }
//     printf("\n");

//     return 0;
// }