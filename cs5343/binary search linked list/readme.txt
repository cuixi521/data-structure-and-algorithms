By c++ in visual studio 2015
1.Implement selection sort on a single linked list.
include the file of 
Main.cpp;Node.h;Node.cpp;LinkedList.h;LinkedList.cpp;

How to do:
step 1: Creat the node struct by using class;
step 2: Push_back function to add new node linked to the list;
step 3: Traverse function to traverse the list and print out the value of each node;
step 4: The sort function use selection sort algorithm, first traverse the list to find the minimum, then 
        exchange the minimum value and the head value, then find the minimum of the last node except the head
        and exchange to the next node of head, repeat;
step 5: need a swap function to swap the node,change the connection of two nodes;
How to use the program:
Intuitively give the value by Push_back function in the main, or you can input the number from key board
(For checking the progress conveniently, I use the explanatory note on that part, so it will not carry out).  

2. Write a recursive algorithm to do binary search in a sorted array.
include the file of Binary Search.cpp

How to do:
For the Binary search, first compare the key value with the middle value of the array. If the key value is bigger
then check the last part of the array from next of middle to the last element. If the key value is smaller, then 
check the first part from first element to the previous element of middle. Use the recursive of the searching function,
until we find the value or can not find the value after checking all elements of array.
How to use the program:
For the two array, I fixed array A with 15 numbers and B with 16 numbers in the main function, but users can enter
the number they to check whether it is in the given arrays.