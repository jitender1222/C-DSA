# Q Implement a binary search algorithm .


## Input
The first line of the input contains integers n
 and k
 (1≤n, k≤105), the length of the array and the number of queries. The second line contains n
 elements of the array, sorted in non-decreasing order. The third line contains k
 queries. All array elements and queries are integers, each of which does not exceed 109
 in absolute value.

## Output
For each of the k
 queries print YES in a separate line if this number occurs in the array, and NO otherwise.



## In this question we have to basically implement a binary search.A binary search divides an array into two parts and then we have to find the mid element and now we have to check three conditions *1-> our mid is equal to the element which we have to search* *2-> our mid is greater than the target value* *3-> our mid is lower than the target value*

## first we have to take two pointers left and right and find the mid .

## 1-> If 1st case exist then we have to simply return true that our element is present.

## 2-> If 2nd case appears then we have to move our right pointer to mid-1  right=mid-1.

## 3-> If 3rd case appears then we have to move our left pointer to mid+1  left=mid+1c .



# Q2 -> Given an array of n numbers, sorted in non-decreasing order, and k queries. For each query, print the maximum index of an array element not greater than the given one.

Input
The first line of the input contains integers n and k
 (0 < n,k ≤ 105), the length of the array and the number of queries. The second line contains n
 elements of the array, sorted in non-decreasing order. The third line contains k
 queries. All array elements and queries are integers, each of which does not exceed 2⋅109
 in absolute value.

Output
For each of the k
 queries, print the maximum index of an array element not greater than the given one. If there are none, print 0.

# Q3 -> Given an array of n numbers, sorted in non-decreasing order, and k queries. For each query, print the minimum index of an array element not less than the given one.

Input
The first line of the input contains integers n
 and k
 (0 < n,k ≤ 105), the length of the array and the number of queries. The second line contains n
 elements of the array, sorted in non-decreasing order. The third line contains k
 queries. All array elements and queries are integers, each of which does not exceed 2⋅109
 in absolute value.

Output
For each of the k
 queries, print the minimum index of an array element not less than the given one. If there are none, print n+1.