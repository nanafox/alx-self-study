#!/usr/bin/python3

from person import Employee, Manager, Person


# create two instances from the person class
person_1 = Person("John Doe", "IT Systems Specialist", 10_000_00)
person_2 = Person("Bob Manny", "Project Manager", 10_992.54)

# print the string representation
# print(person_1)
# print()
# print(person_2)

# modify the pay for person_2
# print()
person_2.pay = 20_000_000
# print(person_2)

# change the first and last name of person_2
person_2.first_name = "Lina"
person_2.last_name = "Banks"
# print()
# print(person_2)

# print()
# try:
    # try using whitespaces only as name
    # person_3 = Person("     ")
# except Exception as err:
    # print(err)

# print debug-worthy information about the instance
# print(person_1.__repr__())

emp_1 = Employee("Randy Olsen", "Systems Support", 150_000, "Network/Systems")
# print(emp_1)
# print(emp_1.__repr__())

emp_2 = Employee("Clark Kent", "DevOps Engineer", 108_000, "DevOps")

# Manager class
mgr_1 = Manager("Bill Doors", 200_0000, (emp_1, emp_2))
print(mgr_1)

print("\nManager 1's team")
mgr_1.team()

print(mgr_1.__repr__())


mgr_2 = Manager("Rose Banks", 300_000, (emp_1, mgr_1))
print()
print(mgr_2)

print("\nManager 2's team")

mgr_2.team()

# this shows a lot of the concepts of polymorphism
print(mgr_2.__repr__())
