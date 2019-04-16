import tkinter as tki
from PIL import Image
from PIL import ImageTk
from tkinter import filedialog
from tkinter import simpledialog
from tkinter.font import Font
import os,sys


class editorScene:

    def __init__(self):
        # * create a Frame for the Text and Scrollbar
        self.root = tki.Tk()
        self.root.title('Super Nebula Language IDE')
        self.filename = None        
        self.addItems()

    def addItems(self):

        ## add a tool bar with compile, import and save buttons:
        toolbar = tki.Frame(self.root, bg='white')
        saveCode = tki.Button(toolbar, borderwidth=0,bg='grey', text='save', command=self.saveFile)
    
        saveCode.pack(side=tki.LEFT)
        
        compileCode = tki.Button(toolbar,bg='grey', text='Compile',command=self.compile_)
        compileCode.pack(side=tki.LEFT)

        importCode = tki.Button(toolbar,bg='grey', text='import',command=self.importFiles)
        importCode.pack(side=tki.LEFT)

        showLogFile = tki.Button(toolbar,bg='grey', text='Error List',command=self.showLogFile)
        showLogFile.pack(side=tki.LEFT)

        
        run = tki.Button(toolbar,bg='grey', text='run',command=self.runproject)
        run.pack(side=tki.LEFT)


        helpWithSyntax = tki.Button(toolbar,bg='grey', text='help')
        helpWithSyntax.pack(side=tki.RIGHT)

        textLabel = tki.Label(toolbar, bg='white', text="", font="-weight bold -family monospace")
        textLabel.pack(side=tki.LEFT, fill=tki.X)
        toolbar.pack(side=tki.TOP, fill=tki.X, pady=1)

        ## -------------------------- Status Bar ---------------------------------------
        statusbar = tki.Frame(self.root, bg='#1E407C')

        self.compiledLabel = tki.Label(statusbar, fg='#111111',bg='#1E407C', text=' compiled successfully!', font="-size 9 -weight bold -family sans-serif")
        self.compiledLabel.pack(side=tki.LEFT, fill=tki.X)

        statusbar.pack(side=tki.BOTTOM,fill=tki.X)

          ## creating a text format:
        txt_frm = tki.Frame(self.root, width=600, height=500)
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

        # configuring a tag with a certain style (font color)
        self.txt.tag_configure("highlight", foreground="green")



        #####################################################
        ## creating a text format:
        txt_frm2 = tki.Frame(self.root, width=600, height=300)
        txt_frm2.pack(fill="both", expand=True)
        
        # ensure a consistent GUI size
        txt_frm2.grid_propagate(False)
        
        # implement stretchability
        txt_frm2.grid_rowconfigure(0, weight=1)
        txt_frm2.grid_columnconfigure(0, weight=1)

        # create a Text widget
        self.txt2 = tki.Text(txt_frm2, borderwidth=3, relief="sunken", fg='#FFFFFF', bg='#333333', font='-size 12 -family sans-serif')
        self.txt2.config(font=("consolas", 12), undo=True, wrap='word')
        self.txt2.grid(row=0, column=0, sticky="nsew", padx=2, pady=2)

        # create a Scrollbar and associate it with txt
        self.scrollb2 = tki.Scrollbar(txt_frm2, command= self.txt2.yview, bg="#777777")    
        self.scrollb2.grid(row=0, column=1, sticky='nsew')
        self.txt2['yscrollcommand'] = self.scrollb2.set

        # configuring a tag with a certain style (font color)
        self.txt2.tag_configure("highlight", foreground="green")


      

    def saveFile(self):

        if self.filename is None:
            self.filename = simpledialog.askstring("Input", "File name:", parent=self.root)
            self.filename += ".nebula"

        if self.filename is  not None:
            with open( self.filename, 'w') as fout: ## TODO: Change Extension for our files
                fout.write(self.txt.get("1.0",tki.END)) 
                self.compiledLabel['text']  = " Saved!"   

        ## TODO: if we can, chanege color of text by regex
        ''' char_count = tki.IntVar()
        index = self.txt.search(r'pragma', "1.0", "end", count=char_count, regexp=True)
        print(index)
        # we have to adjust the character indexes to skip over the identifiers
        if index != "":
            start = "%s + 6 chars" % index
            end = "%s + %d chars" % (index, char_count.get()-7)
            self.txt.tag_add("highlight", start, end)
        '''

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

        except FileNotFoundError: 
            print("Could Not Read File")

        # now clip the name
        X = [i for i in self.filename.split('/')]
        self.filename = X[len(X)-1]
        print(self.filename)

    def compile_(self):
        os.system("./runnerlinux.sh "+self.filename)

        self.checkErrors()

    def checkErrors(self):
        # open file, check if it's empty or not
        try:
            with open("lexerOut2.txt", 'r') as f:
                # then it should have an error!!
                tki.messagebox.showerror("Parsing Error!", "Building project failed!")
                self.compiledLabel['text'] = " build failed!"
                self.txt2.delete(1.0,tki.END)
                self.txt2.insert(tki.END, f.read())
        except FileNotFoundError: 
            self.txt2.delete(1.0,tki.END)
            self.compiledLabel['text']  = " compiled successfully!"                 

    def showLogFile(self):
        try:
            with open("lexerOut2.txt", 'r') as f:
                # then it should have an error!!
                tki.messagebox.showinfo("Nebula Logger", f.readlines())
        except FileNotFoundError:
                tki.messagebox.showwarning("Nebula Logger", "Logger Not Ready, re-compile project and try again!") 

    def runproject(self):
        tki.messagebox.showinfo("Nebula Runtime Environment", "Functionality is not supported yet!")
scene = editorScene()

scene.root.mainloop()