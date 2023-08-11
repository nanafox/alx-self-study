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
    print(nodes.items())
    print(f"Length: {nodes.len()}")
    print(nodes.index(45))
    print("Found" if nodes.find_item("End") else "Not found")
    print("Found" if nodes.find_item("Null") else "Not found")
    
    # more operations and output - deletion
    nodes.remove(45)
    print(nodes.items())
    print(f"Length: {nodes.len()}")
    nodes.remove_all(45)
    print(nodes.items())
    print(f"Length: {nodes.len()}")

    # perform insertion at any given point
    nodes.insert(1, "Here")
    print(nodes.items())
    nodes.insert(10, "Nerh")
    print(nodes.items())
    print("Length:", nodes.len())

    s = nodes.pop(0)
    print(f"{s} was popped from list")
    print(nodes.items())
    s = nodes.pop()
    print(f"{s} was popped from list")
    print(nodes.items())
    
    # list reversal
    print("Reversing Lists...")
    nodes.reverse()
    print(nodes.items())
    print("Undoing Reversal")
    nodes.reverse()
    print(nodes.items())
