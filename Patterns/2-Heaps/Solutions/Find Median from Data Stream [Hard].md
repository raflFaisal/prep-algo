# Description

Median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value. So the median is the mean of the two middle value.

For example,
[2,3,4], the median is 3

[2,3], the median is (2 + 3) / 2 = 2.5

Design a data structure that supports the following two operations:

void addNum(int num) - Add a integer number from the data stream to the data structure.
double findMedian() - Return the median of all elements so far.
 

Example:

addNum(1)
addNum(2)
findMedian() -> 1.5
addNum(3) 
findMedian() -> 2

# Solution Approach-1
Add all numbers in array and sort every time.
This is a Brute Force solution so Time Complexity is O(nlogn) and space complexity is O(n) for new array

# Solution Approach-2
Use 2 Heaps, one max-heap and another min-heap. Insert elements in these heaps, in such a way that the half-bigger elements are present in min-heap and half-smaller elements are stored in max-heap. In this way, if max-heap size > min-heap size, then return max-heap.top(), else return mean of min-heap.top() and max-heap.top()

Solution is available in **Find Median from Data Stream.cpp** file in same directory
