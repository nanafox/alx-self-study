#!/usr/bin/python3

from person import Employee, Person


# create two instances from the person class
person_1 = Person("John Doe", "IT Systems Specialist", 10_000_00)
person_2 = Person("Bob Manny", "Project Manager", 10_992.54)

# print the string representation
print(person_1)
print()
print(person_2)

# modify the pay for person_2
print()
person_2.pay = 20_000_000
print(person_2)

# change the first and last name of person_2
person_2.first_name = "Lina"
person_2.last_name = "Banks"
print()
print(person_2)

print()
try:
    # try using whitespaces only as name
    person_3 = Person("     ")
except Exception as err:
    print(err)

# print debug-worthy information about the instance
print(person_1.__repr__())

# let's work with the Employee class
print()
emp_1 = Employee("Maxwell", "Systems Support", 150_000, "IT")
print(emp_1)
print(emp_1.__repr__())
