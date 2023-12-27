#!usr/bin/python3


def add(x: int, y: int) -> int:
    """Returns the sum of two integer number

    Args:
        x (int): the first number
        y (int): the second number

    Raises:
        TypeError: when any of the operands is not an integer

    Returns:
        int: the sum of the two operands

    Tests:
        >>> add(10, 23)
        33
        >>> add(4.3, 90)
        Traceback (most recent call last):
        ...
        TypeError: operands must be an integer
        >>> add("Hello", 7734)
        Traceback (most recent call last):
        ...
        TypeError: operands must be an integer
        >>> add(43, 0)
        43
    """
    if not isinstance(x, int) or not isinstance(y, int):
        raise TypeError("operands must be an integer")

    return x + y
