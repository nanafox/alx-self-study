#!/usr/bin/python3


def outer():
    # local namespace

    value = 5  # outer scope

    def inner():
        nonlocal value
        value = 10  # nearest enclosing scope: outer
        print(f"inner={value}")

    inner()
    print(f"outer={value}")


value = 23  # global namespace

outer()
print(f"global={value}")
