#
#  Created by NDHuy on 17/05/2020
#  Copyright 2020 by SEstudio
#  Array 01 Dimension - Advance
#

def listMain():
    l = [1, 2, 3, 4, 5, 6, 7, 8]
    print(l)
    print("l[2] = %d" %(l[2]))

    # print from item 0 to item 4
    print(l[:4])

    # print with skip 2 item first
    print(l[2:])
    print(l[2:5])

    # count number of items in list
    print("Count = %d" %(len(l)))

    # Insert item to list
    print("------ Insert item to List ------")
    l.append(99)
    l.insert(2, 88)
    print(l)

    # Remove item from list
    print("------ Remove item from List ------")
    l.remove(88)
    l.pop(0)
    print(l)

    # Clear list
    print("------ Clear all item in List ------")
    l.clear()
    print(l)

    # Delete list
    print("------ Delete List ------")
    del l
    # print(l)

    # Joine 2 list
    print("------ Join to List ------")
    list_01 = ["apple", "banana", "orange"]
    list_02 = [0, 2, 4, 6]

    list_03 = list_01 + list_02
    print(list_03)