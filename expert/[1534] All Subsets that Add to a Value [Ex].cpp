/*
####  All Subsets that Add to a Value  ####

Create a function that returns all subarrays in an array that sum to a particular value. Return the subarrays in the following order:

The following example will illustrate:
___
getSubsets([-3, -2, -1, 0, 1, 2, 3], 2)
[ // All the subsets below sum to 2.
  [2],
  [-1, 3],
  [0, 2], // Same length: -1 < 0, so [-1, 3] goes before [0, 2]
  [-3, 2, 3],
  [-2, 1, 3],
  [-1, 0, 3],
  [-1, 1, 2],
  [-3, 0, 2, 3],
  [-2, -1, 2, 3],
  [-2, 0, 1, 3], // Same length + same first element: -1 < 0, so [-2, -1, 2, 3] goes before [-2, 0, 1, 3]
  [-1, 0, 1, 2],
  [-3, -1, 1, 2, 3],
  [-2, -1, 0, 2, 3],
  [-3, -1, 0, 1, 2, 3]
]
_____



[Examples]

___
getSubsets([-1, 0, 1, 2], 2) ➞ [[2], [0, 2], [-1, 1, 2], [-1, 0, 1, 2]]

getSubsets([-1, 0, 1, 2], 3) ➞ [[1, 2], [0, 1, 2]]

getSubsets([1, 2, 3, 4], 5) ➞ [[1, 4], [2, 3]]

getSubsets([-1, 0, 1, 2], 4) ➞ []
_____



[Notes]

___
*) Arrays will have unique numbers.
*) Return an empty array if there does not a exist a subset whose numbers sum to that value (see fourth example).
___



[arrays] [higher_order_functions] [sorting] 



-------------------------------------------------------------------
[Resources]
_________
std::vector
http://www.cplusplus.com/reference/vector/vector/
Are sequence containers representing arrays that can change in size. Just like arrays, vectors use contiguous storage locations for their elements, which means that th …
_________

*/
//Your code should go here:

