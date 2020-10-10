#
#  Created by NDHuy at 09/04/2020
#  Copyright 2020 by SEstudio
#  Taxi payment
#

def main():
    n = int(input("Input number of taxi km n = "))
    total_price = 0.0

    if n > 0:
        if n == 1:
            total_price = 15000.0
        elif n <= 5:
            total_price = 15000.0 + ((n - 1) * 13500.0)
        else:
            total_price = 15000.0 + (4 * 13500.0) + ((n - 5) * 11000.0)
            if n > 120:
                total_price = total_price * 0.9
    
    print("Total price: %.0f" %(total_price))
    

if __name__ == "__main__":
    main()