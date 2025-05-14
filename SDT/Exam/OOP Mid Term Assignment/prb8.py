students = []

while True:
    print("\nMenu:")
    print("1. View All Students")
    print("2. Enroll Student")
    print("3. Drop Student")
    print("4. Exit")
    
    try:
        choice = input("Enter your choice (1-4): ")
        
        if choice == "1":
            print("\nAll Students:")
            if not students:
                print("No students enrolled.")
            else:
                for idx, student in enumerate(students, 1):
                    print(f"{idx}. {student}")
        
        elif choice == "2":
            student = input("Enter student name to enroll: ").strip()
            if not student:
                raise ValueError("Student name cannot be empty")
            if student in students:
                raise ValueError(f"{student} is already enrolled")
            students.append(student)
            print(f"{student} has been enrolled.")
        
        elif choice == "3":
            if not students:
                print("No students to drop.")
                continue
            student = input("Enter student name to drop: ").strip()
            if student not in students:
                raise ValueError(f"{student} is not enrolled")
            students.remove(student)
            print(f"{student} has been dropped.")
        
        elif choice == "4":
            print("Exiting the system.")
            break
        
        else:
            print("Invalid choice. Please enter a number between 1 and 4.")
    
    except ValueError as e:
        print(f"Error: {e}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")