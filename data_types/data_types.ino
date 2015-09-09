#include <math.h>

/* Data Types:
There are a few primitive types available and common to all
programming languages.

Here is a brief introduction, with some words of warning.
Since we are operating in a binary domain with limited precision,
numbers do not always behave they way they should.
*/

//We will begin with the types and various flavors of integers
byte eight_bit = 0;
byte unsigned_whole_number = 255;
//bytes on the arduino default to being unsigned integers, 
//which gives them a range of 0-255;

char also_eight_bits = 'a';
char one_ascii_character = '!';
//chars, for the arduino, represent a single ascii symbol.
//they are represented internally as signed 8 bit integers.

short sixteen_bits = 32767; //from -36768 to 32767
//a short is similar to a byte but 16 bits.

int either_16_or_32_bits = 2147483647; //on older boards, it's 16.
//on newer boards it's 32 bits. You can check with sizeOf(int);
//32 bits gives you a range of -2147483648, 2147483647

long thirty_two_bits = 2147483647;
//there is a long type, but it is also just a signed 32 bit int.

//all of these types can be designated unsigned to double their range,
//but eliminate the use of negative numbers.
//Beware of overflow when using them!

long will_overflow = 2147483647+1; // == -2147483648
long will_also_overflow = -2147483648-1; // == 2147483647


float float_version = 1.6e18f;
double double_version = 1.6e36;
//the problem with floats and doubles is that 
//equivalency tests are often unreliable because of
//loss of precision during operations.

double equals_two = 1.9999999999999999999999999;
/*
The above number will be rounded up to two.
This occurs because we only have so many bits
available to represent the numbers, and rounding must take place
to keep things somewhat accurate.

You should also be aware of the chance of overflow and underflow 
that can occur when you surpass the range that these numbers can 
represent, and also when you attempt an operation that cannot
be represented with the amount of precision available.
(such as subtracting a very small number from a very large number,
the resulting change will get lost in the rounding and normalizing 
stage of the add/subtract operation.)

*/

String self_explanatory = "This is a string of characters!";
char pick_one_out = self_explanatory[0]; // 'T'
/*
You can access individual items in a string with the
array notation of [] with the index (starting at 0) you want to 
grab inside of the brackets.

Now that we're discussing arrays, you can create blocks of memory
to keep track of multiple items. These are known as 'arrays'.
They can be created like this:
*/

int an_array_of_ints[5];
//an_array_of_ints[0] = 1; //this doesn't compile on mine, but maybe this isn't universal?
/*
We have declared an array of 5 integers.
**Arrays (and variables in general) are not always guaranteed to be 
initialized as 0 or anything else until you assign a value to them!* 
This array could be full of garbage data or old data until
we assign values to the items inside of it.

You should be aware of this while programming.
*/

//now on to structs!
struct Student {
  long person_number;
  String first_name;
  String last_name;
  String enrolled_classes[8];
};

/*
A great way to keep track of related data is to declare a structure
to hold that data. Their declarations are a little funky, and 
vary from language to language. Structs are sort of the precursor
to Classes, and only allow data to be grouped together.
They (or pointers to them) are passed into functions when you need 
to operate on the data they contain.
Once they are declared, you can create them just like a 
primitive type.

There's always a catch with the Arduino, and in this case we can't 
use the usual struct.struct_data notation to *assign* data.

You can use it to grab data, but not to assign items. You
have to reassign the whole struct at a time.
*/

Student mike = { 
   88500893, //person number
  "Mike", "Person",  //first , last
  {"Math", "Science", "Writing","Art History"} //schedule
};

String will_be_Math = mike.enrolled_classes[0];
String will_be_Mike = mike.first_name;
//mike.enrolled_classes[0] = "P.E.";

//this even more powerful when you realize
//you can now make an array of students...

Student class_of_2016[255]; //though we can't create huge arrays on the arduino...

//There are problems with arrays, sometimes you can't
//find a contiguous block of memory big enough to fit
// a large array.

//There are many other data structures, linked lists,
//hash maps, binary trees, but we will cover them later (if at all).
//Feel free to look them up on your own or ask me about them
//in person!

void setup(){
}

void loop(){
}


