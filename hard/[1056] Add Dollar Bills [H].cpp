/*
####  Add Dollar Bills  ####

Create a function that takes a string containing money in dollars and pounds sterling (seperated by comma) and returns the sum of dollar bills only, as an integer.
For the input string:
___
*) Each amount is prefixed by the currency symbol: $ for dollars and £ for pounds.
*) Thousands are represented by the suffix k.
___

i.e. $4k = $4,000 and £40k = £40,000


[Examples]

___
addBill("$20, £40, £60, $50") ➞ 70
// 20 + 50 = 70

addBill("£30, $20, £60, $150, £360") ➞ 170
// 20  + 150 = 170

addBill("£30, $2k, £60, $200, £360") ➞ 2200
// 2 * 1000 + 200 = 2200
_____



[Notes]

There is at least one dollar bill in string.


[language_fundamentals] [strings] 



-------------------------------------------------------------------
[Resources]
_________
std::string::at
http://www.cplusplus.com/reference/string/string/at/
Returns a reference to the character at position pos in the string. The function automatically checks whether pos is the valid position of a character in the string (i …
_________

*/
//Your code should go here:

