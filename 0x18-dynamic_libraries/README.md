# Dynamic Libraries
- Unlike static libraries, dynamic libraries consist of separate files containing separate pieces of object code. 
- These files are dynamically linked together to form a single piece of object code.
- Furthermore, dynamic libraries contain extra information that the operating system will need to link the library to other programs.
## Creating Dynamic library(Linux)
1. ```gcc *.c -c -fPIC```
> This command generates one object file ```.o``` for each source file ```.c```
2. ```gcc *.o -shared -o liball.so```
- (substitute your desired library name with all)
> This command compiles all the .o files into a dynamic library which is specified by the -shared flag.
#### NOTE: The naming convention for dynamic libraries is such that each shared library name must start with ```lib``` and end with ```.so```
3. ```export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH```
> This command exports the path for libraries so that programs know where to look for them.
## Using Dynamic libraries
```gcc -L test_code.c -lholberton -o test_code```
> Executing this command would generate an executable file called test_code.
- Then ```./test_code``` would give us the expected output.
