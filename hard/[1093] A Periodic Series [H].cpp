/*
####  A Periodic Series  ####

This challenge involves a series that can start with any string of digits. The next term in the series is found by adding the digits of the previous term, appending that sum to the previous term, and then truncating the leftmost digits so that the number of digits in the terms is always the same.
Let's start with "1234". The sum of the digits is 10. Appending gives us "123410", then truncating the left two digits results in "3410". The next three terms are "4108", "0813", "1312". The series becomes periodic when a term that previously appeared occurs again.
Example:
___
"124", "247", "713", "311", "115", "157", "713", "311" ...
_____

This series becomes periodic at a length of 6 before "713" reappears.
Create a function whose argument is a digit string (the first term) and returns the length of the series when it first becomes periodic.


[Examples]

___
periodic("1") ➞ 1

periodic("3061") ➞ 7

periodic("02468") ➞ 178

periodic("314159265") ➞ 12210
_____



[Notes]

N/A


[loops] [strings] 



-------------------------------------------------------------------
[Resources]
_________
std::string::substr
https://www.cplusplus.com/reference/string/string/substr/
Returns a newly constructed string object with its value initialized to a copy of a substring of this object.
_________

*/
//Your code should go here:

