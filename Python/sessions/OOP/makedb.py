#!/usr/bin/python3

import shelve
from person import Person, Employee, Manager

# Objects to be stored

bob = Person("Bob Smith")
sue = Employee("Sue Jones", job="dev", pay=100000, dept="Accounts")
tom = Manager("Tom Jones", 50000, emps_managed=[sue])

with shelve.open("db_person") as db:
    for object in (bob, sue, tom):
        db[object.name] = object
