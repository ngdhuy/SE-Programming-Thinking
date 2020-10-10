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