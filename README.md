# **0x11. C - printf**

## Synopsis

For this project we have to create our own printf function in C language. It was very challenging, because it was the first time that we had to work in pairs and apply almost all the concepts that we had been learing since the first day.

## Description

The _printf function write output to standar output.

Our function aims print and convert the arguments passed by the users, they would be for example a string literal or a an integer number, binaries, etc. 
In order to apply the differents directives of the function differents flags must be applied. 

_printf is a function, which takes a format which can be a string of ordinary characters, to be printed or it can also be composed of directives, which set the output of the function, to identify a directive, you have to use the symbol "%" folowwed by the directive.

## Syntax 

	_printf("literal stirng **%directive** literal string", argument);
                         
	If more than one directive is specified, the arguments must be specified in the same order. By default the function will give "Error" in case of placing the directives and arguments in different order.

## List of directives

| **Directive** | **Description** |
| ------------- | ------------- |
| %d | Print a decimal number in base 10 |
| %i | Print an integer in base 10 |
| %c | Print a character |
| %s | Print a string |
| %b | Print a number in binary |
| %u | Print an unsigned integer |
| %o | Print a number in octal |
| %x | Print a number in hexadecimal lowercase |
| %i | Print a number in hexadecimal uppercase |
| %S | Print print a string Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters) |
| %p | Print print pointer adress |
| %r | Print a string in reverse |
| %R | Print a rot13 string |
| %% | Print the "%" character |

## Flow chart

![App Screenshot](https://i.postimg.cc/76938Lbr/Untitled-Diagram-3.jpg)

## Usage
* C langauge.
* All the files had to be compiled on Ubuntu 20.04 LTS.
* The code was compiled this way: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

## Example

        #include "main.h"

        int main(void)
        {
                int a = 112;
                char c = 'i';
		char *str = "Hello World";
		int *p;
		p = &a;

        Literal string:
                _printf("Hello World\n");
                Output: Hello World

        Decimal:
                _printf("%d\n", a);
                Output: 112
        
        Integer in base 10:
                _printf("%c\n", a);
                Output: 112
	
        Character:
                _printf("%c\n", c);
                Output: i
        
        String:
                _printf("%s\n", s);
                Output: Hello World
        
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
                Output: 4BC

        String with non printable characters in ASCCI converted:
                _printf("%S" "Hello\nWorld");
                Output: Hello\x0AWorld
	
        Pointer adress:
                _printf("%p\n", p);
                Output: 0x7ffc07513184
        
        String in reverse:
                _printf("%r\n", "HelloWorld");
                Output: dlroWolleH

        String in rot13:
                _printf("%R\n", "HelloWorld");
                Output: UryybJbeyq
       }

This project was made for Holberton School project by:

#### Axel Bouvier:
[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://github.com/AxelBouvierM)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/axel-bouvier-172b76214/)

#### Maximiliano Alonso:
[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://github.com/MaxiHBTN)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/maximiliano-alonso-262b05123)


