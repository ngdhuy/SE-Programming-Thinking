#
#  Created by NDHuy on 17/05/2020
#  Copyright 2020 by SEstudio
#  Array 01 Dimension - Advance
#

def setMain():
    s = {"apple", "banana", "cherry"}
    print(s)
    
    # Check value is exist in set
    print("banana" in s)
    print("orange" in s)

    # Add new item to set
    s.add("orange")
    print(s)

    # Update item in set
    s.update(["lemon", "mango", "banana"])
    print(s)

    # Get len of set
    print("Length of set: %d" %(len(s)))
    
    # Remove item in set if item exist in set
    s.remove("banana")
    print(s)

    # Remove item in set without check exist
    s.discard("lemon")
    print(s)

    # POP is get-out the last item in set
    n = s.pop()
    print("Get the last item in set: %s" %(n))
    print(s)

    # Clear all item in set
    s.clear()
    print(s)

    # Delete set
    del s

    # Join two set
    set1 = {"Apple", "Banana", "Orange"}
    set2 = {1, 2, 3, 4, "Apple"}

    set3 = set1.union(set2)
    print(set3)

    set1.update(set2)
    print(set1)