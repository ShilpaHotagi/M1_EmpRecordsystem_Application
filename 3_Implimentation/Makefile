PROJECT_NAME = Employee_Record_System

#All Source code file
#Path to the header file
INC_HEADER = inc
 
SRC = src/main.c\
src/fun.c\
INC = fun.h

test = test_EmpRecordsystem.c\
unity/unity.c 


#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

INC=-IInclude\
-Iunity\

Build : $(SRC) 
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm


build_test : 
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

run_test : build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

staticcheck : 
	cppcheck --enable=all -iunity .

dynamic_analysis : Build
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))

coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	gcov -a ./$(call FixPath,$(PROJ_NAME).$(EXEC))

Clean:
	$(RM) $(call FixPath,*.out)

 