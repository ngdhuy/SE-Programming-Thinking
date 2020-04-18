# SE_03_TP

## 0. Input and Output Command variable to screen

- Output/Print value to screen

    - C/C++

```c++
    printf("String format", variable);
    int a = 10; 
    float b = 1.2;
    char c = 't';
    prinft("a = %d, b = %f, c = %c", a, b, c);
```

- **String format**: 
    | Format Specifier      | Description           |
    |-----------------------|-----------------------|
    | %	                    | Prints %              |
    | c	                    | Writes a single character |
    | s                     | Writes a character string |
    | d or i                | Converts a signed integer to decimal representation |
    | o                     | Converts an unsigned integer to octal representation |
    | X or x                | Converts an unsigned integer to hexadecimal  |representation
    | u                     | Converts an unsigned integer to decimal representation |
    | F or f                | Converts floating-point number to the decimal  |representation
    | E or e	            | Converts floating-point number to the decimal  |exponent notation
    | A or a	            | Converts floating-point number to the hexadecimal  |exponent
    | G or g	            | Converts floating-point number to either decimal  |or decimal exponent notation
    | n	                    | Returns the number of characters written so far by this call to the function. The result is written to the value pointed to by the argument |
    | p                     | Writes an implementation defined character sequence  |defining a pointer. |

- **Characteristics "\\"**:
    | Format Specifier      | Description                |
    |-----------------------|----------------------------|
    | \n                    | break line                 |
    | \t                    | tab                        |
    | \\\                   | print special character \\ |


    - Python

    ``` print(object(s), sep=separator, end=end, file=file, flush=flush) ```

    | Parameter         | Description                   |
    |-------------------|-------------------------------|
    | object(s)	        | Any object, and as many as you like. Will be converted to string before printed |
    | sep='separator'   | Optional. Specify how to separate the objects, if there is more than one. Default is ' ' |
    | end='end'	        | Optional. Specify what to print at the end. Default is '\n' (line feed) |
    | file	            | Optional. An object with a write method. Default is sys.stdout |
    | flush	            |Optional. A Boolean, specifying if the output is flushed (True) or buffered (False). Default is False |

```python
    
    print("Hello", "how are you?")
    # Hello how are you?
    
    x = ("apple", "banana", "cherry")
    print(x)
    # apple banana cherry

    print("Hello", "how are you?", sep=" -> ")
    # Hello -> how are you?

    a = 1
    b = 2.5
    c = 'k'
    print("List of value: %d, %f, %c" %(a, b, c))
    # List of value: 1, 2.5, k
```

- Input/Scan value from screen

- C/C++ language: ``` scanf("String format", address of variable) ```

```c++
    int a;
    printf("Input a = ");
    scanf("%d", &a);
    
    float b; 
    printf("Input b = ");
    scanf("%f", &b);
```

- Python language:

```python
    # version Python 3.6
    username = input("Enter username:")
    print("Username is: " + username)

    # version Python 2.7
    username = raw_input("Enter username:")
    print("Username is: " + username)
```

## 1. Variable
    
- Variable in C/C++

``` c++
int a = 1;fint b = 2.5; 
int c = 3, d = 4;
```

- Variable in Python

```python
a = 10
b = 1.5
```

- Variable in Java

```java
int a = 3;
int b = 8.2;
```

- Variable in C#

```c#
int a = 5.7;
int b = 3;
```

- Variable in PHP

```php
$a = 1; 
$b = 4.6;
```

- Variable in JavaScript

```javascript
var a = 8; 
let b = 9.3;
```

## 2. Constant

- Constant in C/C++

```c++
define MAX 100

const int PI = 3.14;

int     a = 5 + MAX;
int     b = 20 + MAX;
float   c = 45 * PI;

a = a + b;
MAX = 200; // ERROR because MAX is constanst (cannot change value)
```

- Constant in Python

```python
#  Python have not constant
def MAX()
    return 100

a = 100 + MAX()
```

## 3. Operator

- Operator two argument: + - * / % (integer)
    - a = 4 + 5 = 9
    - c = 10 / 5 = 2
    - d = 5 / 2 = 2
    - e = 5 % 2 = 1 (modulo for integer number)
    - f = 5.0 / 2 = 2.5 
    - g = (5 + 2) * 4 = 28
    - C/C++ language
    
    ```c++
        int a = 4 + 5;      // a = 9
        int b = 5 / 2;      // b = 2
        int c = 5 % 2;      // c = 1
        float d = 5 / 2;    // d = 2.0 because 5 and 2 is a integer
        float e = 5.0 / 2;  // e = 2.5
    ```

    - Python language

    ```pthon
        a = 5 / 2; 
        b = 6 + 2;
    ```

- Operator assignment: =
    - a = 10
    - b = c = d = 9
    - e = (10 % 2 == 0) ? 1 : 0
    - C/C++ language

    ```c++
    int a;
    int b; 
    int c; 
    a = b = c = 100;                // 100 -> c, c -> b, b -> a
    int d = (a == 100) ? 10 : 5;    // d = 10 because a == 100 is TRUE
    ```

    - Python language

    ```python
    a = 10
    b = 5
    c = d = 10
    e = 8 if a == 10 else 0         # a = true_value if condition else false_value
    f = (100 if b == 5 else 0)      # f = 100
    ```

- Operator one argument: ++ --
    - ++variable vs variable++

```c++
    // C/C++ language

    int a = 10;         // a = 10
    int b = ++a + 1;    // step.1 a = a + 1 = 11 -> step.2 b = a + 1 = 11 + 1 = 12
    // a = 11 and b = 12

    int c = 1 + a--;    // step.1 c = 1 + a = 1 + 11 = 12 -> step.2 a = a - 1
    // a = 10 and c = 12
```

```python
    # Python language
    # Python have not ++ and --
    a = 5
    b = 2 - +(+a)         # step.1 a = a + 1 = 5 + 1 = 6 -> step.2 b = 2 - a = 2 - 6 = -4
    # a = 6 and b = -4

    c = 3 + -(-a)       # step.1 a = a - 1 = 5 -> step.2 c = 3 + a = 3 + 5 = 8
    # a = 5 and c = 8
```

- Operator assignment: += -= *= /+ %=

```c++
    // C/C++ language
    
    int a = 10;
    a += 1;         // a = a + 1 = 10 + 1 = 11 
    a -= 2;         // a = a - 2 = 11 - 2 = 9
    a *= 3;         // a = a * 3 = 9 * 3 = 27
    a /= 2;         // a = a / 2 = 27 / 2 = 13
    a %= 2;         // a = a % 2 = 13 % 2 =  1         
```

```python
    # Python language

    a = 10
    a += 1         # a = a + 1 = 10 + 1 = 11 
    a -= 2         # a = a - 2 = 11 - 2 = 9
    a *= 3         # a = a * 3 = 9 * 3 = 27
    a /= 2         # a = a / 2 = 27 / 2 = 13
    a %= 2         # a = a % 2 = 13 % 2 =  1  
```
## 4. Control Flow

### 4.1 **IF ...  ELSE ...** statement

```c++
    // C/C++ language
    // case 01
    if (condition)
    {
        // do if condition is true
    }

    // case 02
    if (condition)
    {
        // do if condition is true
    }
    else
    {
        // do if condition is false
    }

    // case 03
    if (condition_01)
    {
        // do if condition_01 is true
    }
    else
    {
        // do if condition_01 is false
        if (condition_02)
        {
            // do if condition_02 is true (and condition_01 is false)
        }
        else
        {
            // do if condition_02 is false (and condition_01 is false)
        }
    }

```

```python
    # Python language
    # case 01
    if condition:
        # do if condition is true

    # case 02
    if condition:
        # do if condition is true
    else:
        # do if condition is false

    # case 03
    if condition_01:
        # do if condition_01 is true
    elif condition_02:
        # do if condition_02 is true (and condition_01 is false)
    else:
        # do if condition_02 is false (and condition_01 is false)
```

### 4.2 **SWITCH ...  CASE ...** statement

```c++
    // C/C++ language
    int n;

    // case 01
    switch(n)
    {
        case 1:
            // do with n = 1
            break;
        case 2:
            // do with n = 2
            break;
        case 3:
            // do with n = 3
            break;
    }
    // if n == 4, switch don't something

    // case 02
    switch(n)
    {
        case 1:
            // do with n = 1
            break;
        case 2:
            // do with n = 2
            break;
        case 3:
            // do with n = 3
            break;
        default:
            // do with n != [1, 2, 3]
    }

    // case 03 - special
    switch(n)
    {
        case 1:
        case 2:
            // do with n = 1 or n = 2
            break;
        case 3:
            // do with n = 3 and after do with command of n = 3 because not break in case 03
        case 4:
            // do with n = 4
            break;
        default:
            // do with n != [1, 2, 3, 4]
    }

```

```python
    # Python language
    # python don't support Switch ... case ... statement

    # Switch case in python is replacement
    def numbers_to_string(argument):
        switcher = {
            0 : "Zero",
            1 : "One", 
            2 : "Two"
        }
        return switcher.get(i, "Show message error: value is not exist in switcher")

    
    print(numbers_to_string(2))

    # Best practice: we should user IF statem replace SWITCH in python
```

---
**NOTE: Character (ASCII)**

- C/C++ language: 

```c++
Format: "%c" 
Type: char
Size of char: 1 byte
Default: character is ASCII code
```

- Python language:

```python
Default: string
Get 1 character from string at index 0: string[0]
Convert Character to ASCII code: ord(char)
Convert ASCII code to Character: chr(ASCII_Code)
Default ASCII code is integer
```

---

## 5. Loop control
### 5.1 C/C++ language
#### 5.1.1 For(...) statement

```c++
    int i; 
    for(i = 0; i < 10; i++)
        printf("%d \t", i);
    // 0 1 2 3 4 5 6 7 8 9

    for(int j = 0; j < 10; j += 2)
        printf("%d \t", j);
    // 0 2 4 6 8

    int k = 1;
    for(; k < 10;)
    {
        printf("%d \t", k);
        k += 2;
    }
    // 1 3 5 7 9
```

#### 5.1.2 While(...) statement

```c++
    int k = 1; 
    while(k < 0)
    {
        printf("%d\t", k);
        k++;
    }
```

#### 5.1.3 Do { ... } While (...) statement

```c++
    int n;
    do
    {
        printf("Enter an integer n >= 0: ");
        scanf("%d", &n);
    } while (n < 0);
```

### 5.2 Python language
#### 5.2.1 For ... in ... statement

```python
    array = [1 , 2, 3, 4, 5]

    for item in arr:
        print("%d" %(item))
    # 1 2 3 4 5

    range(5)
    # 0 1 2 3 4

    range(5, 4)
    # 5 6 7 8

    for item in range(5):
        print("%d" %(item))
    # 0 1 2 3 4

    for item in range(5):
        print("%d" %(item))
    else: 
        print("End")
    # 0 1 2 3 4 End
```

#### 5.2.2 While (...) statement

```python
    n = 10
    while n > 0:
        print(n)
        n -= 2
    # 10 8 6 4 2

    n = 5
    while n > 0:
        print("%d" %(n))
        n -= 2
    else:
        print("End")
    # 5 3 1 End
```

- Python don't support ``` do ... while()``` statement
- So customize ``` do ... while () ``` for python

```python
    i = 1
    while True:
        print("%d " %(i))
        i += 1
        if(i > 5)
            break # break of While loop
    # 1 2 3 4 5
```

### 5.3 Break/Continue statement

- **Break**: break and exit loop control flow.
- **Continue**: Skip current flow and go to next flow.

```c++
    // C/C++ language
    for(int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue;
        printf("%d\t", i);
    }
    // 0 1 2 3 4 6 7 8 9

    for(int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            printf("Break here\n");
            break;
        }
    
        printf("%d\t", i);
    }
    // 0 1 2 3 4 Break here
```

```python
    #  Python language
    for i in range(10):
        if (i == 5):
            continue

        print(i)

    # 0 1 2 3 4 6 7 8 9

    for i in range(10):
        if (i == 5):
            print("Break here")
            break

        print(i)

    #  1 2 3 4 Break here
```

## 6. Function
### 6.1 Basic

- C/C++ Language

```c++
    void printMessage(int n)
    {
        printf("Value of N = %d", n);
    }

    int Sum(int x, int y)
    {
        int s = x + y;
        return s;
    }
```

- Python Language

```python
    def printMessage(n):
        print("Value of N = %d" %(n))

    def Sum(x, y):
        s = x + y
        return s
```

### 6.2 Add function to Program

- C/C++ language

```c++
    #include <stdio.h>

    // -- Prototype --
    int input();
    int Sum(int a, int b);
    void output(int a, int b, int c);

    // -- Main function where is start program
    int main()
    {
        int a; 
        int b;
        int sum; 

        // Input
        a = input();
        b = input();

        // Calculate
        sum = Sum(a, b);

        // Out
        output(a, b, sum);

        return 0;
    }

    // -- implement functions
    int input()
    {
        int n;
        printf("Enter n = ");
        scanf("%d", &n);
        return n;
    }

    int Sum(int a, int b)
    {
        int sum = a + b;
        return sum;
    }

    void output(int a, int b, int c)
    {
        printf("s = %d + %d = %d", a, b, c);
    }

```

- Python language

```python
    def myInput():
        n = int(input("Enter n = "))
        return n

    def sum(x, y):
        return x + y

    def myOutput(a, b, c):
        print("sum = %d + %d = %d" %(a, b, c))

    def main():
        a = myInput()
        b = myInput()
        s = sum(a, b)
        myOutput(a, b, s)

    if __name__ == "__main__":
        main()
```

### 6.3 Parameter by Value/Reference
- C/C++ language

```c++
    #include <stdio.h>

    // --- Prototype
    int doubleValue(int n);     // --> Pass by Value
    int tribleValue(int &n);    // --> Pass by Reference 

    // --- Main function
    int main()
    {
        int a = 2;
        int b = doubleValue(a);
        printf("main: a = %d\n", a);
        printf("main: b = %d\n", b);

        printf("\n-------------------------\n");
        
        int c = tribleValue(a);
        printf("main: a = %d\n", a);
        printf("main: c = %d\n", c);
        return 0;
    }

    // --- Implement function
    //  ---> Pass by Value
    int doubleValue(int n)
    {
        n = n * 2;
        printf("--> doubleValue: %d\n", n);
        return n;
    }

    // ---> Pass by Reference
    int tribleValue(int &n)
    {
        n = n * 3;
        printf("--> tribleValue: %d\n", n);
        return n;
    }
```

- Python language

```python
    # ---> Pass by Value
    def doubleValue(n):
        n = n * 2
        print("--> n = %d" %(n))
        return n

    # ---> Pass by Reference
    def tribleValue(n):
        n.append("Hello world")
        print(n)

    def main():
        a = 2
        b = doubleValue(a)
        print("a = %d" %(a))
        print("b = %d" %(b))    
        c = []
        tribleValue(c)
        print(c)

    if __name__ == "__main__":
        main()
```
### 6.4 Special case
- Parmeter is  Pointer in C/C++ language

```c++
// --- C/C++ Language
    #include <stdio.h>

    // --- Prototype
    void Swap(int &a, int &b);
    void Swap_02(int *a, int *b);

    // --- Main function 
    int main()
    {
        int a = 10; 
        int b = 5; 
        printf("a = %d, b = %d\n", a, b);
        Swap(a, b);
        printf("a = %d, b = %d\n", a, b);
        int c = 8; 
        int d = 9;
        printf("c = %d, d = %d\n", c, d);
        Swap_02(&c, &d);
        printf("c = %d, d = %d\n", c, d);
        return 0;
    }

    // --- Implement function
    void Swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    // --- swap with pointer
    void Swap_02(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
```

- Overload function

```c++
    // --- C/C++ language
    //#include <stdio.h>
    #include <iostream>

    // --- Prototype
    int Sum(int a, int b);
    float Sum(float a, float b);

    // -- Defautl parameter
    int Div(int a, int b = 1)
    {
        return a / b;
    }

    // --- Main function
    int main()
    {
        int a = 4; 
        int b = 5;
        int c = Sum(a, b);
        printf("sum = %d + %d = %d\n", a, b, c);

        float d = 3.5; 
        float e = 2.4;
        printf("sum = %f + %f = %f\n", d, e, Sum(d, e));

        printf("div = %d / %d = %d\n", a, b, Div(a , b));
        printf("div = %d / %d = %d\n", a, b, Div(a));       // --> Default parameter b = 1

        return 0;
    }

    // --- Implement functions
    int Sum(int a, int b)
    {
        printf("--> Sum INT\n");
        return a + b;
    }

    float Sum(float a, float b)
    {
        printf("--> Sum FLOAT\n");
        return a + b;
    }
```

```python
    # Python language
    # Default parameter -> Overload function in python
    def sum(a, b, c = 1):
        print("-> Sum 02")
        return a + b + c

    def main():
        a = 5
        b = 4
        c = 6
        print("Sum = %d + %d = %d" %(a, b, sum(a, b)))
        print("Sum = %d + %d + c= %d" %(a, b, sum(a, b, c)))

    if __name__ == "__main__":
        main()
```
---
    Python have no overload function. You can use default parmeter to do that
---

### 6.5 Create Project structure
#### 6.5.1 C/C++language
    - Create project __Library__:
        - file __.h__: define header file --> Prototype functions
        - file __.cpp__: define implement functions
    - file __main.cpp__: is main function
    - Project structure:
        - folder __bin__: contain execute file (after compile) --> exe file
        - folder __include__: contain header file (.h)
        - folder __src__: contain source file (.cpp)

```shell
    # Command to compile project C/C++
    $ clang++ -g ./src/*.cpp -I ./include/ -o ./bin/main

    # Command to execute file after compile
    $ ./bin/main
``````
- File __include/lib.h__: define prototype for function
```c++
    // file include/lib.h
    // --- define macro for library information
    #ifndef __LIB_H__
    #define __LIB_H__

    // --- include core library for Lib
    #include <stdio.h>

    // --- Prototype of function
    
    void Swap(int &a, int &b);
    int Sum(int a, int b, int c);
    int Div(int a);
    int Div(int a, int b);

    #endif
```

- File __src/lib.cpp__: implement function

```c++
    // file src/lib.cpp
    #include "lib.h"

    void Swap(int &a, int &b)
    {
        int temp = a; 
        a = b; 
        b = temp;
    }

    int Sum(int a, int b, int c)
    {
        return a + b + c;
    }

    int Div(int a)
    {
        return a / 1;
    }

    int Div(int a, int b)
    {
        return a / b;
    }
```

- File __src/main__: define main function of program

```c++
    #include <stdio.h>
    #include "lib.h"    // include my library

    int main()
    {
        int a = 8; 
        int b = 3;

        Swap(a, b);
        printf("a = %d, b = %d \n", a, b);

        int c = 2;
        int d = Sum(a, b, c);
        printf("Sum = %d + %d + %d = %d \n", a, b, c, d);
        int e = Div(a);
        printf("Div = %d = %d \n", a, e);
        int f = Div(a, b);
        printf("Div = %d / %d = %d \n", a, b, f);

        return 0;
    }
```

- Compile: ```$ clang++ -g ./src/*.cpp -I ./include/ -o ./bin/main```

#### 6.5.2 Python language
- Project struture:
    - folder __lib/module__: contain modules of libraries python file
    - file __main.python__: contain main function

- file __lib/module.python__

```python
    # file lib/module.python
    def Sum(a, b):
    return a + b

    def Div(a, b = 1):
        return a / b
```

- file __main.python__

```python
    # file main.python
    from lib import module as myLib
    # import lib.module as myLib
    
    def main():
        a = 4 
        b = 3

        c = myLib.Sum(a , b)
        print("sum = %d + %d = %d" %(a, b, c))

        d = myLib.Div(a)
        print("div = %d = %d" %(a, d))

        e = myLib.Div(a, b)
        print("div = %d / %d = %d" %(a, b, e))


    if __name__ == "__main__":
        main()
```

- Note to import module/lib to main file
    - Case 01: ```from lib import moudule as myLib```
    - Case 02: ```import lib.moudle as myLib```
    - Case 03: ```from lib import *```
    - Case 04: 
        - Create empty file ```lib/__init__.python```
        - Create library file ```lib/module.python```
        - In main.python file: ```import module```
