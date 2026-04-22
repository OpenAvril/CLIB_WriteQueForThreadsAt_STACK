# OpenAvrilCLIB: Request, Wait, Write for Threads at STACK.

---
## Branches.
 - CLIB_WriteQueForThreadsAt_STACK.
 - CFSDImplemntation_CLIB_WriteQueForThreadsAt_Stack_WINDOWS.
 - CFSDImplemntation_CLIB_WriteQueForThreadsAt_Stack_LINUX.

---
## Using.
### Ubuntu LINUX.
version: Ubuntu 24.04.4 LTS

### Visual Studio Code.
Version: 1.116.0.

### Dependencies.
#### GCC toolchain.
#### VS Code.

Terminal install of the above.
````
sudo apt update
sudo apt upgrade
sudo apt install build-essential gdb
sudo snap install --classic code
sudo apt update
sudo apt upgrade
````

---
## Building - Compiler Terminal Commands.
### CLIB_WriteEnableForThreadsAt_STACK.so
````
g++ -fPIC -shared -o ./output/CLIB_WriteEnableForThreadsAt_STACK.so ./CLIB_WriteQueForThreadsAt_STACK/CLIB_WriteQueForThreadsAt_STACK.cpp
````
### CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.so
````
g++ -fPIC -shared -o ./output/CLIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.so ./CLIB_WriteQueForThreadsAt_CLIENTOUTPUTRECIEVE/CLIB_WriteQueForThreadsAt_CLIENTOUTPUTRECIEVE.cpp
````
### CLIB_WriteEnableForThreadsAt_SERVERINPUTRECIEVE.so
````
g++ -fPIC -shared -o ./output/CLIB_WriteEnableForThreadsAt_SERVERINPUTRECIEVE.so ./CLIB_WriteQueForThreadsAt_SERVERINPUTRECIEVE/CLIB_WriteEnableForThreadsAt_SERVERINPUTRECIEVE.cpp
````
### CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND.so
````
g++ -fPIC -shared -o ./output/CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND.so ./CLIB_WriteQueForThreadsAt_SERVEROUTPUTSEND/CLIB_WriteEnableForThreadsAt_STACK.cpp
````

---
## Implementation.
### How To Guide - Stack Flow From Client Input Scanner To Server And Back To Client.
 - [GitHub ReadMe - How To Guide.](https://github.com/OpenAvril/CLIB_OpenEpiCentre/blob/CLIBTemplate_OpenEpiCentre_LINUX/README/How%20To%20Guide%20-%20Stack%20Flow%20From%20Client%20Input%20Scanner%20To%20Server%20And%20Back%20To%20Client.md)

### Wrapper Imports and Native IO.
 - [Wrapper Imports and Native IO.](https://github.com/OpenAvril/CLIB_OpenEpiCentre/blob/CLIBTemplate_OpenEpiCentre_LINUX/README/Wrapper_Imports.md)
---
---
