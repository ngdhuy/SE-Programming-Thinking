#
#  Created by NDHuy on 05/04/2020
#  Copyright 2020 by SEstudio
#  Input one character. Change to Upper or Lower
#

def main():
    c = input("Input character c = ")
    
    # Get character from String
    c = c[0]

    # Convert character to ASCII code
    ascii_code = ord(c)

    if (ascii_code >= 65) and (ascii_code <= 90):
        ascii_code = ascii_code + 32
    elif (ascii_code >= 97) and (ascii_code <= 122):
            ascii_code = ascii_code - 32 
    
    # Convert ASCII code to character
    c = chr(ascii_code)

    print("Result of convert character c = %c" %(c))


if __name__ == "__main__":
    main()