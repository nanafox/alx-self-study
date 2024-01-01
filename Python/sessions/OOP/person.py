#!/usr/bin/python3

"""A module for modelling a real world person"""


from typing import Iterable


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

        if fullname.strip() == "":
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

    def __repr__(self) -> str:
        """
        Returns information about an instance for developers.

        Returns:
            str: Enough information about the instance for developers.
        """
        return (
            "\n*** Instance information... ***\n"
            "<{:s} object at 0x{:x}>\n"
            "{{'name': {:s}, 'job': {:s}, 'pay': {:.2f}}}".format(
                str(type(self))[7:-1],  # grab the namespace of the object
                self.__hash__(),  # get the address of the object
                self.name,  # the name of the employee
                self.job,  # the job they do
                self.pay,  # their annual salary
            )
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

        if new_first_name.strip() == "":
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

        if new_last_name.strip() == "":
            raise ValueError("last name cannot be empty")

        self.name = self.name.replace(self.last_name, new_last_name)


class Employee(Person):
    def __init__(
        self,
        name: str,
        job: str = None,
        pay: float | int = 0,
        dept: str = None,
    ) -> None:
        """
        Instantiates an Employee object

        Args:
            name (str): The name of the person.
            job (str, optional): The job the person does. Defaults to None.
            pay (float | int, optional): The salary of the person.
            Defaults to 0.0.
            dept (str, optional): The employee's department. Defaults to None.
        """
        super().__init__(name, job, pay)
        self.dept = dept

    @property
    def dept(self) -> str:
        """
        Returns the value of the employee's department.

        Returns:
            str: The employee's department.
        """
        return self.__dept

    @dept.setter
    def dept(self, emp_dept: str) -> None:
        """
        Sets or updates the value of an employee's department.

        Args:
            emp_dept (str): The employee's department.

        Raises:
            ValueError: When the value of the department is not a string or
            an empty string.
        """
        if not isinstance(emp_dept, str):
            raise ValueError("the department should be a string")

        if emp_dept.strip() == "":
            raise ValueError("department name cannot be empty")

        self.__dept = emp_dept

    def __str__(self) -> str:
        """
        Overrides the __str__() method so it fits the use for an employee.

        Returns:
            str: The updated string for the employee.
        """
        return f"{super().__str__()}\nDept: {self.dept}"

    def __repr__(self) -> str:
        """
        Provides debug-worthy information for developers about an employee.

        Returns:
            str: Information about an employee.
        """
        return f"{super().__repr__()[:-1]}, 'dept': {self.dept}}}"


class Manager(Employee):
    def __init__(
        self, name: str, pay: float | int = 0, emps_managed: list = None
    ) -> None:
        """
        Creates a new Manager object.

        Args:
            name (str): The name of the Manager.
            pay (float | int, optional): The manager's salary. Defaults to 0.
            emps_managed (list): A list of employees managed by this manager.
        """
        super().__init__(name, "Manager", pay, "Managers")
        self.employees_managed = emps_managed

    def __str__(self) -> str:
        return "{:s}\nManages: \n\t{:s}".format(
            super().__str__(),
            "\n\t".join(member.name for member in self.__team_members()),
        )

    def __team_members(self):
        """
        Generates an iterable of the team members a manager manages

        Yields:
            Employee | Manager: Objects of the employees or managers a
            particular manager manages
        """
        for emp in self.employees_managed:
            yield emp

    def team(self) -> None:
        """
        Prints the information about the employees managed by this manager
        """
        for i, emp in enumerate(self.__team_members(), start=1):
            print(f"{i}.\n{emp}\n")