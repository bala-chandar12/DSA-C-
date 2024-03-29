/*
####  Almost Sorted Sequence  ####

An almost-sorted sequence is a sequence that is strictly increasing or strictly decreasing if you remove a single element from the array (no more, no less). Write a function that returns true if an array is almost-sorted, and false otherwise.
For example, if you remove 80 from the first example, it is perfectly sorted in ascending order. Similarly, if you remove 7 from the second example, it is perfectly sorted in descending order.


[Examples]

___
almostSorted([1, 3, 5, 9, 11, 80, 15, 33, 37, 41] ) ➞ true

almostSorted([6, 5, 4, 7, 3]) ➞ true

almostSorted([6, 4, 2, 0]) ➞ false
// Sequence is already sorted.

almostSorted([7, 8, 9, 3, 10, 11, 12, 2]) ➞ false
// Requires removal of more than 1 item.
_____



[Notes]

___
*) Completely sorted arrays should return false.
*) Arrays will always be > 3 in length (to remove ambiguity).
*) Numbers in each input array will be unique - don't worry about "ties".
___



[arrays] [sorting] [validation] 



-------------------------------------------------------------------
[Resources]
_________
std::sort()
https://www.geeksforgeeks.org/sort-c-stl/
We have discussed qsort() in C. C++ STL provides a similar function sort that sorts a vector or array (items with random access).
_________
_________
std::sort
http://www.cplusplus.com/reference/algorithm/sort/
Sort elements in range Sorts the elements in the range [first,last) into ascending order. The elements are compared using operator< for the first version, and comp for …
_________

*/
//Your code should go here:

