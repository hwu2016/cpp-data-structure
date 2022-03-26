## C++ Data Structure Demo

### Goal
Training the c++ coding skills and the data structure for all c++ beginners.

### How To Run the Testing Code
```bash
# In the source dir (example: ..../cpp-data-structure/)
./bin/start
```

### How to Editing the Code
Before DIY your own data structrue, make sure the related c++ environment and cmake (building tool) is installed.

Editing the head file (.h) in `/include` and the cpp file (.cpp) in `/src` if you need to custermize the project.

After editing, enter the directory `/build` and run the code below.

if new files are added, please update the `CMakeLists.txt` and include the new files in the `add_executable` part.
```bash
# /build
# recompile the project based on CMakeList.txt
cmake ..
# linking all the files
make
# rerun the binary
../bin/start
```

### Output 
If everything goes well, you should see the output in the console.
```bash
##################################
############# Stack ##############
##################################
----Testing Empty----
Empty Stack
True
----Testing Push----
1
1 , 3
1 , 3 , 5
1 , 3 , 5 , 7
----Testing Pop----
1 , 3 , 5
----Testing Top----
5
----Testing Search----
-1
```
