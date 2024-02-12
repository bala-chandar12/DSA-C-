/*
####  Valid Name  ####

For this exercise, keep in mind the following definitions:

A valid name is a name written in one of the following ways:
___
*) H. Wells
*) H. G. Wells
*) Herbert G. Wells
*) Herbert George Wells
___

The following names are invalid:
___
*) Herbert or Wells (single names not allowed)
*) H Wells or H. G Wells (initials must end with dot)
*) h. Wells or H. wells or h. g. Wells (incorrect capitalization)
*) H. George Wells (middle name expanded, while first still left as initial)
*) H. G. W. (last name is not a word)
*) Herb. G. Wells (dot only allowed after initial, not word)
___



[Rules]


Your task is to write a function that determines whether a name is valid or not. Return true if the name is valid, false otherwise.


[Examples]

___
validName("H. Wells") ➞ true

validName("H. G. Wells") ➞ true

validName("Herbert G. Wells") ➞ true

validName("Herbert") ➞ false
// Must be 2 or 3 words

validName("h. Wells") ➞ false
// Incorrect capitalization

validName("H Wells") ➞ false
// Missing dot after initial

validName("H. George Wells") ➞ false
// Cannot have: initial first name + word middle name

validName("H. George W.") ➞ false
// Last name cannot be initial

validName("Herb. George Wells") ➞ false
// Words cannot end with a dot (only initials can)
_____



[Notes]

___
*) A term is either an initial or word.
*) Initials and words are disjoint sets.
___



[conditions] [functional_programming] [regex] 



-------------------------------------------------------------------
[Resources]
_________
DevDocs sstream
https://devdocs.io/cpp/header/sstream
Stringstreams and stringbufs for word extraction.
_________
_________
DevDocs regex
https://devdocs.io/cpp/regex
Regular expressions library provides a class that represents regular expressions.
_________

*/
//Your code should go here:

