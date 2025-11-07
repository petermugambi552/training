#STUDENT MANAGEMENT TRACKER
#list to hold all student records

student=[]
#function to add new student
def add_student():
    print("\n---Add New Student-----")
    name=input("Enter Student Name: "  )
    age=input("Enter Student Age: "  )
    course=input("Enter course")

    #TUPLE FOR FIXED DATA
    INFO=tuple([name,age])

    #DICTIONARY TO HOLD STUDENT MARKS
    marks={}
    subjects=int(input("Enter number of subjects: "))

    #loop for collecting marks
    for i in range(subjects):
    subject =input(f"Enter subject{i+1} name:")
    scores=int(input(f"Enter {subject} marks:"))
    marks[subject]=scores


    #combining data in one dictionary
    student={"info": info, "course":,"marks":marks}
    student.append(student)
    print("Student added successfully!")

#function to view all students
def 
        print(f"Name: {info[0]}, Age: {info[1]}, Course: {course}")
        print("Marks:")
        for subject, score in marks.items():
            print(f"{subject}: {score}")
       