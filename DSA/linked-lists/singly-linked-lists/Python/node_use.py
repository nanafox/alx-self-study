from singly_linked_list import SinglyLinkedList as llist

if __name__ == '__main__':
    nodes = llist()
    
    nodes.append(45)
    nodes.append(23)
    nodes.append(45)
    nodes.prepend(45)
    nodes.prepend("Hello")
    nodes.append("End")

    nodes.prepend("Beginning")

    print(nodes.items())
    print(f"Length: {nodes.len()}")
    print(nodes.index(45))
    print("Found" if nodes.find_item("End") else "Not found")
    print("Found" if nodes.find_item("Null") else "Not found")

    nodes.remove(45)
    print(nodes.items())
    print(f"Length: {nodes.len()}")
    nodes.remove_all(45)
    print(nodes.items())
    print(f"Length: {nodes.len()}")
