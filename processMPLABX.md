Steps
========

Requirements: *You should have FreeRTOS downloaded, along with MPLABX IDE & XC16 compiler installed.*  
(Links for installing the same can be found in references)

1. Start MPLAB.
2. Go to File -> New Project
3. Choose standalone project and click next.
4. Select device PIC24FJ256GA110 and click next.
5. Leave this as it is and click next.
6. Select XC16 as your compiler and click next.
7. Give your project suitable name and click Finish.
8. If everything worked correctly on Project Window pane you’ll see your newly created project. 
Expand it & you’ll find sub-folders pointing to the different directories.
8. Right click on your project -> Properties -> xc16-gcc -> Option Categories -> Preprocessing and Messages
9. Click on three dots on the right side of C include dirs ,browse to your FreeRTOS folder & include following paths one by one 
(relative path from FreeRTOS folder is given) : 
  * **FreeRTOS -> Source**
  * **FreeRTOS -> Source -> include**
Click apply and then OK.
10. Right click on ‘header files’ folder in project pane -> Add Existing Items & include following files
(relative path from FreeRTOS folder is given):
  * **FreeRTOS -> Source -> include**
    1. croutine.h
    2. FreeRTOS.h
    3. FreeRTOSConfig.h
    4. list.h
    5. mpu_wrappers.h
    6. portable.h
    7. portmacro.h
    8. task.h 
11. Repeat the process for source files folder & include:
  * **FreeRTOS->Source**
    1. croutine.c
    2. list.c
    3. tasks.c
    4. heap_4.c
    5. port.c
    6. portasm_PIC24.S
12. Right click again on source files folder -> New -> C Main File and give your file appropriate name:
13. Copy the code from following link into the created file and save it. Click on Clean and Build.
https://github.com/azad1-repo/dev-codes/blob/master/Prakhar/taskCreation.c
14. If everything worked correctly, you might see some warnings and then BUILD SUCCESSFUL 



References:
==========

1. http://www.microchip.com/pagehandler/en-us/family/mplabx/
2. https://www.microchip.com/pagehandler/en_us/devtools/mplabxc/
3. https://drive.google.com/folderview?id=0ByP17BTcF0qQfklGZ0RSTzBQdGFqakVNMG1hSEVzbzYwdldXMF9hTUtQOEJyV2VFckp5c0k&usp=sharing
