@echo off
@echo "Applying uniform Style to Source and Header files"
@AStyle\bin\astyle.exe -v --options=astyle-options.ini --recursive "../neo/*.h" --recursive "../neo/*.cpp" --recursive "../neo/*.c"
@echo "Uniform style successfully added to both Header files and source files."
pause
