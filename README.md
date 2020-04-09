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
    | Format Specifier      | Description               |
    |-----------------------|---------------------------|
    | \n                    | break line                |
    | \t                    | tab                       |
    | \\\                   | print special character \\|


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
    - C/C++

``` scanf("String format", address of variable) ```

```c++
    int a;
    printf("Input a = ");
    scanf("%d", &a);
    
    float b; 
    printf("Input b = ");
    scanf("%f", &b);
```

    - Python

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