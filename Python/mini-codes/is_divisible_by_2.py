#!/usr/bin/env python3


def is_divisible_by_2(nums_list: list) -> list:
    """
    Returns a list of True and/or False values for when a number in the
    num_list is divisible to or not respectively

    Args:
            nums_list (list): the list of numbers to process

    Returns:
            list: the list of True and/or False value after processing
    """
    return [True if x % 2 == 0 else False for x in nums_list]
