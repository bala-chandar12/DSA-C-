/*
####  Building up a Word  ####

You are given an input array of strings, ordered by ascending length.
Write a function that returns true if, for each pair of consecutive strings, the second string can be formed from the first by adding a single letter either at the beginning or end.


[Examples]

___
canBuild(["a", "at", "ate", "late", "plate", "plates"]) ➞ true

canBuild(["a", "at", "ate", "late", "plate", "plater", "platter"]) ➞ false
// "platter" is formed by adding "t" in the middle of "plater"

canBuild(["it", "bit", "bite", "biters"]) ➞ false
// "biters" is formed by adding two letters - we can only add one

canBuild(["mean", "meany"]) ➞ true
_____



[Notes]

___
*) Return false if a word is NOT formed by adding only one letter.
*) Return false if the letter is added to the middle of the previous word.
*) Letters in tests will all be lower case.
___



[arrays] [strings] [validation] 



-------------------------------------------------------------------
[Resources]
_________
std::string::substr
http://www.cplusplus.com/reference/string/string/substr/
Returns a newly constructed string object with its value initialized to a copy of a substring of this object. The substring is the portion of the object that starts at …
_________

*/
//Your code should go here:

