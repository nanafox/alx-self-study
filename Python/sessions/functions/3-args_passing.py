#!/usr/bin/python3


def func(data: list) -> list:
    """
    does something to a list

    Args:
        input_param (list): the list to work on

    Returns:
        list: the updated list
    """
    data[2] = 67

    data = [4, 3, 10]  # this does not affect the caller

    print("\nAfter reinitializing data in function")
    print(f"id: {id(data)}")
    print(data)

    return data


if __name__ == "__main__":
    data = [3, 1, 90, 34, 23, 21]

    print("Before calling function")
    print(f"id: {id(data)}")
    print(data)

    func(data)

    print("\nAfter calling function")
    print(f"id: {id(data)}")
    print(data)
