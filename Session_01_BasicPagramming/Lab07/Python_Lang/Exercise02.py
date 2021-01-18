def main():
    in_file = open("data.txt", "r")
    out_file = open("output.txt", "w")
    # out_file = open("output.txt", "a")

    for line in in_file:
        out_file.write(line)

    in_file.close();
    out_file.close()

if __name__ == '__main__':
    main()