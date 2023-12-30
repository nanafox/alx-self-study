#!/usr/bin/python3


import unittest
from person import Person


class TestPerson(unittest.TestCase):
    def setUp(self) -> None:
        self.person_1 = Person("John Doe", "Manager", 200_000)
        self.person_2 = Person("Bob Manny", "Developer", 120_000)

    def tearDown(self) -> None:
        pass

    def test_set_pay(self) -> None:
        """Test the setting and updating of the pay"""
        self.assertEqual(self.person_1.pay, 200_000)

        with self.assertRaises(ValueError):
            self.person_1.pay = "245000"

    def test_person_str(self) -> None:
        """Test the string representation of the person"""
        expected_result = (
            f"Name: {self.person_1.name}\nJob: {self.person_1.job}"
            f"\nAnnual salary: ${self.person_1.pay:,.2f}"
        )

        self.assertEqual(self.person_1.__str__(), expected_result)

        # check the first names
        self.assertEqual(self.person_1.first_name, "John")
        self.assertEqual(self.person_2.first_name, "Bob")

        # check the last name
        self.assertEqual(self.person_1.last_name, "Doe")
        self.assertEqual(self.person_2.last_name, "Manny")

    def test_set_first_name(self):
        """Test the setting and updates of the person's first name"""
        self.person_1.first_name = "Jane"
        self.person_2.first_name = "Chris"

        self.assertEqual(self.person_1.first_name, "Jane")
        self.assertEqual(self.person_2.first_name, "Chris")

        # Let's check for errors while setting first name
        with self.assertRaises(ValueError):
            self.person_1.first_name = 78
            self.person_2.first_name = ["Linda"]
            self.person_1.first_name = ""
            self.person_2.first_name = None

    def test_set_last_name(self):
        """Test the setting and updates of the person's last name"""
        self.person_1.last_name = "Woods"
        self.person_2.last_name = "Longman"

        self.assertEqual(self.person_1.last_name, "Woods")
        self.assertEqual(self.person_2.last_name, "Longman")

        # Let's check for errors while setting first name
        with self.assertRaises(ValueError):
            self.person_1.last_name = 932.3
            self.person_2.last_name = ["Odin"]
            self.person_1.last_name = ""
            self.person_2.last_name = None


if __name__ == "__main__":
    unittest.main()
