#!/usr/bin/python3

"""A module for modelling a real world person"""


class Person:
    """A blueprint for a person in real life"""

    def __init__(
        self, name: str, job: str = None, pay: float | int = 0
    ) -> None:
        """
        Instantiates a Person object.

        Args:
            name (str): The name of the person.
            job (str, optional): The job the person does. Defaults to None.
            pay (float | int, optional): The salary of the person.
            Defaults to 0.0.

        Tests:
            >>> person_1 = Person("John Doe", "Manager", 200_000)  # works fine
            >>> person_2 = Person("Bob Manny", "Developer", "120_000")  # Error
            Traceback (most recent call last):
            ValueError: The pay must be a numeric type
            >>> person_1 = Person("John Doe")
            >>> person_1.first_name = "Jane"
            >>> person_1.name
            'Jane Doe'
        """
        self.name = name
        self.job = job
        self.pay = pay

    @property
    def name(self) -> str:
        """
        Returns the full name of the person.

        Returns:
            str: The person's full name.
        """
        return self.__name

    @name.setter
    def name(self, fullname: str) -> None:
        """
        Updates or sets the full name of the person.

        Args:
            fullname (str): The person's full name to use.

        Raises:
            ValueError: When the value provided as the new full name is
            not a string. This error is also raised for empty strings.
        """
        if not isinstance(fullname, str):
            raise ValueError("name must be a string")

        if fullname == "" or fullname.strip() == "":
            raise ValueError("name cannot be empty")

        self.__name = fullname.strip()

    @property
    def pay(self) -> None:
        """Returns the pay of the person"""
        return self.__pay

    @pay.setter
    def pay(self, pay: float | int) -> None:
        """
        Sets or updates the pay of a person.

        Args:
            pay (float | int): The amount money a person is paid (annually).

        Raises:
            ValueError: When the pay is not a numeric value.
        """
        if not isinstance(pay, (int, float)):
            raise ValueError("The pay must be a numeric type")

        self.__pay = pay

    def __str__(self) -> str:
        """
        Returns the string representation of a person.

        Returns:
            str: The string representation of the person with their details.
        """
        return (
            f"Name: {self.name}\nJob: {self.job}\n"
            f"Annual salary: ${self.pay:,.2f}"
        )

    @property
    def first_name(self) -> str:
        """
        Returns the first name of the person.

        Returns:
            str: The first name of the person.
        """
        return self.name.split()[0]

    @first_name.setter
    def first_name(self, new_first_name: str) -> None:
        """
        Updates the first name of the person.

        Args:
            new_first_name (str): The new first name to use.

        Raises:
            ValueError: When the value provided as the new first name is
            not a string. This error is also raised for empty strings.
        """
        if not isinstance(new_first_name, str):
            raise ValueError("first name must be a string")

        if new_first_name == "" or new_first_name.strip() == "":
            raise ValueError("first name cannot be empty")

        # replace the first name, this essentially updates the name attribute
        self.name = self.name.replace(self.first_name, new_first_name)

    @property
    def last_name(self) -> str:
        """
        Returns the last name of the person.

        Returns:
            str: The last name of the person.
        """
        return self.name.split()[-1]

    @last_name.setter
    def last_name(self, new_last_name: str) -> None:
        """
        Updates the last name of the person.

        Args:
            new_last_name (str): The new last name to use.

        Raises:
            ValueError: When the value provided as the new last name is
            not a string. This error is also raised for empty strings.
        """
        if not isinstance(new_last_name, str):
            raise ValueError("last name must be a string")

        if new_last_name == "" or new_last_name.strip() == "":
            raise ValueError("last name cannot be empty")

        self.name = self.name.replace(self.last_name, new_last_name)
