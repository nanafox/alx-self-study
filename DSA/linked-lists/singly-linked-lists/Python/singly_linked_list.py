from node import Node


class SinglyLinkedList:
    def __init__(self):
        self.tail = None
        self.head = None
        self.size = 0  # size is updated through insertion/deletion

    def prepend(self, data):
        """
        insert an element at the beginning of the list

        Time complexity: O(1)
        :param data: data to insert
        """
        node = Node(data)
        if self.head is None and self.tail is None:
            # insert at the beginning
            self.head = node
            self.tail = node
        else:
            # adjust pointers before insertion
            node.next = self.head
            self.head = node
        self.size += 1  # update list size

    def append(self, data):
        """
        insert an element at the end of the list

        Time Complexity: O(1)
        :param data: value to append
        """
        node = Node(data)

        if self.tail:
            self.tail.next = node  # update pointer
            self.tail = node  # save new data
        else:
            self.head = node
            self.tail = node
        self.size += 1

    def iter(self):
        """
        abstracts data nodes from user and generates an iterable
        """
        cur = self.head
        while cur:
            data = cur.data
            cur = cur.next
            yield data

    def find_item(self, item):
        """
        checks if an item is in a linked list

        Time Complexity: O(n)

        :param item: item to search for
        :returns: True if found, else False
        """
        for data in self.iter():
            if data == item:
                return True
        return False

    def index(self, element):
        """
        returns the value at the index position given

        :param element: element to search for
        :returns: a formatted string with index information
        """
        compare_index = 0
        for data in self.iter():
            if data == element:
                return f"{data} is at index {compare_index}"
            compare_index += 1

        return f"{element} is not in the list"

    def items(self):
        """
        creates a list with the linked list

        :returns: a list with node values
        """
        items = []
        for item in self.iter():
            items.append(item)
        return items

    def len(self):
        """
        gets the size of a linked list
        Time complexity: O(1)

        :returns: the length of the linked list
        """
        return self.size

    def remove(self, data):
        """
        removes the first occurrence of the data specified
        Time Complexity: O(n)

        :param data: value to delete
        """
        cur = self.head
        prev = self.head

        for item in self.iter():
            if item == data:  # a match is found
                if cur == self.head:
                    self.head = cur.next  # move pointer from node, deleting it
                else:
                    prev.next = cur.next  # update pointer
                self.size -= 1  # decrement size
                break  # hush now

            prev = cur  # update previous with current value
            cur = cur.next  # get next value to check

    def remove_all(self, data):
        """
        removes all occurrences of the data specified
        Time Complexity: O(n)

        :param data: value to delete
        """
        cur = self.head
        prev = self.head

        for item in self.iter():
            if item == data:  # a match is found
                if cur == self.head:
                    self.head = cur.next  # move pointer from node, deleting it
                else:
                    prev.next = cur.next  # update pointer
                self.size -= 1  # decrement size

            prev = cur  # update previous with current value
            cur = cur.next  # get next value to check
