import tkinter as tki
from PIL import Image
from PIL import ImageTk
from tkinter import filedialog
from tkinter import simpledialog

class editorScene:

    def __init__(self):

        # create a Frame for the Text and Scrollbar
        self.root = tki.Tk()
        self.root.title('Super Nebula')
        #self.root.iconbitmap(r'/media/ahelady/New Volume/lectures and assignements/Spring 2019/Compilers/Project/editor/img/save.ico')
        self.addItems()

    def addItems(self):

        ## add a tool bar with compile, import and save buttons:

        self.savePhoto = tki.PhotoImage(file='saveIcon.png')
        self.savePhoto.config(width=25, height=20)

        self.supernebulaPhoto = tki.PhotoImage(file='saveIcon.png')
        self.supernebulaPhoto.config(width=25, height=20)

        #self.savePhoto = self.savePhoto.subsample(320)

        toolbar = tki.Frame(self.root, bg='white')
        saveCode = tki.Button(toolbar, image=self.savePhoto, borderwidth=0,bg='grey', text='save', command=self.saveFile)
        #saveCode.config(width=16,height=8)
        saveCode.pack(side=tki.LEFT)

       
        
        compileCode = tki.Button(toolbar,bg='grey', text='Compile')
        compileCode.pack(side=tki.LEFT)

        importCode = tki.Button(toolbar,bg='grey', text='import',command=self.importFiles)
        importCode.pack(side=tki.LEFT)

        helpWithSyntax = tki.Button(toolbar,bg='grey', text='help')
        helpWithSyntax.pack(side=tki.RIGHT)

        textLabel = tki.Label(toolbar, bg='white', text='     Super Nebula Language IDE', font="-weight bold -family monospace")
        textLabel.pack(side=tki.LEFT, fill=tki.X)
        toolbar.pack(side=tki.TOP, fill=tki.X, pady=1)


        ## -------------------------- Status Bar ---------------------------------------
        statusbar = tki.Frame(self.root, bg='#1E407C')

        compiledLabel = tki.Label(statusbar, fg='#111111',bg='#1E407C', text=' compiled successfully!', font="-size 9 -weight bold -family sans-serif")
        compiledLabel.pack(side=tki.LEFT, fill=tki.X)

        statusbar.pack(side=tki.BOTTOM,fill=tki.X)

        ## creating a text format:
        txt_frm = tki.Frame(self.root, width=600, height=600)
        txt_frm.pack(fill="both", expand=True)
        
        # ensure a consistent GUI size
        txt_frm.grid_propagate(False)
        
        # implement stretchability
        txt_frm.grid_rowconfigure(0, weight=1)
        txt_frm.grid_columnconfigure(0, weight=1)

        # create a Text widget
        self.txt = tki.Text(txt_frm, borderwidth=3, relief="sunken", fg='#FFFFFF', bg='#333333', font='-size 12 -family sans-serif')
        self.txt.config(font=("consolas", 12), undo=True, wrap='word')
        self.txt.grid(row=0, column=0, sticky="nsew", padx=2, pady=2)

        # create a Scrollbar and associate it with txt
        self.scrollb = tki.Scrollbar(txt_frm, command= self.txt.yview, bg="#777777")    
        self.scrollb.grid(row=0, column=1, sticky='nsew')
        self.txt['yscrollcommand'] = self.scrollb.set
        
    def saveFile(self):

        answer = simpledialog.askstring("Input", "File name:", parent=self.root)

        if answer is not None:
            with open(answer+".fuck", 'a') as fout:
                fout.write(self.txt.get("1.0",tki.END)) 

    def importFiles(self):
        self.filename = filedialog.askopenfilename()
        print(self.filename) ## for logging only

        # once opened file:
        try:
            with open(self.filename, 'r') as f:
                #print(f.read())
                 ## TODO: feeh 7aga 5ara!
                self.txt.delete(1.0,tki.END)
                self.txt.insert(tki.END, f.read())

        except FileExistsError: 
            print("Could Not Read File")

scene = editorScene()
scene.root.mainloop()