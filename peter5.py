print("Multiplication Table Generator")

while True:
    try:
        number = int(input("Enter a number: "))
        limit = int(input("Enter a limit: "))
        print(f"\nMultiplication table for {number}:")
        i = 1
        while i <= limit:
            print(f"{number} * {i} = {number * i}")
            i += 1
        another = input("\nGenerate another table? (y/n): ").lower()
        if another != 'y':
            break
    except ValueError:
        print("Please enter valid integers!")
