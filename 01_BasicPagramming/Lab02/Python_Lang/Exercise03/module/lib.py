#
#  Created by NDHuy at 18/04/2020
#  Copyright 2020 by SEstudio
#  Integer number
#

def RevertNumber(n):
    if (n < 0): 
        return -1

    revertNumber = 0
    while (n > 0):
        revertNumber = (revertNumber * 10) + (n % 10)
        n = (int)(n / 10)
    return revertNumber


def isSymmetry(n):
    if (n < 0): 
        return False
    return n == RevertNumber(n)
    

def isPerfectSquare(n):
    if (n < 0):
        return False
    
    m = n / 2
    while (m > 0):
        if (m * m == n):
            return True
        else:
            m = m - 1
    
    return False


def isPrime(n):
    if (n <= 1): 
        return False
    
    m = (int)(n / 2)
    while (m > 1):
        if (n % m == 0):
            return False
        else:
            m = m - 1

    return True


def sumOddNumber(n):
    if (n < 0):
        return -1
    
    sum = 0
    while (n > 0):
        i = n % 10
        if (i % 2 != 0):
            sum = sum + i
        n = (int)(n / 10)
    
    return sum


def sumEvenNumber(n):
    if (n < 0):
        return -1
    
    sum = 0
    while (n > 0):
        i = n % 10
        sum = sum + (i if (i % 2 == 0) else 0)
        n = (int)(n / 10)

    return sum


def sumPrimeNumber(n):
    if (n < 0):
        return -1

    sum = 0
    while (n > 0):
        i = n % 10
        sum = sum + (i if (isPrime(i)) else 0)
        n = (int)(n / 10)
    
    return sum


def sumPerfectSquareNumber(n):
    if (n < 0):
        return -1
    
    sum = 0
    while (n > 0):
        i = n % 10
        sum = sum + (i if (isPerfectSquare(i)) else 0)
        n = (int)(n / 10)

    return sum
    