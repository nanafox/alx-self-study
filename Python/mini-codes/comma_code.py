#!/usr/bin/python3


def comma_code(items: list) -> str:
    """
    Returns a comma-separated string with the items in a list

    Args:
        items (list): the list containing the elements

    Returns:
        str: a comma-separated string of the items
    """
    data = ""
    size = len(items)

    if (size == 1):
        return str(items[size - 1])

    for i in range(size):
        if i == size - 1:
            data += f"and {items[i]}"
        else:
            data += f"{items[i]}, "

    return data


if __name__ == "__main__":
    spam = ['apples', 'bananas', 'tofu', 'cats']
    s = ['apples']

    print(comma_code(spam))
    print(comma_code(s))
