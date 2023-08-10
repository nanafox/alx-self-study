class Node:
    """
    A simple node for linked list
    """
    def __init__(self, data):
        self.data = data
        self.next = None


a = Node("A")
b = Node("B")
c = Node("C")
d = Node("D")
e = Node("E")

# link nodes A -> B -> C -> D -> E -> None
a.next = b
b.next = c
c.next = d
d.next = e


def linked_list_values(head: Node) -> list:
    """
    return node values in a list

    :param head: starting node
    """
    nodes = []
    while head is not None:
        nodes.append(head.data)
        head = head.next
    return nodes


def print_list(head: Node):
    """
    traverse nodes iteratively

    :param head: start node
    """
    while head is not None:
        print(head.data, end=" ")
        head = head.next # update head
    print()


def print_recursive(head: Node):
    """
    traverse nodes recursively

    :param head: start node
    """
    if head is None:
        return
    print(head.data, end=" ")
    print_recursive(head.next)


print("Iterative: ", end="")
print_list(a)

print("Recursive: ", end="")
print_recursive(a)
print()

print(f"List: {linked_list_values(a)}")
