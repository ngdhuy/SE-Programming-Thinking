def main():
    for i in range(5):
        print("%d" %(i))

    while i > 0:
        print("--> %d" %(i))
        i -= 1

    for i in range(5):
        print("%d" %(i))
    else:
        print("end")

    while i > 0:
        print("--> %d" %(i))
        i -= 1
    else:
        print("end")

if __name__ == "__main__":
    main()