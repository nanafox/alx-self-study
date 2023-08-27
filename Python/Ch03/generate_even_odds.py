from itertools import compress

def even_odds(start, end):
    """
    Prints the even and odd numbers in a given range.

    Args:
        start - starting point
        end - end point
    Note:
        The results are printed based on the value of start. If it's odd,
        a list of odd numbers are printed, followed by even numbers. The
        reverse is also true.
    """
    n = end - start
    selector_one = [1, 0] * n
    selector_two = [0, 1] * n
 
    print(list(compress(range(start, end+1), selector_one)))
    print(list(compress(range(start, end+1), selector_two)))


if __name__ == '__main__':
    even_odds(3, 10)
    print()
    even_odds(17, 23)
    print()
    even_odds(0, 15)

