from tkinter import*
from tkinter import ttk
from tkinter import messagebox

player=1
pX=[]
pO=[]



root=Tk()
root.title("X-O GAME:player X")

#Add Buttons

button1=ttk.Button(root,text=" ")
button1.grid(row=0,column=0,sticky='snew',ipadx=10,ipady=40)
button1.config(command=lambda: ButtonClick(1))

button2=ttk.Button(root,text=" ")
button2.grid(row=0,column=1,sticky='snew',ipadx=10,ipady=40)
button2.config(command=lambda: ButtonClick(2))

button3=ttk.Button(root,text=" ")
button3.grid(row=0,column=2,sticky='snew',ipadx=10,ipady=40)
button3.config(command=lambda: ButtonClick(3))

button4=ttk.Button(root,text=" ")
button4.grid(row=1,column=0,sticky='snew',ipadx=10,ipady=40)
button4.config(command=lambda: ButtonClick(4))

button5=ttk.Button(root,text=" ")
button5.grid(row=1,column=1,sticky='snew',ipadx=10,ipady=40)
button5.config(command=lambda: ButtonClick(5))

button6=ttk.Button(root,text=" ")
button6.grid(row=1,column=2,sticky='snew',ipadx=10,ipady=40)
button6.config(command=lambda: ButtonClick(6))

button7=ttk.Button(root,text=" ")
button7.grid(row=2,column=0,sticky='snew',ipadx=10,ipady=40)
button7.config(command=lambda: ButtonClick(7))

button8=ttk.Button(root,text=" ")
button8.grid(row=2,column=1,sticky='snew',ipadx=10,ipady=40)
button8.config(command=lambda: ButtonClick(8))

button9=ttk.Button(root,text=" ")
button9.grid(row=2,column=2,sticky='snew',ipadx=10,ipady=40)
button9.config(command=lambda: ButtonClick(9))

def wincheck():
    winner=0
    if ((1 in pX) and (2 in pX) and (3 in pX)):
        winner=1
    if ((1 in pO) and (2 in pO) and (3 in pO)):
        winner=2
        
    if ((4 in pX) and (5 in pX) and (6 in pX)):
        winner=1
    if ((4 in pO) and (5 in pO) and (6 in pO)):
        winner=2
        
    if ((7 in pX) and (8 in pX) and (9 in pX)):
        winner=1
    if ((7 in pO) and (8 in pO) and (9 in pO)):
        winner=2
        
    if ((1 in pX) and (4 in pX) and (7 in pX)):
        winner=1
    if ((1 in pO) and (4 in pO) and (7 in O)):
        winner=2
        
    if ((2 in pX) and (5 in pX) and (8 in pX)):
        winner=1
    if ((2 in pO) and (5 in pO) and (8 in pO)):
        winner=2
        
    if ((3 in pX) and (6 in pX) and (9 in pX)):
        winner=1
    if ((3 in pO) and (6 in pO) and (9 in pO)):
        winner=2
        
    if ((1 in pX) and (5 in pX) and (9 in pX)):
        winner=1
    if ((1 in pO) and (5 in pO)  and (9 in pO)):
        winner=2
        
    if ((3 in pX) and (5 in pX) and (7 in pX)):
        winner=1
    if ((3 in pO) and (5 in pO)  and (7 in pO)):
        winner=2

    if winner==1:
        messagebox.showinfo(title="Game Over",message="the Player X is win")
    elif winner==2:
        messagebox.showinfo(title="Game Over",message="the Player O is win")
    

def setlayout(id,char):
    if id==1:
        button1.config(text=char)
        button1.state(['disabled'])
        
    elif id==2:
        button2.config(text=char)
        button2.state(['disabled'])
        
    elif id==3:
        button3.config(text=char)
        button3.state(['disabled'])
        
    elif id==4:
        button4.config(text=char)
        button4.state(['disabled'])
    elif id==5:
        
        button5.config(text=char)
        button5.state(['disabled'])
        
    elif id==6:
        button6.config(text=char)
        button6.state(['disabled'])
        
    elif id==7:
        button7.config(text=char)
        button7.state(['disabled'])
        
    elif id==8:
        button8.config(text=char)
        button8.state(['disabled'])
        
    elif id==9:
        button9.config(text=char)
        button9.state(['disabled'])
        
        



def ButtonClick(id):
    global player
    global pX
    global pO
    if player==1:
        setlayout(id,'X')
        pX.append(id)
        root.title("X-O GAME:player O")
        player=2
        print("pX:{}".format(pX))
    elif player==2:
        setlayout(id,'O')
        pO.append(id)
        root.title("X-O GAME:player X")
        player=1
        print("pO:{}".format(pO))

    wincheck()


    





        
    
root.mainloop()
