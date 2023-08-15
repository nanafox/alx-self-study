def factorial(n, a=1):
    """
    Gets the factorial of n

    Args:
        n: the number to check factorial of
        a: accumulator. Default to 1.

    Returns:
        n factorial
    """

    if n == 1:
        return a
    return factorial(n - 1, n * a)


def pow(x, y):
    """
    Gets the value of `x` to the power `y`

    Args:
        x: base
        y: exponent

    Returns:
        the value of `x` to the power `y`
    """
    return x ** y
