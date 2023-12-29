#!/usr/bin/python3

"""A unittest to test the add function"""

import unittest
from src.add import add


class TestAdd(unittest.TestCase):
    """Tests the add function

    Args:
        unittest (object): a unit test case object (inherited)
    """

    def test_correct_values(self):
        """Tests values which are expected and correct"""
        self.assertEqual(add(10, 4), 14)
        self.assertEqual(add(90, 45), 135)

    def test_float_values(self):
        """Tests for float values - these should catch the TypeError raised"""
        with self.assertRaises(TypeError):
            add(10.3, 0.3)
            add(0.5, 0.5)
            add(1.5, 0.3)

    def test_string_values(self):
        """Tests for string values - these should catch the TypeError raised"""
        with self.assertRaises(TypeError):
            add("One", "Two")
            add("One", "2")
            add("one hundred and twelve", "90")


if __name__ == "__main__":
    unittest.main()
