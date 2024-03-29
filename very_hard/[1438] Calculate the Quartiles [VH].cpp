/*
####  Calculate the Quartiles  ####

In statistic a quartile is a type of quantile, more specifically is any of the three values (q1, q2 or q3) that divide the items of a sorted frequency distribution (that starts at q0 with the lowest value and ends at q4 with the highest value) into four classes with each containing one fourth of the total population.
There are three main methods used for calculate the quartiles of a dataset: Tukey (abbr. T), Moore & McCabe (abbr. MM) and Mendenhall & Sincich (abbr. MS). (see Resources tab for more informations about quartiles and other calculation methods).
___
*) As already said, in a dataset q0 is the lowest value and q4 is the highest value.
*) All methods share one common statement: q2 is equal to the median of the set.
*) Using T or MM you split the dataset in two parts:

If dataset has an odd population T includes the median appending it at the end of the lower half and at the beginning of the upper half, while MM excludes the median from both parts.
If dataset has an even population is splitted in two equal parts by both methods.
With the dataset split in two q1 is equal to the median of the lower half and q3 is equal to the median of the upper half.
*) Using MS you don't split the dataset:

q1 is equal to the nth term of the dataset with n equal to (population length + 1) / 4, rounded to the nearest integer, unless the decimal part is equal to 0.5, in that case it should be rounded up to the nearest integer.
q3 is equal to the nth term of the dataset with n equal to 3 * (population length + 1) / 4 rounded to the nearest integer, unless the decimal part is equal to 0.5, in that case it should be rounded down to the nearest integer.
___

Given an array of values and a string with one of the three possible methods ("T", "MM" or "MS") return an array in the form [q0, q1, q2, q3, q4].


[Examples]

___
getQuartiles([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11], "T") ➞ [1, 3.5, 6, 8.5, 11]
// T includes the median (q2 = 6) in lower half (1 to 6, q1 = mean of 3+4)
// and in upper half (6 to 11, q3 = mean of 8+9).

getQuartiles([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11], "MM") ➞ [1, 3, 6, 9, 11]
// MM excludes the median in lower half (1 to 5, q1 = 3) and in upper
// half (7 to 11, q3 = 9).

getQuartiles([1, 2, 3, 4, 5, 6, 7, 8, 9] ➞ [1, 3, 5, 7, 9]
// With MS q1 = population + 1 = 11 / 4 = 2.75 rounded up to 3 = third
// number of dataset, and q2 = population + 1 = 11 * 3 = 33 / 4 = 8.25
// rounded down to 8 = eighth number of dataset.
_____



[Notes]

___
*) Try this challenge if you need to get familiar with medians.
*) The dataset has to be sorted in ascending order.
*) Values can be either positive or negative integers.
*) All given arrays are valid, no exceptions to handle.
___



[arrays] [math] [numbers] 



-------------------------------------------------------------------
[Resources]
_________
The Median of a Set of Data
https://www.mathgoodies.com/lessons/vol8/median
Is the middlemost number in the set. The median is also the number that is halfway into the set. To find the median, the data should first be arranged in order from lea …
_________
_________
std::sort
http://www.cplusplus.com/reference/algorithm/sort/
Sort elements in range Sorts the elements in the range [first,last) into ascending order. The elements are compared using operator< for the first version, and comp for …
_________
_________
std::vector
http://www.cplusplus.com/reference/vector/vector/
Are sequence containers representing arrays that can change in size. Just like arrays, vectors use contiguous storage locations for their elements, which means that th …
_________
_________
How to Find the Median Value
https://www.mathsisfun.com/median.html
The Median is the "middle" of a sorted list of numbers.
_________

*/
//Your code should go here:

