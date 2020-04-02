# SE_03_TP

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

## Operator

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