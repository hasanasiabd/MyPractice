// #include <stdio.h>

// int main() {
// //*For Loop 
//     //? Initialization Expression = "প্রাথমিক মান নির্ধারণী রাশিমালা" বা সহজ কথায় "শুরু করার সমীকরণ" (i=1)
//     //? Test Expression = "পরীক্ষার রাশিমালা" বা সহজ কথায় "চলতে থাকার শর্ত" (i<=10)
//     //? Update Expression = "আপডেটের রাশিমালা" বা সহজ কথায় "প্রতিবার লুপের শেষে কি হবে" (++i / i=i+1)
//     // //!Example 1
//     int j, aq;
//     for(j=1; j<=10; j++){
//         printf("%d ", j);   //printf("%d\n", j); নতুন লাইনে লুপ(loop)
//         // printf("Enter your number: ");
//         // scanf("%d", &aq);
//         // if(j == aq){
//         //     printf("\nYou entered 5, Exiting the Loop.\n");
//         //     break; //? This will exit the loop when j is equal to 5
//         // }
//     }
//     //!Example 2
//     int num, i, sum = 0;
//     printf("\nEnter your number:");
//     scanf("%d",&num);
//     for(i=1; i<=num; i+=1){
//         sum = sum + i;
//         //TODO: if(num == 10 || num == 20 || num == 30 || num == 40 || num == 50 || num == 60 || num == 70 || num == 80 || num == 90 || num == 100){
//         //TODO: if(num % 10 == 0 && num <= 100){
//         //TODO: if(num == 10, 20, 30, 40, 50, 60, 70, 80, 90, 100){
//         //? if(num % 10 == 0){
//         //?     printf("You entered %d, Exiting the Loop.\n", num);
//         //?     continue; //? This will skip the rest of the loop when i is equal to num, but since it's the last iteration, it will just end the loop.
//         //? }
//     }
    
//     printf("Sum = %d\n",sum);

    
//     return 0;
// }