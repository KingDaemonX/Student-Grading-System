build :
	gcc -o studentGrade studentGrade.c  

run : 
	./studentGrade

build-grader :
	gcc -o studentGrader studentGrader.c

run-grader : 
	./studentGrader