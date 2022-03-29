# Compile-PyPy-to-the-executable-file-and-use-GUI
I compiled pypy with cffi to the executable file and used GUI library, tkinter.
Please view https://qiita.com/Moyashi-itame/items/e674b017b046772ad3e7

## how to create the executable file
Run these codes at test directory in turn.
```
$pypy cffitest.py
```
```
$clang -o test.exe test.c Release/pypytest.lib
```
Then test.exe is generated at test directory.
