def tail_factorial(n, a=1):
    """
    generating factorials using tail recursion

    :param n: factorial number
    :param a: accumulator, defaults to 1
    :return: n! (n factorial)
    """
    if n == 0:
        return a
    return tail_factorial(n - 1, n * a)


if __name__ == '__main__':
    nums = [x for x in range(1, 11)]

    for i in nums:
        print(f"{str(i).rjust(2)}! = {str(tail_factorial(i)).rjust(10)}")
