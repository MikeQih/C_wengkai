from tkinter import *
import os

root = Tk()
root.geometry("300x300")


def count_down_timer():
    global counter
    counter -= 1
    if counter<0:
        root.destroy()
    label1.config(text=str(counter))
    label1.after(1000,count_down_timer)




def jump():
    global label1,counter
    label1 =Label(root)
    label1.pack()
    counter=4
    screen_j = Toplevel(root)
    Label(screen_j,text = "screen_jump").pack()

    count_down_timer()

Button(root,text="Jump",command=jump).pack()


root.mainloop()
# def name():
#     global name1
#     name1 = 'Hengchang Qi'

# # name()
# root = Tk()
# n = name1.get()
# print(n)
# progress_file = "Hengchang Qi Drinking Water"
# with open(progress_file, "r") as f: #can design personal drinking water file
#     # Label(root, text=f.read()).pack()
#     total = 0
#     ls = f.readlines()
#     for i in range(len(ls)):  
#         if len(ls[i])!=0:
#             ls[i]=int(ls[i].replace('\n',"").replace('l',"").replace('m',""))
#             total+=ls[i]
#         print(ls[i])
#     print(total)  

# s = '2123basml'
# print('s' in s)
# global all_files
# y = os.listdir()
# h=0
# nl=[]
# for x in y:
#     if "Drinking Water" in x:
#         x = x.split(" ")
#         x = " ".join(x[0:2])
#         print(x)
# i={}
# i.update({'m':20})
# i.update({'u':10})
# i.update({'a':1})
# i.update({'b':5})
# i=[1,5,6,2,4]
# for j in range(1,len(i)):
#     for k in i:
#         if i[k]<i[k-1]:
#             # print('j',j)
#             # temp = i[j+1]
#             i[k],i[k-1]=i[k-1],i[k]
# print(i)
# a = sorted(i,key = i.get,reverse=True)
# x = {key:rank for rank,key in enumerate(sorted(i,key = i.get,reverse=True),1)}
# print('a',a)
# print('x',x)
# print(type(i[a[0]]))
# # {key:}
# # print(i)


