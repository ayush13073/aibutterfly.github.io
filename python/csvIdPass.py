import csv
def write():
    # ch = 'Y'
    f = open("details.csv", "w", newline='')
    wo = csv.writer(f)
    wo.writerow(["UserId", "Password"])
    while True:
        u_id = input("Enter User - Id : ")
        pswd = input("Enter Password : ")
        data = [u_id, pswd]
        wo.writerow(data)
        ch = input("Do you want to enter more records (Y / N)")
        if ch in 'Nn':
            break
    f.close()

def read():
    f = open("details.csv", "r")
    ro = csv.reader(f)
    for i in ro:
        print(i)
    f.close()

def search():
    f = open("details.csv", "r")
    Found = 0
    u = input("Enter user -  id to search : ")
    ro = csv.reader(f)
    next(ro);
    for i in ro:
        if i[0] == u:
            print(i[1])
            Found = 1
    f.close()
    if Found == 0:
        print("Bhai aisa koi record nahi hai")
    
write()
read()
search()
