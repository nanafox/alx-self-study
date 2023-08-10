class Node:
    """
    an interface a simple singly linked list

    It contains just the data portion and the next pointer for
    basic singly linked list traversal.
    """
    def __init__(self, data):
        self.data = data
        self.next = None

    def __str__(self):
        return str(self.data)
