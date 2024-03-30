#!/usr/bin/python3
"""This script converts a binary string into ASCII text."""

def break_into_bytes(data: str) -> list:
    """Breaks a binary string into a list of 8-bit bytes.
    
    Args:
        data (str): A binary string.

    Returns:
        list: A list of 8-bit bytes.
    """
    return [data[i:i+8] for i in range(0, len(data), 8)]


def convert_to_ascii(data: str) -> str:
    """Converts a list of binary strings to ASCII text.
    
    Args:
        data (list): A list of binary strings.

    Returns:
        str: A string of ASCII text.
    """
    return ''.join([chr(int(byte, 2)) for byte in data])


# an example of how to use the functions
if __name__ == '__main__':
    data = "001000100100010001101111001000000110111101101110011001010010000001110100011010000110100101101110011001110010000001110100011010000110000101110100001000000111001101100011011000010111001001100101011100110010000001111001011011110111010100100000011001010111011001100101011100100111100100100000011001000110000101111001001000100010000000101101001000000100010101101100011001010110000101101110011011110111001000100000010100100110111101101111011100110110010101110110011001010110110001110100"

    bytes = break_into_bytes(data)
    ascii_text = convert_to_ascii(bytes)

    print(ascii_text)

