from node import Node


class SinglyLinkedList:
    def __init__(self):
        self.tail = None
        self.head = None
        self.size = 0  # size is updated through insertion/deletion
    
    def __len__(self):
        """
        gets the size of a linked list
        Time complexity: O(1)

        :returns: the length of the linked list
        """
        return self.size

    def __iter__(self):
        """
        abstracts data nodes from user and generates an iterable
        """
        cur = self.head
        while cur:
            data = cur.data
            cur = cur.next
            yield data

    def __items__(self):
        """
        creates a list with the linked list

        :returns: a list with node values
        """
        items = []
        for item in self.__iter__():
            items.append(item)
        return items

    def __repr__(self):
        return repr(self.__items__())

    def __str__(self):
        return str(self.__items__())

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

    def insert(self, index, data):
        """
        insert at any given index position

        :param index: position to insert at
        :param data: the value to be inserted

        Mimics Python's list insert() method to some extend. It doesn't implement
        the negative indexing. But upper bound index greater than the list's size
        are all taken as appends. So for a linked list of size 4, if the instruction
        `nodes.insert(8, 45)` is received, it is treated as if `nodes.append(45)`
        was called.

        Time Complexity: O(1) best case, O(n) worst case
        Space complexity: O(1)
        """
        if index < 0:
            print("Invalid index position")
            return

        if index == 0:
            self.prepend(data)
        elif index == self.size or index > self.size:
            self.append(data)
        else:
            compare_index = 0
            node = Node(data)
            cur = self.head
            prev = self.head

            while compare_index < index:
                compare_index += 1
                prev = cur
                cur = cur.next
            prev.next = node
            node.next = cur
            self.size += 1  # update size

    def find_item(self, item):
        """
        checks if an item is in a linked list

        Time Complexity: O(n)

        :param item: item to search for
        :returns: True if found, else None
        """
        for data in self.__iter__():
            if data == item:
                return True
        return None

    def index(self, element):
        """
        returns the value at the index position given

        :param element: element to search for
        :returns: index position if found, else None
        """
        index = 0
        for data in self.__iter__():
            if data == element:
                return index
            index += 1
        return None

    def remove(self, data):
        """
        removes the first occurrence of the data specified
        Time Complexity: O(n)

        :param data: value to delete
        """
        cur = self.head
        prev = self.head

        for item in self.__iter__():
            if item == data:  # a match is found
                self.size -= 1  # decrement size
                if cur == self.head:
                    self.head = cur.next  # move pointer from node, deleting it
                else:
                    prev.next = cur.next  # update pointer
                break  # hush now

            prev = cur  # update previous with current value
            cur = cur.next  # get next value to check

    def remove_all(self, data):
        """
        removes all occurrences of the data specified
        Time Complexity: O(n)

        :param data: value to delete
        """
        head_node = Node(0) # temporal head node
        head_node.next = self.head
        cur = head_node

        while cur.next:
            if cur.next.data == data:  # a match is found
                self.size -= 1  # decrement size
                cur.next = cur.next.next # adjust pointers, removing node
            else:
                cur = cur.next  # get next value to check

        self.head = head_node.next

    def pop(self, index=-1):
        """
        removes an item and returns the data

        :param index: index, defaults to -1
        :return: value of deleted element
        """
        cur = self.head
        prev = self.head
        c_index = 0

        """
        This current implementation is obviously not the best I want to get to
        but for now, here's what I have to offer. Python's list implementation
        of the `pop()` method removes the last element in the list and returns
        the value that was stored at that position.
        Mine does same, but with a Time complexity of O(n). Currently, my best
        case is when index is 0. That gives me an O(1).
        """
        if (index < 0) and (self.size + index >= 0):
            index = self.size + index # get index of element from right

        elif index == 0:  # pop first from beginning item. O(1)
            self.head = cur.next
            self.size -= 1
            return cur.data

        for _ in self.__iter__():
            if c_index == index:  # a match is found
                self.size -= 1  # decrement size
                prev.next = cur.next  # update pointer
                return cur.data

            prev = cur  # update previous with current value
            cur = cur.next  # get next value to check
            c_index += 1

    def reverse(self):
        """
        reverses list in place
        """
        cur = self.head
        prev = None

        for _ in self.__iter__():
            next = cur.next
            cur.next = prev
            prev = cur
            cur = next
        self.head = prev
