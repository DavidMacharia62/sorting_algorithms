# SORTING ALGORITHMS

Four different sorting algorithms are:

## Bubble Sort: 

It compares adjacent elements and swaps them if they are in the wrong order. The process is repeated until the entire list is sorted.

## Insertion Sort: 

It builds the final sorted array one item at a time. It iterates over the input elements, placing each element in its correct position within the already sorted portion of the array.

## Merge Sort: 

It is a divide-and-conquer algorithm that divides the input array into two halves, recursively sorts each half, and then merges the two sorted halves to produce the final sorted array.

## Quick Sort: 

It also uses the divide-and-conquer approach. It selects a pivot element, partitions the array into two sub-arrays based on the pivot, and recursively sorts the sub-arrays.

## Big O notation 

Big O notation is a mathematical notation that describes the performance of an algorithm in terms of its input size. It provides an upper bound on the growth rate of the algorithm's time complexity. It helps to analyze and compare the efficiency of algorithms.

To evaluate the time complexity of an algorithm, you analyze the number of operations it performs as a function of the input size. You consider the dominant factors that contribute to the algorithm's running time and express it using Big O notation. The notation describes how the running time of the algorithm scales with the input size. For example, O(n) indicates linear time complexity, O(n^2) represents quadratic time complexity, and O(log n) indicates logarithmic time complexity.

To select the best sorting algorithm for a given input, consider the following factors:

Input size: Some algorithms perform better on small inputs, while others excel with larger inputs.
Input characteristics: Certain algorithms may be more suitable for specific types of data, such as nearly sorted or partially sorted arrays.
Time complexity: Evaluate the time complexity of the algorithms and choose the one with the most efficient growth rate for your specific input size.
A stable sorting algorithm is one that preserves the relative order of elements with equal keys during the sorting process. In other words, if there are two elements with the same key, their order in the original list will be maintained in the sorted list. For example, if you have two people with the same age, a stable sorting algorithm will ensure that their original order is maintained in the sorted list. Merge Sort is an example of a stable sorting algorithm.
