

all: cw get-option give-initial-information process-command give-info-about-functions check-command-character read-text output-reworked-text output-struct-of-text
	gcc  -o cw cw.o get-option.o give-initial-information.o process-command.o give-info-about-functions.o check-command-character.o read-text.o output-reworked-text.o output-struct-of-text.o

cw: cw.c
	gcc -c cw.c

get-option: functions/get-option.c
	gcc -c functions/get-option.c

give-initial-information: functions/give-initial-information.c
	gcc -c functions/give-initial-information.c

process-command: functions/process-command.c headers/get-option.h headers/give-initial-information.h headers/structs.h headers/output-reworked-text.h
	gcc -c functions/process-command.c

give-info-about-functions: functions/give-info-about-functions.c
	gcc -c functions/give-info-about-functions.c

output-reworked-text: functions/output-reworked-text.c
	gcc -c functions/output-reworked-text.c
# process-error: functions/process-error.c headers/check-command-character.h
# 	gcc -c functions/process-error.c	

check-command-character: functions/error_functions/check-command-character.c
	gcc -c functions/error_functions/check-command-character.c

read-text: functions/read-text.c headers/read-text.h
	gcc -c functions/read-text.c

output-struct-of-text: functions/output-struct-of-text.c
	gcc -c functions/output-struct-of-text.c

clear: 
	rm *.o