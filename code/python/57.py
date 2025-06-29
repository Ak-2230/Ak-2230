""" 
                        Classes and objects

"""
# Ex 1

# class person:
#     name="Ansh"
#     Age=18
#     occupation="Coder"
#     income="100 lakh"

# a=person()

# print(a.name)
# print(a.Age)

# a.name="Ak"
# a.Age="0"

# print(a.name)
# print(a.Age)


# Ex 2

class Detail:

    name="Ansh"
    age="18"

    def func(self):
        print(f"The person name is {self.name} and the age is {self.age}")
        print()

b=Detail()
b.func()
b.name="Ak"
b.age="0"
b.func()