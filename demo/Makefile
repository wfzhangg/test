objects = main.o func.o \
          measure.o

main.o : main.c func.h measure.h 
    #the make can auto call "cc -c main.c"
func.o : func.c func.h measure.h
measure.o : measure.c measure.h func.h

demo : $(objects)
	gcc -o $@ $(objects)
    #demo is target file
    #$@ represent target(demo)

.PHONY:clean
clean :
	rm -f demo $(objects)		
    #remove demo and all .o file


