class student:
   
    def __init__(self,id,name):
         self.student_id = id
         self.name = name
        
    def student_info(self):
        print("Student id : "+str(self.student_id)  +  "Student name : "+ self.name)
    
    def stdent_result(self):
        print("CGPA=3.69")
    
student1=student(1234,'Sourav')
student2=student(5678,'Tanmoy')

print(student1.student_info())
print(student2.student_info())