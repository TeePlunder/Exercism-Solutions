from typing import List

# Score categories.
# Change the values as you see fit.
YACHT = None
ONES = (lambda dice: checkDiceForNumber(dice, 1))
TWOS = (lambda dice: checkDiceForNumber(dice, 2))
THREES = (lambda dice: checkDiceForNumber(dice, 3))
FOURS = (lambda dice: checkDiceForNumber(dice, 4))
FIVES = (lambda dice: checkDiceForNumber(dice, 5))
SIXES = (lambda dice: checkDiceForNumber(dice, 6))
FULL_HOUSE = None
FOUR_OF_A_KIND = None
LITTLE_STRAIGHT = None
BIG_STRAIGHT = None
CHOICE = sum


def checkDiceForNumber(dice: List[int], searchedNumber: int):
    return searchedNumber * dice.count(searchedNumber)


def score(dice: List[int], category):
    """checks the score of the dice

    Args:
        dice (List of Numbers): list of numbers, always 5
        category (one of the variables):
    """
    return category(dice)
