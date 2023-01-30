from math import log2, ceil
def function():
    val1, val2, val3, val4 = map(int, input().split())

    if (val1 == 1 and val3 == 1):
        print("NO")
    elif(val1 == val3):
        if(val2 > val4):
            print("YES")
        elif(val2 <= val4):
            print("NO")
    elif (val1 != val3):
        if(val2 == val4 == 1):
            if(val1 > val3):
                print("YES")
            else:
                print("NO");
        elif (val2 == val4):
            if(val1 > val3):
                print("YES")
            else:
                print("NO")
        elif(val1 != val3): # diferent base difernt power
            if(val2 * log2(val1) > val4 * log2(val3)):
                print("YES")
            else:
                print("NO")
function()