Steps
========

Requirements: *You should have FreeRTOS installed, along with Eclipse IDE & MinGW compiler.*  
(Links for installing the same can be found in references)

1. Start Eclipse & choose desired Workspace.
2. Go to File -> New -> C/C++ Project …
3. Choose MinGW GCC as a tool chain & Empty Project as project type.
4. Give your project a suitable name & click on finish.
5. If everything worked correctly on Project Explorer window pane you’ll see your newly
created project. Expand it & you’ll find Includes sub-folder pointing to the included
directories.
6. Right click on your project, then New -> Source Folder.
7. Create two folders by following step 6 named header & source files.
8. Right click on your project -> Properties -> C/C++ General -> Paths & Symbol -> Add -> File
System.
9. Browse to your FreeRTOS folder & include following paths one by one 
(relative path from FreeRTOS v8.x.x folder is given) : 
  * **FreeRTOS -> Source -> portable -> MemMang**
  * **FreeRTOS -> Source -> portable -> MSVC-MingW**
  * **FreeRTOS -> Source**
  * **FreeRTOS -> Source -> include**
10. Right click on ‘header’ folder -> Import -> General -> File System & include following files
(relative path from FreeRTOS v8.x.x folder is given):
  * **FreeRTOS -> Source -> include**
    1. croutine.h
    2. FreeRTOS.h
    3. FreeRTOSConfig.h
    4. list.h
    5. mpu_wrappers.h
    6. portable.h
    7. task.h 
  * **FreeRTOS -> portable -> MSVC-MingW**
    1. portmacro.h
11. Repeat the process for source files folder & include:
  * **FreeRTOS->Source**
    1. croutine.c
    2. list.c
    3. tasks.c
  * **FreeRTOS->portable->MemMang**
    1. heap_4.c
  * **FreeRTOS->portable->MSVC-MingW**
    1. port.c
12. Create your first main file in source files folder & copy the code in it from the link:
https://github.com/raghav13mahajan/devcodes/commit/bca0de979a261b05f1d23087541482ffed527137



References:
==========

1. https://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/lunasr2
2. http://sourceforge.net/projects/mingw/files/
3. https://drive.google.com/open?id=0B3y_JiuI79ugfjFsQmxsY3hocHpCU2lSSng1T1JPWWdPOVpCbS1mLTlKYW1ha3NnSzV2Q0k&authuser=0
