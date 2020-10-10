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