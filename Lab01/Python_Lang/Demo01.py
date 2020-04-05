def main():
    a = 10
    print("Value of a = ", a)
    
    b = int(input("Input b = "), 10)
    print("b = " + str(b))
    
    c = a + b
    d = a - b
    e = a * b
    f = a / b
    g = a % b
    
    print("c = " + str(c), " d = " + str(d), "e = " + str(e), "f = " + str(f), "g = " + str(g))

    h = 8
    
    i = 3 + +(+h)
    print("h = " + str(h), "i = " + str(i))

    #python have not ++ and -- operator

    h += 1
    print("h = " + str(h))

    h -= 2
    print("h = " + str(h))

    h *= 3
    print("h = " + str(h))
    
    h /= 2
    print("h = " + str(h))

    h %= 2
    print("h = " + str(h))

if __name__ == "__main__":
    main()