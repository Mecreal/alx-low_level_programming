# alx-low_level_programming - 0x1C Makefiles

## Table of Contents
1. [Make -f 0-Makefile](#make--f-0-makefile)
2. [Make -f 1-Makefile](#make--f-1-makefile)
3. [Make -f 2-Makefile](#make--f-2-makefile)
4. [Make -f 3-Makefile](#make--f-3-makefile)
5. [A Complete Makefile](#a-complete-makefile)
6. [Island Perimeter](#island-perimeter)
7. [Make -f 100-Makefile](#make--f-100-makefile)

## Make -f 0-Makefile
- **Task**: Create a basic Makefile.
- **Executable**: `school`
- **Rules**: `all` (Builds the executable)
- **Variables**: None
- **File**: `0-Makefile`

## Make -f 1-Makefile
- **Task**: Enhance the Makefile with variables.
- **Executable**: `school`
- **Rules**: `all`
- **Variables**:
  - `CC`: Compiler to be used
  - `SRC`: Source `.c` files
- **File**: `1-Makefile`

## Make -f 2-Makefile
- **Task**: Modify Makefile to recompile only updated source files.
- **Executable**: `school`
- **Rules**: `all`
- **Variables**:
  - `CC`: Compiler
  - `SRC`: Source `.c` files
  - `OBJ`: Object `.o` files
  - `NAME`: Name of the executable
- **File**: `2-Makefile`

## Make -f 3-Makefile
- **Task**: Expand Makefile with additional rules for cleaning.
- **Executable**: `school`
- **Rules**:
  - `all`: Builds the executable
  - `clean`: Deletes Emacs/Vim temporary files and executable
  - `oclean`: Deletes object files
  - `fclean`: Deletes Emacs/Vim temp files, executable, and object files
  - `re`: Forces recompilation of all source files
- **Variables**:
  - `CC`: Compiler
  - `SRC`: Source `.c` files
  - `OBJ`: Object `.o` files
  - `NAME`: Executable name
  - `RM`: Program to delete files
- **File**: `3-Makefile`

## A Complete Makefile
- **Task**: Create a comprehensive Makefile with compiler flags.
- **Executable**: `school`
- **Rules**: `all`, `clean`, `fclean`, `oclean`, `re`
- **Variables**:
  - `CC`: Compiler
  - `SRC`: Source `.c` files
  - `OBJ`: Object `.o` files
  - `NAME`: Executable name
  - `RM`: File deletion program
  - `CFLAGS`: Compiler flags (`-Wall -Werror -Wextra -pedantic`)
- **File**: `4-Makefile`

## Island Perimeter
- **Task**: Create a Python function to calculate the perimeter of an island.
- **Requirements**:
  - No module imports
  - Documented module and function
- **Function**: `def island_perimeter(grid):`
- **File**: `5-island_perimeter.py`

## Make -f 100-Makefile
- **Task**: Create an advanced Makefile with specific constraints.
- **Executable**: `school`
- **Rules**: `all`, `clean`, `fclean`, `oclean`, `re`
- **Variables**:
  - `CC`: Compiler
  - `SRC`: Source `.c` files
  - `OBJ`: Object `.o` files
  - `NAME`: Executable name
  - `RM`: File deletion program
  - `CFLAGS`: Compiler flags (`-Wall -Werror -Wextra -pedantic`)
- **Constraints**:
  - Specific usage rules for `$(RM)`, `$(CC)`, and `$(CFLAGS)`
  - No `$(OBJ)` rule or `%.o: %.c` rule
  - Makefile should work even if there's a file with the same name as a rule
  - Makefile should not compile if `m.h` header file is missing
- **File**: `100-Makefile`
