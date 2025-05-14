students = []

while True:
    choice = input("Enter your choice : ")

    if choice == "1":
        print("\nAll Students:")
        if not students:
            print("No students enrolled")
        else:
            for student in students:
                print(student)

    elif choice == "2":
        student = input("Enter student name to enroll: ")
        students.append(student)
        print(f"{student} has been enrolled")

    elif choice == "3":
        student = input("Enter student name to drop: ")
        if student in students:
            students.remove(student)
            print(f"{student} has been dropped.")
        else:
            print("Student not found.")

    elif choice == "4":
        print("Exiting the system.")
        break

    else:
        print("Invalid choice")
