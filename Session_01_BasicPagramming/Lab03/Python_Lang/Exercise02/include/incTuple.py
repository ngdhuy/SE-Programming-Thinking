
#
#  Created by NDHuy on 17/05/2020
#  Copyright 2020 by SEstudio
#  Array 01 Dimension - Advance
#   Tuple: is ordered array and Unchangeable
#

def tupleMain():
    t = (1, 2, 3, 4, 5, 8, 6, 7)
    print(t)
    print(t[3])
    print(t[-1])
    print(t[-2])

    # print from item 0 to item 4
    print(t[:4])
    print(t[2:])
    print(t[2:5])

    # convert tuple to list
    print("----- Convert tuple to list -----")
    l = list(t)
    print(t)
    print(l)

    print(t[2])
    # t[2] = 0 => Tuple cannot change item
    print(t[2])

    print("----- Join two tuple to one -----")
    tuple_01 = ("Orange", "Apple", "Banana")
    tuple_02 = (0, 1, 2, 3, 4, 5, 6)

    tuple_03 = tuple_02 + tuple_01
    print(tuple_03)