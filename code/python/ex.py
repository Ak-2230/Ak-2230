# 🐍 💧 🔫  
import random

item=("🐍","💧","🔫")
def computer():
    rand=random.randint(0,2)
    # print(item[rand])
    return rand

def user():
    print("0 🐍")
    print("1 💧")
    print("2 🔫")
    taker=(int(input("Enter your item no here: ")))
    # print(f"you choose {item[taker]}")
    return taker

def comput():
    com=computer()
    us=user()
    if(us==com):
        print(f"{item[com]} and {item[us]}: Draw")
    elif(us==0 and com==1):
        print(f"{item[com]} and {item[us]}: user win")
    elif(us==0 and com==2):
        print(f"{item[com]} and {item[us]}: user lose")
    
    elif(us==1 and com==0):
        print(f"{item[com]} and {item[us]}: user lose")
    elif(us==1 and com==2):
        print(f"{item[com]} and {item[us]}: user win")
    
    elif(us==2 and com==0):
        print(f"{item[com]} and {item[us]}: user win")
    elif(us==2 and com==1):
        print(f"{item[com]} and {item[us]}: user lose")
        

comput()