# import itertools
# import string
# chrackter=string.ascii_letters


# # user=int(input("Enter user length here: "))

userpass=""
useruser=""

# user_found=""

# found = False
with open('default_pass.txt','r') as password:
    with open('default_user.txt','r') as username:
        userpass+=password.read()
        useruser+=username.read()
# i=0
# while(True):
#     i=i+1
#     for combo in itertools.product(chrackter,repeat=i):
#         word = ''.join(combo)
#         print(word)
#         if(word==useruser):
#             user_found+=word
#             found = True
#             break
#     if found==True:
#         break


# pass_found=""
# found=False
# # password12=int(input("Enter your password length here: "))
# i=0
# while(True):
#     i=i+1
#     for combo_pass in itertools.product(chrackter,repeat=i):
#         passwor=''.join(combo_pass)
#         print(passwor)
#         if(passwor==userpass):
#             pass_found+=passwor
#             found=True
#             break
#     if(found==True):
#         break

# print(f"we found the user name: {user_found}")
# print(f"we found the password: {pass_found}")


# next 2
import itertools
import numbers
import threading
import time
timer=time.asctime()

nume=list('0123456789')


with open('password.txt','r') as f1:
    generater=[line.strip() for line in f1]
user_lenght=19
i2=user_lenght
found=threading.Event()
seen_values=set()
seen_lock=threading.Lock()

def check_is_duplicate(value,lable):
    with seen_lock:
        if(value in seen_values):
            print(f"[{lable}] Duplicate value detacted: {value}")
            found.set()
            print(timer)
            return True
        seen_values.add(value)
    return False

def fowardloop():
    for gen in generater:
        for i in range(user_lenght):
            for item in itertools.product(nume, repeat=i):
                if found.is_set():
                    return
                mution = gen + ''.join(item)
                print(f"[Forward] Trying: {mution:<20}")
                if mution == userpass:
                    print(f"[Forward] ✅ Password found: {mution}")
                    found.set()
                    print(timer)
                    return
                if check_is_duplicate(mution, "Forward"):
                    return

def reveseloop():
    for gen in generater:
        for i2 in reversed(range(user_lenght)):
            for item in itertools.product(nume, repeat=i2):
                if found.is_set():
                    return
                mution1 = gen + ''.join(item)
                print(f"[Reverse] Trying: {mution1:<20}")
                if mution1 == userpass:
                    print(f"[Reverse] ✅ Password found: {mution1}")
                    found.set()
                    return
                if check_is_duplicate(mution1, "Reverse"):
                    return

t1=threading.Thread(target=fowardloop)
t2=threading.Thread(target=reveseloop)

t1.start()
print("\n")
t2.start()
print("\n")

t1.join()
print("\n")
t2.join()
print("\n")