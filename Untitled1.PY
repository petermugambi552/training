print("Pattern Printer")

while True:
    print("\nChoose a pattern:")
    print("1. Right-angled triangle")
    print("2. Pyramid")
    print("3. Diamond")
    print("4. Exit")

    choice = input("Enter your choice (1-4): ")

    if choice == '1':
        rows = int(input("Enter number of rows: "))
        i = 1
        while i <= rows:
            j = 1
            while j <= i:
                print("*", end="")
                j += 1
            print()
            i += 1

    elif choice == '2':
        rows = int(input("Enter number of rows: "))
        i = 1
        while i <= rows:
            # Print spaces
            spaces = rows - i
            while spaces > 0:
                print(" ", end="")
                spaces -= 1

            # Print stars
            stars = 2 * i - 1
            while stars > 0:
                print("*", end="")
                stars -= 1
            print()
            i += 1

    elif choice == '3':
        rows = int(input("Enter number of rows (half of diamond): "))

        # Upper half
        i = 1
        while i <= rows:
            spaces = rows - i
            while spaces > 0:
                print(" ", end="")
                spaces -= 1

            stars = 2 * i - 1
            while stars > 0:
                print("*", end="")
                stars -= 1
            print()
            i += 1

        # Lower half
        i = rows - 1
        while i >= 1:
            spaces = rows - i
            while spaces > 0:
                print(" ", end="")
                spaces -= 1

            stars = 2 * i - 1
            while stars > 0:
                print("*", end="")
                stars -= 1
            print()
            i -= 1

    elif choice == '4':
        print("Goodbye!")
        break
    else:
        print("Invalid choice!")
