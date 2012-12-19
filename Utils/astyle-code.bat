@echo off
@echo "Applying uniform Style to Source and Header files"
@AStyle\bin\astyle.exe -v --options=astyle-options.ini --recursive "../neo/*.h" --recursive "../neo/*.cpp" --recursive "../neo/*.c"
@rem Apply Styles to "Doom Classic"
@AStyle\bin\astyle.exe -v --options=astyle-options.ini --recursive "../doomclassic/*.cpp" --recursive "../doomclassic/*.h"
@echo "Uniform style successfully added to both Header files and source files."
pause
