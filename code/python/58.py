""" 
                            constructors
"""
# Ex 1
#Default constructors
# class person:
#     def __init__(self):
#         print("Hey i am constructor")

# a=person()
# b=person()

# Ex 2
class person1:
    def __init__(self,n,ag):
        self.name=n
        self.age=ag
        print(self.name)
        print(self.age)

a=person1("Ak",12)