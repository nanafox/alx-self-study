def dec2bin(num):
    """
    decimal to binary convertor

    :param num: base 10 numeral
    :return: list with binary digits
    """
    binary = []
    while (num != 0):
        binary.append(int(num % 2))
        num //= 2
    return binary

def print_binary(n):
    """
    print binary representation

    :param n: binary digits
    """
    for i in n[::-1]: # print list in reversed order
        print(i, end="")
    print()


print_binary(dec2bin(10))
print_binary(dec2bin(64))
print_binary(dec2bin(65))
