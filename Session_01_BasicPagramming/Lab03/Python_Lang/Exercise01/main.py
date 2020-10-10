#
#  Created by NDHuy on 08/05/2020
#  Copyright 2020 by SEstudio
#  Array 01 Dimension
#

def printArray(a):
    s = ""
    for i in a:
        s += str(i) + "\t"
    print(s)

def main():
    a = [1, 2, 3, 4, 5]

    printArray(a)

    #get number of items in array
    n = len(a)
    print("Len of Array: %d" %(n))
    print("a[3] = %d" %(a[3]))

    #insert a item to arrray (append to tail of array)
    a.append(9)
    a.append(8)
    a.append(2)
    printArray(a)

    #insert a item to index of array
    a.insert(3, 12)
    printArray(a)

    #remove first item (with the same value) in array
    a.remove(2)
    printArray(a)

    #remove last item in array
    n = a.pop(4)
    printArray(a)
    print("n= %d" %(n))

    #a new variable b reference to memory of array a
    b = a
    printArray(a)
    printArray(b)
    a[1] = 0
    printArray(a)
    printArray(b)

    #Copy new array memory for array
    print("---------------- Copy new array ----------------")
    b = a.copy()
    printArray(a)
    printArray(b)
    a[4] = 88
    printArray(a)
    printArray(b)

    #reverse array
    print("---------------- Revert array ----------------")
    b.reverse()
    printArray(b)

    #Merge two array to one
    print("---------------- Merge arrays ----------------")
    a.extend(b)
    printArray(a)

    #Count a value in array
    print("---------------- Count value arrays ----------------")
    n = a.count(2)
    print("number of %d in array: %d" %(2, n))

    #Sort array
    print("---------------- Sort arrays ----------------")
    a.sort()
    printArray(a)

if __name__ == "__main__":
    main()