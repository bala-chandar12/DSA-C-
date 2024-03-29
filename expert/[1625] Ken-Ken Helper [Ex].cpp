/*
####  Ken-Ken Helper  ####

Ken-Ken is a puzzle game similar to Sudoku. It consists board filled with digits 1-9 and can have no two identical digits in the same row or column. The board is then split into jigsaw-like shapes (cages), each with a target number and mathematical operator, for which the digits that fill it (order doesn't matter) must match.
___
*) For addition +, the digits must sum to target.
*) For multiplication *, the digits must multiply to target.
*) For subtraction -, the digits must have a difference of target. Only cages of size 2 are allowed for subtraction.
*) For division /, the digits must have a quotient of target. Only cages of size 2 are allowed for division.
*) For no operator " ", the digits can fill it for any of the operators. If a cage has more than 2 cells, it can only have operators of + or *.
___

For example, with and operator of / and target of 4, with a 2x1 cage, possible digits to fill it are 2 and 8.
The cage shape is indicated by 1's. Provided a cage, target, and operator, your goal is to return an array of all possible digit combinations (as a JSON string).


[Example]

___
cage = [
  [0, 1],
  [1, 1]
]
_____

target = 24, and operator = "*", the output should be:
___
"{{1,3,8},{1,4,6},{2,2,6},{2,3,4}}"
_____



[Inputs]

___
*) cage ([][]integer)
___

The shape of the cage indicated by 1's and 0's. 1 indicates a cell of the cage.
Guaranteed constraints:
___
*) 1 ≤ cage.length ≤ 3
*) 1 ≤ cage[i].length ≤ 6
*) 2 ≤ cage size (# of 1's) ≤ 8
*) target (integer)
*) operator (string)
___

Operator will be +, -, *, / or " "
To match the tests expected output, sort both the inner and outer arrays and then return as a JSON string.


[algorithms] [arrays] [logic] [math] [numbers] 



-------------------------------------------------------------------
[Resources]
_________
Vector of Vectors
https://www.geeksforgeeks.org/vector-of-vectors-in-c-stl-with-examples/
Vectors are known as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatical …
_________

*/
//Your code should go here:

