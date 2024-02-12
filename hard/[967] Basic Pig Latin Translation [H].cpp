/*
####  Basic Pig Latin Translation  ####

Create a function that takes a string of words and moves the first letter of each word to the end of it, then adds "ay" to the end of the word. This is called "Pig Latin" and it gets more complicated than the rules in this particular challenge. I've intentionally kept things simple, otherwise this would turn into an extremely tedious challenge.
___
*) Move the first letter of each word to the end of the word.
*) Add "ay" to the end of the word.
*) Words starting with a vowel (A, E, I, O, U) simply have "WAY" appended to the end.
___



[Examples]

___
pigLatin("Cats are great pets.")
➞ "Atscay areway reatgay etspay."

pigLatin("Tom got a small piece of pie.")
➞ "Omtay otgay away mallsay iecepay ofway iepay."

pigLatin("He told us a very exciting tale.")
➞ "Ehay oldtay usway away eryvay excitingway aletay."
_____



[Notes]

Be sure to preserve proper capitalization and punctuation.


[algorithms] [formatting] [regex] [strings] 



-------------------------------------------------------------------
[Resources]
_________
Pig Latin
https://en.wikipedia.org/wiki/Pig_Latin
Pig Latin is a language game in which words in English are altered. The objective is to conceal the words from others not familiar with the rules. The reference to Lati …
_________
_________
std::string::substr
http://www.cplusplus.com/reference/string/string/substr/
Returns a newly constructed string object with its value initialized to a copy of a substring of this object. The substring is the portion of the object that starts at …
_________

*/
//Your code should go here:

