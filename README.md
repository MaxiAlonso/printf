# _printf

#### Synopsis

This project is about the printf function, it 
consists in create our own function, with what
we have learned so far.

## Description

The _printf function write output to standar output.

Our function aims print and convert the arguments passed
for the users, can be the string literal or a conversion
of integers numbers, binaries, etc. For the application
of the different actions of the function the different 
flags must be applied. 

_printf is a format of the string, which can be a string
of ordinary characters (no %), to be printed verbatim.
Or or it can also be composed of directives, which 
randomize the output of the function, to identify a directive,
use a symbol "%" that responds to the arguments that will be
indicated subsequently.

#### Syntax 
        - _printf("literal stirng");
                         
        - _printf("%directive", argument);

If more than one directive is specified, the arguments must
be specified in the same order. By default the function will
give "Error" in case of placing the directives and arguments
in different order.

#### List of directives

![App Screenshot](https://i.postimg.cc/nVdYYjxK/table1.jpg)

## Usage
+ All the files are to be compiled on Ubuntu 20.04 LTS
* Compile your code with gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
* Include the "main.h" header file on the functions using the _printf()

## Example

        #include "main.h"

        int main(void)
        {
                int a = 112;
                char c = i;

        Literal string:
                _printf("Hello World\n");
                Output: Hello World

        Decimal:
                _printf("%d\n", a);
                Output: 112
        
        Integer in base 10:
                _printf("%c\n", c);
                Output: i;
        
        String:
                _printf("%s\n", "HelloWorld");
                Output: HelloWorld
        
        Binary:
                _printf("%b\n", a);
                Output: 1110000
        
        Unsigned integer:
                _printf("%u\n", a);
                Output: 112
        Octal:
                _printf("%o\n", a);
                Output: 160
        
        Hexadecimal (lowercase):
                _printf("%x\n", 1212);
                Output: 4bc
        
        Hexadecimal (uppercase):
                _printf("%X\n", 1212);
                Output: 4bc
        
        String in reverse:
                _printf("%r\n", "HelloWorld");
                Output: dlroWolleH
        String in rot13:
                _printf("%R\n", "HelloWorld");
                Output: UryybJbeyq
        }

## 🔗 Social networks
#### Axel Bouvier:
[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://github.com/AxelBouvierM)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/axel-bouvier-172b76214/)

#### Maximiliano Alonso:
[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://github.com/MaxiHBTN)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/maximiliano-alonso-262b05123)


