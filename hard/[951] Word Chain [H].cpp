/*
####  Word Chain  ####

A word-chain is an array of words, where the next word is formed by changing exactly one letter from the previous word. We do not add or subtract letters from words, only change them.
Create a function that returns true if an array is a word-chain and false otherwise.


[Examples]

___
isWordChain(["meal", "seal", "seat", "beat", "beet"]) ➞ true
// Change "m" in "meal" to get "seal", "l" to get "seat", etc.

isWordChain(["red", "bed", "bet", "bat", "sat"]) ➞ true

isWordChain(["red", "bat", "cat", "sat"]) ➞ false
// Do not change more than one letter ("red" and "bat").

isWordChain(["read", "red", "led", "lad", "lady"]) ➞ false
// Do not add or subtract letters.
_____



[Notes]

___
*) Each word in a word chain has equal length.
*) All words will be in lower case.
___



[arrays] [strings] [validation] 



-------------------------------------------------------------------
[Resources]
_________
std::string::at
http://www.cplusplus.com/reference/string/string/at/
Returns a reference to the character at position pos in the string. The function automatically checks whether pos is the valid position of a character in the string (i …
_________
_________
std::vector
http://www.cplusplus.com/reference/vector/vector/
Are sequence containers representing arrays that can change in size. Just like arrays, vectors use contiguous storage locations for their elements, which means that th …
_________

*/
//Your code should go here:

