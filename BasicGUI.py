import Tkinter
from Tkinter import *

#dict = {'add':1, 'subtract':2, 1:'add', 2:'subtract'}

choice = 0; a = 0; b = 0; count = 1; var = 1
x = 0.0; y = 0.0; result = 0.0; check = 0.0; store = -32768

def add():
	e3.delete(0,END)
	choice = 1
	if(e1.get()!='' or e2.get()!=''):
		e3.insert(0, float(e1.get()) + float(e2.get())) 

def subtract():
	e3.delete(0,END)
	choice = 2
	if(e1.get()!='' and e2.get()!=''):
		e3.insert(0, float(e1.get()) - float(e2.get())) 

def multiply():
	e3.delete(0,END)
	choice = 3
	if(e1.get()!='' and e2.get()!=''):
		e3.insert(0, float(e1.get()) * float(e2.get())) 

def divide():
	e3.delete(0,END)
	choice = 4
	if(e1.get()!='' and e2.get()!=''):
		e3.insert(0, float(e1.get()) / float(e2.get())) 

 

def refresh():
	e1.delete(0,END)
	e2.delete(0,END)
	e3.delete(0,END)
	e1.focus()
	choice = 0	

font1 = 'Courier', 15, 'bold'
master = Tk()
master.title("CALCULATOR") 
Button(master, text=' + ', command=add).grid(row = 2, column = 2, sticky=W, pady = 5)
Button(master, text=' - ', command=subtract).grid(row = 2, column = 3, sticky=W, pady = 5)
Button(master, text=' x ', command=multiply).grid(row = 3, column = 2, sticky=W, pady = 5)
Button(master, text=' / ', command=divide).grid(row = 3, column = 3, sticky=W, pady = 5)
Button(master, text='AC', command=refresh).grid(row = 1, column = 3, sticky=W, pady = 5)
e1 = Entry(master, font = font1)
e1.grid(row=1, column = 0, ipadx = 10)
e2 = Entry(master, font = font1)
e2.grid(row=2, column = 0, ipadx = 10)
e3 = Entry(master, font = font1)
e3.grid(row=3, column = 0, ipadx = 10)
e1.focus()
mainloop()
