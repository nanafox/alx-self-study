from singly_linked_list import SinglyLinkedList as llist

numbers = llist()

for i in range(1, 11):
    numbers.append(i)

print(numbers.items())

numbers.insert(1, 1.5)
numbers.append(11)
numbers.prepend(0)

print(numbers.items())

numbers.reverse()
print(numbers.items())

numbers.reverse()
numbers.pop()
print(numbers.items())
