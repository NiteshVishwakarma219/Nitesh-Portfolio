#Snake , Water and Gun game...

import random
'''

 1 for snake
-1 for water
 0 for Gun

'''
#Computer choice for game
computer_choice=random.choice([-1,0,1])

#user choice
you_choice=input("Enter Number: ")
dict={'s':1,"w":-1,"g":0}
reverse_dict={1:"Snake",-1:"Water",0:"Gun"}

#Find user choice in dictionary and store in you
you=dict[you_choice]

print(f"You choose: {reverse_dict[you]}\nComputer choose: {reverse_dict[computer_choice]}")

if(computer_choice==you):
    print("Its a draw!")

else:
    if(computer_choice==-1 and you==1):
        print("You win!")
    elif(computer_choice==-1 and you==0):
        print("You lose!")

    elif(computer_choice==1 and you==0):
        print("You win!")
    elif(computer_choice==1 and you==-1):
        print("You lose!")

    elif(computer_choice==0 and you==1):
        print("You lose!")
    elif(computer_choice==0 and you==-1):
        print("You win!")
    
    else:
        print("Something went wrong!")

    