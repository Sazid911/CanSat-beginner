# Leap Year

yr = int(input("Enter year: "))

if yr % 4 == 0:
    if yr % 100 != 0:
        print(f"{yr} is a leap year")
    else:
        if yr % 400 == 0:
            print(f"{yr} is a leap year")
        else:
            print(f"{yr} is not a leap year")
else:
    print(f"{yr} is not a leap year")
