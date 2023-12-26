#!/usr/bin/python3

"""
the `exec()` function can run one or multiple lines of code but it doesn't
return any value (well, it returns None...)
"""


def add(x: int, y: int) -> int:
    """
    Returns the sum of two numbers

    Args:
        x (int): the first number
        y (int): the second number

    Returns:
        int: the sum of x and y (x + y)
    """
    return (x + y)


if __name__ == "__main__":
    x = 1
    y = 2

    code = """
result = add(x, y)
print(f"{x} + {y} = {result}")
    """

    exec(code, globals(), {'add': add})
