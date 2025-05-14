class Student:
    def __init__(self, student_id, name, department):
        self.__student_id = student_id
        self.__name = name
        self.__department = department
        self.__is_enrolled = True

    def get_info(self):
        return {
            'id': self.__student_id,
            'name': self.__name,
            'department': self.__department,
            'status': 'Enrolled' if self.__is_enrolled else 'Dropped'
        }

    def drop(self):
        self.__is_enrolled = False

class StudentSystem:
    def __init__(self):
        self.__students = []

    def add_student(self, student_id, name, department):
        new_student = Student(student_id, name, department)
        self.__students.append(new_student)
        print(f"{name} enrolled successfully!")

    def remove_student(self, student_id):
        for student in self.__students:
            if student.get_info()['id'] == student_id:
                student.drop()
                print(f"Student {student_id} dropped successfully!")
                return
        print(f"Student {student_id} not found!")

    def show_students(self):
        if not self.__students:
            print("No students enrolled")
        else:
            for student in self.__students:
                info = student.get_info()
                print(f"ID: {info['id']}, Name: {info['name']}, Department: {info['department']}, Status: {info['status']}")

# Simple menu
system = StudentSystem()

while True:
    print("\n1. Add Student")
    print("2. Remove Student")
    print("3. View Students")
    print("4. Exit")
    
    choice = input("Choose option (1-4): ")
    
    if choice == "1":
        student_id = input("Enter student ID: ")
        name = input("Enter name: ")
        department = input("Enter department: ")
        system.add_student(student_id, name, department)
    
    elif choice == "2":
        student_id = input("Enter student ID to remove: ")
        system.remove_student(student_id)
    
    elif choice == "3":
        system.show_students()
    
    elif choice == "4":
        print("Goodbye")
        break
    
    else:
        print("Invalid choice")