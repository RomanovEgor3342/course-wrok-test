export LC_ALL=ru_RU.utf8

all: cw get-option give-initial-information process-command give-info-about-functions
	gcc  -o cw cw.o get-option.o give-initial-information.o process-command.o give-info-about-functions.o

cw: cw.c
	gcc -finput-charset=UTF-8 -c cw.c

get-option: functions/get-option.c
	gcc -finput-charset=UTF-8 -c functions/get-option.c

give-initial-information: functions/give-initial-information.c
	gcc -finput-charset=UTF-8 -c functions/give-initial-information.c

process-command: functions/process-command.c headers/get-option.h headers/give-initial-information.h
	gcc -finput-charset=UTF-8 -c functions/process-command.c

give-info-about-functions: functions/give-info-about-functions.c
	gcc -finput-charset=UTF-8 -c functions/give-info-about-functions.c

clear: 
	del *.o