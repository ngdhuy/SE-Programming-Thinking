#
#  Created by NDHuy on 21/05/2020
#  Copyright 2020 by SEstudio
#  Array 01 Dimension
#

from include import array as arr

def main():
    a = []
    arr.Enter(a)
    arr.Output(a)
    arr.PrintOdds(a)
    arr.PrintEvens(a)
    print("Count of %d in array: %d" %(5, arr.CountValue(a, 5)))


if __name__ == "__main__":
    main()