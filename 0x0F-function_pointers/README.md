# 0x0F Function pointers

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
### General


* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory



## Tasks

###   0. What's my name 
Write a function that prints a name.

*    Prototype: void print_name(char *name, void (*f)(char *));

Repo:

*    GitHub repository: alx-low_level_programming
*    Directory: 0x0F-function_pointers
*    File: 0-print_name.c


### 1. If you spend too much time thinking about a thing, you'll never get it done 

Write a function that executes a function given as a parameter on each element of an array.

* Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
* where size is the size of the array
* and action is a pointer to the function you need to use

Repo:

*    GitHub repository: alx-low_level_programming
*    Directory: 0x0F-function_pointers
*    File: 1-array_iterator.c
