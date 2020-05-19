#
#  Created by NDHuy on 17/05/2020
#  Copyright 2020 by SEstudio
#  Array 01 Dimension - Advance
#

def dictionaryMain():
    d = { 
        "name": "Peter", 
        "age": 2, 
        "city": ["London", "HCM"] 
    }
    print(d)

    # Get one item in dictionary
    name = d["name"]
    age = d["age"]
    city = d.get("city")
    print("Name: %s - %d years old - %s" %(name, age, city))

    # Update item in dictionary
    d["city"] = "New York"
    print(d)

    # Print dictionary
    for i in d: 
        print("%s - %s" %(i, d[i]))

    for i in d.values():
        print(i)

    for x, y in d.items():
        print("Key: %s - Value: %s" %(x, y))

    # Check key exist in dictionary
    if "city" in d:
        print("City: %s" %(d["city"]))

    # Get length of Dictionary
    print("Length of dictionary: %d" %(len(d)))

    # Add new item into Dictionary
    d["job"] = "student"
    d["age"] = 20
    print(d)

    # Remove item in Dictionary
    d.pop("job")
    print(d)

    d.popitem()
    print(d)

    d["city"] = "Paris"
    d["job"] = "Student"
    print(d)
    del d["age"]
    print(d)

    # Clear all item dictionary
    d.clear()
    print(d)

    # Delete dictionary
    del d

    # Copy a dictionary
    product = {
        "id"    : 1, 
        "name"  : "iPhone", 
        "brand" : "Apple", 
        "price" : 1500
    }

    print(product)

    p = dict(product)
    print(p)

    # Nest dictionary
    listOfProducts = {
        "product01": {
            "id"    : 1, 
            "name"  : "iPhone"
        },
        "product02":{
            "id"    : 2,
            "name"  : "Note 10 plus",
            "price" : 1600
        }, 
        "product03": {
            "id"    : 3, 
            "name"  : "iPad Pro 12"
        }
    }

    print(listOfProducts)