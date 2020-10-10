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