from pypytest import ffi, lib

@ffi.def_extern()
def pypyrun():
    import tkinter as tk
    def main(root):
        root.geometry("500x500")
        root.mainloop()
    main(tk.Tk())