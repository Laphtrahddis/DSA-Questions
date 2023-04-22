# DSA-Questions
This repository contains all the DSA Questions I have solved yet.
The Format for title is: A[x]Q[y] where x is the assignment number and y is the question number.
The Assignments are written below:

Assignment 1:
1.	Write a program to find the location of any element from an array.
2.	Write a program to find out the largest and smallest element of a 1-D array.
3.	Write a program for matrix multiplication.
4.  	Write a program to insert an element to a 1-D Array.
5.	Write a program to delete an element in a 1-D Array.
Implement the following programs using User defined function: 
6.	Write a program to merge two 1-D Arrays and print the resultant array.
7.	Write a Program to sort the elements in an Array.
8.	Write a Progarm to transpose a Matrix.
9. 	Write a Program to find an element of a 1-D array using binary search.


Assignment-2(pointer, array and function, Dynamic memory allocation):
1.	Wap to compute area and perimeter of a rectangle using pointer.
2.	Wap to compute factorial of a number using pointer.
3.	WAP to take input of an array and display the elements and address of the element(using pointer)
4.	Wap to dynamically allocate an array of n integers and display its elements and its sum. 
5.	Wap to dynamically allocate an array of n integers sort it in ascending order
6.	Wap to dynamically allocate an array of integers and search an element using linear search.
7.	Wap to stores the following information of employees of an organization name,empno, salary and perform the following operations
a.	Display information of the employees whose salary>25000
b.	Display information of the students in ascending order of their salary
8.	WAP to add, subtract, multiply two complex numbers with the following function prototype
void display(struct comp1);
void input(struct comp1 *);
struct comp1 add(struct comp1, struct comp1);
struct comp1 subtract(struct comp1, struct comp1);
struct comp1 mul(struct comp1, struct comp1);
9.	WAP to store the information of n books like author name, book name, price and edition and display the information of books in proper format.
10.	Wap to dynamically allocate an array of structures which stores the following information name(fname, mname, lname), rollno, branch and cgpa and perform the following operations
a.	Display information of the students whose cgpa>9
b.	Display information of the students in ascending order of their cgpa


Assignment - 3
Implementation of Sparse Matrix Operations
1.	Write a program to create the triple form a sparse matrix as per the specification given below: 
(i)	read_sparse(r,c,s[][c],) to input a sparse matrix in general form.
(ii)	create_triplate(r, c, s[][c], t[][3]) to create a sparse matrix in triple form.
(iii)	display_triplet(t[][3]) to display the sparse matrix in triple form
2.	Write a program by using functions to input a triplet matrix and convert that to a sparse matrix and display. Use to following functions to perform the operation.
a.	read_triplet(r, t[][3]) to input a triplet matrix
b.	create_sparse(t[][3], s[][t[0][1]])
c.	display_sparse(r, c, s[r][c]) to display the sparse matrix
3.	Write a program to add two sparse matrices(triplet form) as per the following specification:
(i)	read_triplet(r, t[][3]) to input a sparse matrix directly in triple form
(ii)	add_triplet(a[][3], b[][3], c[][3]) to add to sparse matrices
(iii)	display_triplet (t[][3]) to display the resultant sparse matrix in triplet form
4.	Write a program to find the transpose of a sparse matrix as  per the specification given below: 
(i)	read_sparse (r, c, s[][c]) to input a matrix in general form.
(ii)	create_triplet(r, c, s[][c], t[][3]) to create a sparse matrix in triple form.
(iii)	transpose (t[][3], res[][3]) to transpose the sparse matrix
(iv)	display_triplet(b[][3]) to display the transpose sparse matrix in triple form



Assignment-4
Implementation of STACK
1.	Write a menu-driven program to implement a stack by using array. It should have the following operations(functions):
(i)	void push(int) to insert an element into the stack
(ii)	int pop() to remove an element from the top of the stack
(iii)	intisFull() to check the stack is full or not 
(iv)	intisEmpty() to check the stack is empty or not.
(v)	void display() to display the elements of the stack
Take size of the stack is 5 and Perform the following set of operations: 
push(5), push(3), push(4), pop (), push(1), push(2), push(6), push(10), pop(), pop()
Display the status of the stack after every operation until the user enters his choice to exit.
2.	Write a function to evaluate a postfix expression by using stack. Call it in main() to verify whether it is working correctly or not for the following expression:
	623+-382/+* (Output: 7)
3.	Write a function to convert an infix expression to postfix expression by using stack. Call it in main() to verify whether it  is working correctly or not for the following expression:
	((A-(B+C))*D)^(E+F)   (Output: ABC+-D*EF+^)





