def leap_year(year):
    t1 = year % 4 == 0
    t2 = year % 100 == 0
    t3 = year % 400 == 0
    t4 = (year % 100 and year % 400) == 0
    t5 = year % 4 == 0 or (year % 100 and year % 400) == 0

    if (year % 4 == 0):
        if (year % 100 == 0):
            if (year % 400 == 0):
                return True
            return False
        return True
    return False


print(f"1997 leap? => {leap_year(1997)}")
print(f"1996 leap? => {leap_year(1996)}")
print(f"1900 leap? => {leap_year(1900)}")
print(f"2000 leap? => {leap_year(2000)}")
print(f"2028 leap? => {leap_year(2028)}")
