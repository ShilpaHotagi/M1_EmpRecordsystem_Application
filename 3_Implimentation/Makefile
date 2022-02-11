 
SRC = main.c
INC = fun.h

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

all.out : $(SRC)
	gcc $^ -o $@

run: target
	./all.out

clean:
	rm all.out
