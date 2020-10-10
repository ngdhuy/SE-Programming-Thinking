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