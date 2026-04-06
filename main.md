# Compile flags - create main.i, main.s, main.o files
-save-temps     

# main.i from main.c
File resulted from pre-processing stage (compile process the #include for example).

# main.s
File converted to assembly language.

# main.o
Machine code that is called object file too.


# Escape sequence Null
\0

# Format specifier for printf
%c      # character
%d      # integer
%u      # unsigned integer
%ld     # long
%lu     # unsigned long
%f      # float
%x      # hexadecimal lower case
%X      # hexadecimal upper case
%0      # octal
%p      # address
%s      # string

# Sizeof operator, can use the type name or a variable
int i = 0;
sizeof(i);
sizeof(int);

# Definition != declaration
int val;            # Definition
val = 3;            # Initialization
extern int val;     # Declaration

# Storage class specifiers
extern
static

# Inclui uma biblioteca padrão <>.
include <stdio.h>   

# Define a constant
#define PI 3.14159 

# Memória utilizada em bytes, por uma variável
sizeof()

# Comprimento da string sem \0
strlen() - <string.h>

# Data object
Region of data storage that can be used to hold data.

# Lvalue
Expression that identifies a particular data object.

# Rvalue
Quantities that can be assigned to modifiable lvalues.

# Operand
what operators operate on.

# Operator
Realiza alguma coisa.

# Expression
Consist of combination of operators and operands.

# Statment
A complete instruction to the computer, indicated by a semicolon at the end.

# Funções para trabalhar com caracter - pg 229
<ctype.h>

# Obtem o retorno do programa
echo $?

# List head files in a c file
gcc -H -fsyntax-only address.c
continuar pg 240

# Abbreviation of Error NO ENTry, and can actually be used for more than files/directories.
ENOENT

# Array
num[3] == *(num + 3) == *(3 + num) == 3[num]
 
char *cards = "JQK";
# This create a string literal into constant area of memory and make cards point to there.
# cards can not be used to change the string literal.
# Use array instead.
const chat *cards = "JQK";
# Is the same as above. Use this.

char cards[] = "JQK";
# This create a string literal into constant area of memory and make a copy to the array.

make(int num[]){
}
make(int *num({
}
# These two functions are equivalent.
# Array as parameter is treated as array.
