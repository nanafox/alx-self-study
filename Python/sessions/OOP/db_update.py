#!/usr/bin/python3


"""Updates the salary for the manager using the default percentage of 10%"""

import shelve

with shelve.open("db_person") as db:
    tom = db["Tom Jones"]
    print(f"==== Before salary raise ====\n\n{tom}")

    tom.give_raise()
    db['Tom Jones'] = tom

    print(f"\n==== After salary raise ====\n\n{tom}")
