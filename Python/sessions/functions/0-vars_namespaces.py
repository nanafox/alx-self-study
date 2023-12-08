#!/usr/bin/python3


def outer():
    # local namespace

    value = 5  # outer scope

    def inner():
        value = 10  # inner scope
        print(f"inner={value}")

    inner()
    print(f"outer={value}")


value = 23  # global namespace

outer()
print(f"global={value}")
