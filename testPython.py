import math  # For mathematical functions
import datetime  # For date and time functions

def reverse_string(s):
    return s[::-1]

def main():
    # String manipulation
    str_input = input("Enter a string: ")
    
    print(f"Original string: {str_input}")
    reversed_str = reverse_string(str_input)
    print(f"Reversed string: {reversed_str}")
    print(f"Length of the string: {len(str_input)}")

    # Mathematical calculations
    num = 25.0
    print(f"Square root of {num} is {math.sqrt(num)}")
    print(f"Cosine of {num} is {math.cos(num)}")

    # Time functions
    current_time = datetime.datetime.now()
    print(f"Current date and time: {current_time}")

if __name__ == "__main__":
    main()
