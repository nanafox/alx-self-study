#!/usr/bin/python3

from person import Person


person_1 = Person("John Doe", "IT Systems Specialist", 10_000_00)
person_2 = Person("Bob Manny", "Project Manager", 10_992.54)

print(person_1)
print()
print(person_2)

print()
person_2.pay = 20_000_000
print(person_2)

person_2.first_name = "Lina"
person_2.last_name = "Banks"
print()
print(person_2)

print()
try:
    person_3 = Person("     ")
except Exception as err:
    print(err)
