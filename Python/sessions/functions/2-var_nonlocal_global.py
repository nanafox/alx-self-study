#!/usr/bin/python3


def outer():
    # local namespace

    """
    this will cause an error since nonlocals don't work on global namespaces.
    this was done for testing purposes only and wouldn't be used in an actual
    code because it wouldn't work
    """
    nonlocal value
    value = 5  # outer scope

    def inner():
        # tries to find the nearest enclosing scope: never gets here
        value = 10
        print(f"inner={value}")

    inner()
    print(f"outer={value}")


value = 23  # global namespace

outer()
print(f"global={value}")
