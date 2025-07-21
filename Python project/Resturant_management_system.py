#Define the menu of restaurant
menu={
     'pizza':40,
     'pasta':50,
     'salad':60,
     'Berger':70,
     'coffee':80
}

#Greet 
print("WELCOME TO SB RESTAURANT")
print("========================")
print("Pizza : Rs40\nPasta : Rs50\nSalad : Rs60\nBerger : Rs70\ncoffee : Rs80")

order_total=0
print("========================")
#input item
item_1=input("Enter the name of item you want to order = ")

#Check that item availabe or not
if item_1 in menu:
     order_total+=menu[item_1]
     print(f"Your item {item_1} has been added to your order")
else:
     print(f"Orderd item {item_1} is not avaialable yet!")

#ask that they want another item or not
another_order=input("Do you want to add another item in your order?(YES/NO)")

if another_order=="YES":

     #input another item
     item_2=input("Enter the name of another item = ")

if item_2 in menu:
     order_total+=menu[item_2]
     print(f"Your item {item_2} has been added to your order")
else:
     print(f"ordered item {item_2} is not availabe yet!")

print("========================")
#Total amount to pay
print(f"Total Amount of items to pay is {order_total}")