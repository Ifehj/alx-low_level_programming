#!/usr/bin/python3
"""Defines a base geometry class BaseGeometry."""

class BaseGeometry:
	def area(self):
		raise Exception("area() is not implemented")
        
	def integer_validator(self, name, value):
		"""Validate a parameter as an integer.

        Args:
            name (str): The name of the parameter.
            value (int): The parameter to validate.
        Raises:
            TypeError: If value is not an integer.
            ValueError: If value is <= 0.
        """
		if type(value) is not int:
			raise TypeError("{:s} must be an intger".format(name))
		if value <= 0:
			raise ValueError("{:s} must be greater than 0".foramt(name))
