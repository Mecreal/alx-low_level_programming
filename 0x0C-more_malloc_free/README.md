# 0x0D. C -more about malloc, free

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
### General

*    How to use the exit function
*    What are the functions calloc and realloc from the standard library and how to use them.

## Tasks

### 0. Trust no one 


Write a function that allocates memory using malloc.

*    Prototype: void *malloc_checked(unsigned int b);
*    Returns a pointer to the allocated memory
*    if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98




Repo:


*    GitHub repository: alx-low_level_programming
*    Directory: 0x0C-more_malloc_free
*    File: 0-malloc_checked.c






### 1. string_nconcat 

#### Write a function that concatenates two strings.

* Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
* The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
* If the function fails, it should return NULL
* If n is greater or equal to the length of s2 then use the entire string s2
* if NULL is passed, treat it as an empty string



#### Repo:

*    GitHub repository: alx-low_level_programming
*    Directory: 0x0C-more_malloc_free
*    File: 1-string_nconcat.c




### 2. _calloc 

Write a function that concatenates two strings.

* Prototype: char *str_concat(char *s1, char *s2);
* The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
* if NULL is passed, treat it as an empty string
* The function should return NULL on failure


Repo:

* GitHub repository: alx-low_level_programming
* Directory: 0x0B-malloc_free
* File: 2-str_concat.c


### 3. If you even dream of beating me you'd better wake up and apologize 

Write a function that returns a pointer to a 2 dimensional array of integers.

* Prototype: int **alloc_grid(int width, int height);
* Each element of the grid should be initialized to 0
* The function should return NULL on failure
* If width or height is 0 or negative, return NULL



Repo:

* GitHub repository: alx-low_level_programming
* Directory: 0x0B-malloc_free
* File: 3-alloc_grid.c





###  4. It's not bragging if you can back it up 

Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

* Prototype: void free_grid(int **grid, int height);
* Note that we will compile with your alloc_grid.c file. Make sure it compiles.

Repo:

* GitHub repository: alx-low_level_programming
* Directory: 0x0B-malloc_free
* File: 4-free_grid.c


### 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe 

Write a function that concatenates all the arguments of your program.

* Prototype: char *argstostr(int ac, char **av);
* Returns NULL if ac == 0 or av == NULL
* Returns a pointer to a new string, or NULL if it fails
* Each argument should be followed by a \n in the new string




Repo:

* GitHub repository: alx-low_level_programming
* Directory: 0x0B-malloc_free
* File: 100-argstostr.c


