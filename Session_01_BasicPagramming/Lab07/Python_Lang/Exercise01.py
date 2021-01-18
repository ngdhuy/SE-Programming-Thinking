def main():
    file = open('data.txt', 'r')
    for line in file:
        print(line)

    file.seek(0)
    print(file.readlines())
    
    file.close()

if __name__ == '__main__':
    main()