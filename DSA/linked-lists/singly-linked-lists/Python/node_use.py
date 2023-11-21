from singly_linked_list import SinglyLinkedList as llist

if __name__ == '__main__':
    nodes = llist()

    # general appends and prepends
    nodes.append(45)
    nodes.append(23)
    nodes.append(45)
    nodes.prepend(45)
    nodes.prepend("Hello")
    nodes.append("End")
    nodes.prepend("Beginning")

    # show output of operations
    print(nodes)
    print(f"Length: {len(nodes)}")
    print(nodes.index(45))
    print("Found" if nodes.find_item("End") else "Not found")
    print("Found" if nodes.find_item("Null") else "Not found")

    # more operations and output - deletion
    nodes.remove(45)
    print(nodes)
    print(f"Length: {len(nodes)}")
    nodes.remove_all(45)
    print(nodes)
    print(f"Length: {len(nodes)}")

    # perform insertion at any given point
    nodes.insert(1, "Here")
    print(nodes)
    nodes.insert(10, "Nerh")
    print(nodes)
    print("Length:", len(nodes))

    s = nodes.pop(0)
    print(f"{s} was popped from list")
    print(nodes)
    s = nodes.pop()
    print(f"{s} was popped from list")
    print(nodes)

    # list reversal
    print("Reversing Lists...")
    nodes.reverse()
    print(nodes)
    print("Undoing Reversal")
    nodes.reverse()
    print(nodes)
