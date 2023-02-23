def equilateral(sides):
    a, b, c = sides
    return a == b == c


def isosceles(sides):
    a, b, c = sides

    return equilateral(sides) or a == b or a == c or b == c


def scalene(sides):
    a, b, c = sides
    return a != b != c
