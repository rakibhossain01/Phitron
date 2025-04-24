class Student:
    def __init__(self, name, current_class, id):
        self.name = name
        self.id = id
        self.current_class = current_class

    def __repr__(self) -> str:
        return f'Student with name : {self.name}, class : {self.current_class}, id : {self.id}'

class Teacher:
    def __init__(self, name, subject, id) -> None:
        self.name = name
        self.subject = subject
        self.id = id

    def __repr__(self) -> str:
        return f'Teacher : {self.name}, subject : {self.subject}'

class School:
    def __init__(self, name) -> None:
        self.name = name
        self.teachers = []
        self.students = []

    def add_teacher(self, name, subject):
        id = len(self.teachers) + 101
        teacher = Teacher(name, subject, id)
        self.teachers.append(teacher)

    def enroll(self, name, fee):
        if fee < 6500:
            return 'not enough money'
        else:
            id = len(self.students) + 1
            student = Student(name, 'C', id)
            self.students.append(student)
            return f'{name} is enrolled with id : {id}, extra money {fee - 6500}'

    def __repr__(self) -> str:
        summary = f'Welcome to {self.name}\n'
        summary += '------ OUR Teachers ------\n'
        for teacher in self.teachers:
            summary += str(teacher) + '\n'
        summary += '------ OUR Students ------\n'
        for student in self.students:
            summary += str(student) + '\n'
        return summary.strip()

phitron = School('Phitron')
print(phitron.enroll('alia', 5200))
print(phitron.enroll('rani', 8000))
print(phitron.enroll('ajdkdk', 29999))
print(phitron.enroll('sgdjd', 90000))

phitron.add_teacher('Tom Cruise', 'Algo')
phitron.add_teacher('Decap', 'DS')
phitron.add_teacher('AJ', 'Database')

print(phitron)
