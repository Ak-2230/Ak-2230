import itertools
import string
chrackter=string.ascii_letters


# user=int(input("Enter user length here: "))

userpass=""
useruser=""

user_found=""

found = False
with open('default_pass.txt','r') as password:
    with open('default_user.txt','r') as username:
        userpass+=password.read()
        useruser+=username.read()
i=0
while(True):
    i=i+1
    for combo in itertools.product(chrackter,repeat=i):
        word = ''.join(combo)
        print(word)
        if(word==useruser):
            user_found+=word
            found = True
            break
    if found==True:
        break


pass_found=""
found=False
# password12=int(input("Enter your password length here: "))
i=0
while(True):
    i=i+1
    for combo_pass in itertools.product(chrackter,repeat=i):
        passwor=''.join(combo_pass)
        print(passwor)
        if(passwor==userpass):
            pass_found+=passwor
            found=True
            break
    if(found==True):
        break

print(f"we found the user name: {user_found}")
print(f"we found the password: {pass_found}")