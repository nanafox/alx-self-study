def bubble_sort(numbers):
    """
    Sort numbers using the bubble sort algorithm

    :param numbers: list of numbers
    :return: sorted list in ascending order
    """
    size = len(numbers)
    for i in range(size):
        for j in range(0, size - i - 1):
            if numbers[j] > numbers[j + 1]:
                numbers[j], numbers[j + 1] = numbers[j + 1], numbers[j]

    return numbers


if __name__ == '__main__':
    print(bubble_sort([2, 34, 5, 2]))
    print(bubble_sort([6, 34.1, -1, 3, 0, -3]))
