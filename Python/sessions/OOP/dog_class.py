#!/usr/bin/python3


class Dog:
    """
    A simple dog class for studying OOP
    """

    def __init__(self, name: str, breed: str, age: float):
        """
        Initialized the Dog class

        Args:
            name (str): the name of the dog
            breed (str): the dog's breed
            age (float): the dog's age
        """
        self.name = name
        self.age = age
        self.breed = breed

    def __str__(self) -> str:
        """
        Returns the string representation of an instance of the Dog class

        Returns:
            str: the information of about the dog
        """
        return f"Name: {self.name}\nBreed: {self.breed}\nAge: {self.age}"


dog1 = Dog("biggie", "Poodle", 3)
print(dog1)
