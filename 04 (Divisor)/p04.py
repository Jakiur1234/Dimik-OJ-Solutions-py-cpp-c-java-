def solve():
    # Your solution code goes here
    pass

if __name__ == "__main__":
    tc = int(input())

    for i in range(tc):
        number = int(input())

        # Print the case number
        print(f"Case {i + 1}: ", end="")

        # Continue the loop from 1 to the number
        for j in range(1, number):
            # If the number is divisible by j, then print j because it is a divisor of the number
            if number % j == 0:
                print(j, end=" ")

        print(number)
