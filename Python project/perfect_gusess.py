import random
n=random.randint(1,100)

gusess=1
a=-1
while(a!=n):
    a=int(input("guess the Number: "))
    if(a>n):
        print("Lower Number Please")
        gusess+=1
    elif(a<n):
        print("Higher Number please")
        gusess+=1

print(f"You have guessed the Number {n} in {gusess} attempt")