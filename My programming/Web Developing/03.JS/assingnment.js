console.log(`This is assignment of JavaScript(js) Language.`);

//? 1. variable কী? (What is variable?)
//* variable হলো একটি container যা ডাটা বা মান সংরক্ষণ করে। এটি একটি নামযুক্ত স্থান যা প্রোগ্রামে ডাটা সংরক্ষণ এবং পরিচালনা করতে ব্যবহৃত হয়। variable এর মাধ্যমে আমরা ডাটা স্টোর করতে পারি এবং পরে সেই ডাটাকে ব্যবহার করতে পারি। variable এর মান পরিবর্তন করা যায়, তাই এটি একটি পরিবর্তনশীল container হিসেবে কাজ করে। variable এর সাহায্যে আমরা প্রোগ্রামে ডাটা সংরক্ষণ এবং পরিচালনা করতে পারি, যা আমাদের কোডকে আরও কার্যকর এবং পুনঃব্যবহারযোগ্য করে তোলে।

//? 2. variable কিভাবে ডিক্লেয়ার করা হয়? (How to declare a variable?)
//* variable ডিক্লেয়ার করার জন্য আমরা var, let, বা const কিওয়ার্ড ব্যবহার করতে পারি। var একটি পুরানো কিওয়ার্ড যা এখন কম ব্যবহৃত হয়, কারণ এটি কিছু অসুবিধা সৃষ্টি করতে পারে। let একটি নতুন কিওয়ার্ড যা ব্লক-স্কোপড variable তৈরি করে, যা কোডের নিরাপত্তা এবং স্থিতিশীলতা বাড়ায়। const একটি কিওয়ার্ড যা একটি অপরিবর্তনীয় variable তৈরি করে, যার মান একবার সেট করা হলে পরিবর্তন করা যায় না। variable ডিক্লেয়ার করার সময়, আমরা variable এর নাম এবং মান নির্ধারণ করতে পারি। উদাহরণস্বরূপ:

//? 3. variable এর নামকরণ কিভাবে করা হয়? (How to name a variable?)
//* variable এর নামকরণ করার সময় কিছু নিয়ম অনুসরণ করতে হয়। variable এর নাম অবশ্যই একটি অক্ষর, আন্ডারস্কোর (_), বা ডলার সাইন ($) দিয়ে শুরু হতে হবে। variable এর নামের মধ্যে স্পেস ব্যবহার করা যায় না, তবে ক্যামেল কেস (camelCase) বা আন্ডারস্কোর (snake_case) ব্যবহার করা যেতে পারে। variable এর নাম সংবেদনশীল (case-sensitive) হয়, অর্থাৎ myVariable এবং MyVariable দুটি আলাদা variable হিসেবে বিবেচিত হবে। variable এর নাম অবশ্যই একটি বৈধ identifier হতে হবে এবং reserved keywords (যেমন: var, let, const, function ইত্যাদি) ব্যবহার করা যাবে না।

//? 4. variable এর ডাটা টাইপ কি কি? (What are the data types of a variable?)
//* variable এর ডাটা টাইপ হলো বিভিন্ন ধরনের ডাটা যা variable এ সংরক্ষণ করা যায়। JavaScript এ প্রধানত primitive data types এবং non-primitive data types রয়েছে। Primitive data types এর মধ্যে string, number, boolean, null, undefined, এবং symbol অন্তর্ভুক্ত। Non-primitive data types এর মধ্যে object, array, এবং function অন্তর্ভুক্ত। variable এর ডাটা টাইপ নির্ধারণ করে যে variable এ কোন ধরনের ডাটা সংরক্ষণ করা হবে এবং সেই ডাটার সাথে কোন ধরনের অপারেশন করা যাবে। variable এর ডাটা টাইপ চেক করার জন্য typeof operator ব্যবহার করা হয়।

//? 5. variable এর ডাটা টাইপ কিভাবে চেক করা হয়? (How to check the data type of a variable?)
//* variable এর ডাটা টাইপ চেক করার জন্য আমরা typeof operator ব্যবহার করতে পারি। typeof operator একটি unary operator যা variable এর ডাটা টাইপ নির্ধারণ করে এবং একটি string হিসেবে রিটার্ন করে। উদাহরণস্বরূপ, যদি আমাদের একটি variable strType থাকে যার মান "Hello", তাহলে typeof strType রিটার্ন করবে "string"। একইভাবে, যদি আমাদের একটি variable numType থাকে যার মান 42, তাহলে typeof numType রিটার্ন করবে "number"। typeof operator ব্যবহার করে আমরা variable এর ডাটা টাইপ চেক করতে পারি এবং সেই অনুযায়ী আমাদের কোডে লজিক প্রয়োগ করতে পারি।

//? 6. variable এর ডাটা টাইপ কিভাবে পরিবর্তন করা হয়? (How to change the data type of a variable?)
//* variable এর ডাটা টাইপ পরিবর্তন করার জন্য আমরা type conversion বা type coercion ব্যবহার করতে পারি। type conversion হলো একটি explicit প্রক্রিয়া যেখানে আমরা একটি variable এর ডাটা টাইপ ম্যানুয়ালি পরিবর্তন করি, যেমন parseInt(), parseFloat(), String(), Boolean() ইত্যাদি ফাংশন ব্যবহার করে। type coercion হলো একটি implicit প্রক্রিয়া যেখানে JavaScript স্বয়ংক্রিয়ভাবে variable এর ডাটা টাইপ পরিবর্তন করে যখন আমরা বিভিন্ন ধরনের ডাটা একসাথে অপারেশন করি, যেমন addition operator (+) ব্যবহার করলে যদি একটি variable string হয় এবং অন্যটি number হয়, তাহলে JavaScript number কে string এ কনভার্ট করে এবং concatenation করে। variable এর ডাটা টাইপ পরিবর্তন করার সময় আমাদের সতর্ক থাকতে হবে যাতে আমরা অপ্রত্যাশিত ফলাফল থেকে বাঁচতে পারি।

//? 7. variable এর সাথে কোন কোন অপারেটর ব্যবহার করা হয়? (What operators are used with variables?)
//* variable এর সাথে বিভিন্ন ধরনের অপারেটর ব্যবহার করা হয়, যেমন arithmetic operators (+, -, *, /, %), assignment operators (=, +=, -=, *=, /=), comparison operators (==, ===, !=, !==, >, <, >=, <=), logical operators (&&, ||, !), এবং bitwise operators (&, |, ^, ~, <<, >>, >>>)। এই অপারেটরগুলি variable এর মানের উপর বিভিন্ন ধরনের অপারেশন করতে ব্যবহৃত হয়। উদাহরণস্বরূপ, addition operator (+) ব্যবহার করে আমরা দুটি variable এর মান যোগ করতে পারি, assignment operator (=) ব্যবহার করে আমরা একটি variable এ মান অ্যাসাইন করতে পারি, comparison operator (==) ব্যবহার করে আমরা দুটি variable এর মান তুলনা করতে পারি এবং logical operator (&&) ব্যবহার করে আমরা দুটি boolean variable এর মধ্যে logical AND অপারেশন করতে পারি।

//? 8. variable এর সাথে কোন কোন মেথড ব্যবহার করা হয়? (What methods are used with variables?)
//* variable এর সাথে বিভিন্ন ধরনের মেথড ব্যবহার করা হয়, যেমন string methods (toUpperCase(), toLowerCase(), substring()), array methods (push(), pop(), shift(), unshift()), এবং object methods (hasOwnProperty(), keys(), values())। এই মেথডগুলি variable এর মানের উপর বিভিন্ন ধরনের অপারেশন করতে ব্যবহৃত হয়।

//? 9. variable এর সাথে কোন কোন ফাংশন ব্যবহার করা হয়? (What functions are used with variables?)
// * variable এর সাথে বিভিন্ন ধরনের ফাংশন ব্যবহার করা হয়, যেমন parseInt(), parseFloat(), String(), Boolean(), Math.abs(), Math.round(), Math.ceil(), Math.floor(), Math.random() ইত্যাদি। এই ফাংশনগুলি variable এর মানের উপর বিভিন্ন ধরনের অপারেশন করতে ব্যবহৃত হয়।

//? 10. variable এর সাথে কোন কোন লজিক ব্যবহার করা হয়? (What logic is used with variables?)
//* variable এর সাথে বিভিন্ন ধরনের লজিক ব্যবহার করা হয়, যেমন conditional statements (if, else if, else), loops (for, while, do-while), switch statements ইত্যাদি। এই লজিকগুলি variable এর মানের উপর ভিত্তি করে বিভিন্ন ধরনের অপারেশন করতে ব্যবহৃত হয়।

//? 11. number type variable কি ও কি ভাবে লিখা হয়? (What is a number type variable and how to write it?)
//* number type variable হলো একটি variable যা সংখ্যার মান সংরক্ষণ করে। JavaScript এ number type variable লিখতে আমরা সরাসরি সংখ্যাটি variable এ অ্যাসাইন করতে পারি, যেমন var numType = 42; অথবা var numType = 3.14;। number type variable এর মান integer (পূর্ণসংখ্যা) বা floating-point (দশমিক সংখ্যা) হতে পারে। number type variable এর সাথে আমরা arithmetic operators ব্যবহার করে বিভিন্ন ধরনের গণনা করতে পারি, যেমন addition, subtraction, multiplication, division ইত্যাদি।

//? 12. string type variable কি ও কি ভাবে লিখা হয়? (What is a string type variable and how to write it?)
//* string type variable হলো একটি variable যা টেক্সট বা অক্ষরের মান সংরক্ষণ করে। JavaScript এ string type variable লিখতে আমরা single quotes (' '), double quotes (" "), অথবা backticks (` `) ব্যবহার করতে পারি, যেমন var strType = 'Hello'; অথবা var strType = "Hello"; অথবা var strType = `Hello`;। string type variable এর মধ্যে আমরা যেকোনো ধরনের টেক্সট বা অক্ষর সংরক্ষণ করতে পারি, এবং আমরা string methods ব্যবহার করে string type variable এর উপর বিভিন্ন ধরনের অপারেশন করতে পারি, যেমন toUpperCase(), toLowerCase(), substring() ইত্যাদি।

//? 13. boolean type variable কি ও কি ভাবে লিখা হয়? (What is a boolean type variable and how to write it?)
//* boolean type variable হলো একটি variable যা true বা false মান সংরক্ষণ করে। JavaScript এ boolean type variable লিখতে আমরা সরাসরি true বা false শব্দটি variable এ অ্যাসাইন করতে পারি, যেমন var boolType = true; অথবা var boolType = false;। boolean type variable সাধারণত logical operations এবং conditional statements এ ব্যবহৃত হয়, যেখানে আমরা কোন শর্ত সত্য (true) বা মিথ্যা (false) তা নির্ধারণ করতে চাই।

//? 14. toUpperCase() মেথড কি ও কি ভাবে ব্যবহার করা হয়? (What is the toUpperCase() method and how to use it?)
//* toUpperCase() মেথড হলো একটি string method যা একটি string এর সব অক্ষরকে uppercase (বড় হাতের অক্ষর) এ রূপান্তর করে। এই মেথডটি ব্যবহার করতে আমরা একটি string variable এর সাথে toUpperCase() মেথড কল করতে পারি, যেমন var strType = 'hello'; var upperStr = strType.toUpperCase(); console.log(upperStr); এই উদাহরণে, strType variable এর মান 'hello' থেকে 'HELLO' এ রূপান্তরিত হবে এবং upperStr variable এ সংরক্ষণ করা হবে।

//? 15. toLowerCase() মেথড কি ও কি ভাবে ব্যবহার করা হয়? (What is the toLowerCase() method and how to use it?)
//* toLowerCase() মেথড হলো একটি string method যা একটি string এর সব অক্ষরকে lowercase (ছোট হাতের অক্ষর) এ রূপান্তর করে। এই মেথডটি ব্যবহার করতে আমরা একটি string variable এর সাথে toLowerCase() মেথড কল করতে পারি, যেমন var strType = 'HELLO'; var lowerStr = strType.toLowerCase(); console.log(lowerStr); এই উদাহরণে, strType variable এর মান 'HELLO' থেকে 'hello' এ রূপান্তরিত হবে এবং lowerStr variable এ সংরক্ষণ করা হবে।

//? 16. javaScript এ কোন কোন অপারেটর ব্যবহার করা হয়? (What operators are used in JavaScript?)
//* JavaScript এ বিভিন্ন ধরনের অপারেটর ব্যবহার করা হয়, যেমন arithmetic operators (+, -, *, /, %), assignment operators (=, +=, -=, *=, /=), comparison operators (==, ===, !=, !==, >, <, >=, <=), logical operators (&&, ||, !), এবং bitwise operators (&, |, ^, ~, <<, >>, >>>)। এই অপারেটরগুলি variable এর মানের উপর বিভিন্ন ধরনের অপারেশন করতে ব্যবহৃত হয়। উদাহরণস্বরূপ, addition operator (+) ব্যবহার করে আমরা দুটি variable এর মান যোগ করতে পারি, assignment operator (=) ব্যবহার করে আমরা একটি variable এ মান অ্যাসাইন করতে পারি, comparison operator (==) ব্যবহার করে আমরা দুটি variable এর মান তুলনা করতে পারি এবং logical operator (&&) ব্যবহার করে আমরা দুটি boolean variable এর মধ্যে logical AND অপারেশন করতে পারি।

//? 17. Math.abs() ফাংশন এর ব্যবহার লিখুন (What is the use of Math.abs() function?)
//* Math.abs() ফাংশন হলো একটি JavaScript ফাংশন যা একটি সংখ্যার absolute value (পরম মান) নির্ধারণ করে। এই ফাংশনটি ব্যবহার করতে আমরা Math.abs() ফাংশন কল করতে পারি এবং তার মধ্যে একটি number type variable বা একটি সংখ্যা প্রদান করতে পারি, যেমন var num1 = -30; var absValue = Math.abs(num1); console.log(absValue); এই উদাহরণে, num1 variable এর মান -30 থেকে 30 এ রূপান্তরিত হবে এবং absValue variable এ সংরক্ষণ করা হবে।

//? 18. Math.round() ফাংশন এর ব্যবহার লিখুন (What is the use of Math.round() function?)
//* Math.round() ফাংশন হলো একটি JavaScript ফাংশন যা একটি সংখ্যাকে নিকটতম পূর্ণসংখ্যায় রাউন্ড করে। এই ফাংশনটি ব্যবহার করতে আমরা Math.round() ফাংশন কল করতে পারি এবং তার মধ্যে একটি number type variable বা একটি সংখ্যা প্রদান করতে পারি, যেমন var votar = 0.000001; var roundedValue = Math.round(votar); console.log(roundedValue); এই উদাহরণে, votar variable এর মান 0.000001 থেকে 0 এ রাউন্ড হবে এবং roundedValue variable এ সংরক্ষণ করা হবে।

//? 19. Math.ceil() ফাংশন এর ব্যবহার লিখুন (What is the use of Math.ceil() function?)
//* Math.ceil() ফাংশন হলো একটি JavaScript ফাংশন যা একটি সংখ্যাকে নিকটতম উপরের পূর্ণসংখ্যায় সিলিং করে। এই ফাংশনটি ব্যবহার করতে আমরা Math.ceil() ফাংশন কল করতে পারি এবং তার মধ্যে একটি number type variable বা একটি সংখ্যা প্রদান করতে পারি, যেমন var votar = 0.000001; var ceilValue = Math.ceil(votar); console.log(ceilValue); এই উদাহরণে, votar variable এর মান 0.000001 থেকে 1 এ সিলিং হবে এবং ceilValue variable এ সংরক্ষণ করা হবে।

//? 20. Math.floor() ফাংশন এর ব্যবহার লিখুন (What is the use of Math.floor() function?)
//* Math.floor() ফাংশন হলো একটি JavaScript ফাংশন যা একটি সংখ্যাকে নিকটতম নিচের পূর্ণসংখ্যায় ফ্লোর করে। এই ফাংশনটি ব্যবহার করতে আমরা Math.floor() ফাংশন কল করতে পারি এবং তার মধ্যে একটি number type variable বা একটি সংখ্যা প্রদান করতে পারি, যেমন var votar = 0.99999; var floorValue = Math.floor(votar); console.log(floorValue); এই উদাহরণে, votar variable এর মান 0.99999 থেকে 0 এ ফ্লোর হবে এবং floorValue variable এ সংরক্ষণ করা হবে।

//? 21. Math.random() ফাংশন এর ব্যবহার লিখুন (What is the use of Math.random() function?)
//* Math.random() ফাংশন হলো একটি JavaScript ফাংশন যা 0 থেকে 1 এর মধ্যে একটি র‍্যান্ডম দশমিক সংখ্যা রিটার্ন করে। এই ফাংশনটি ব্যবহার করতে আমরা Math.random() ফাংশন কল করতে পারি, যেমন var lotary = Math.random(); console.log(lotary); এই উদাহরণে, lotary variable এ 0 থেকে 1 এর মধ্যে একটি র‍্যান্ডম দশমিক সংখ্যা সংরক্ষণ করা হবে এবং তা কনসোলে প্রদর্শিত হবে। আমরা Math.random() ফাংশনকে একটি নির্দিষ্ট পরিসরে র‍্যান্ডম সংখ্যা পেতে ব্যবহার করতে পারি, যেমন var lotary = Math.random() * 100; console.log(lotary); এই উদাহরণে, lotary variable এ 0 থেকে 100 এর মধ্যে একটি র‍্যান্ডম দশমিক সংখ্যা সংরক্ষণ করা হবে।


