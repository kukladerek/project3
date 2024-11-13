#include <stdio.h>
#include <stdlib.h>
#include <spawn.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

#define N 12

extern char **environ;

char *allowed[N] = {"cp","touch","mkdir","ls","pwd","cat","grep","chmod","diff","cd","exit","help"};

int isAllowed(const char*cmd) {
	// TODO
	// return 1 if cmd is one of the allowed commands
	// return 0 otherwise
	
	return 0;
}

int main() {

    // TODO
    // Add variables as needed

    char line[256];

    while (1) {
	
	char* argv[20];
	int argc = 0;

	fprintf(stderr,"rsh>");

	if (fgets(line,256,stdin)==NULL) continue;

	if (strcmp(line,"\n")==0) continue;

	line[strlen(line)-1]='\0';

	// TODO
	// Add code to spawn processes for the first 9 commands
	// And add code to execute cd, exit, help commands
	// Use the example provided in myspawn.c
	char* token = strtok(line, " ");
	while(token != NULL){
		argv[argc++] = token;
		token = strtok(NULL, " ");
	}

	argv[argc] = NULL;
	if(strcmp(argv[0], allowed[0]) == 0){
		pid_t pid;
    
		int status;
		posix_spawnattr_t attr;

		// Initialize spawn attributes
		posix_spawnattr_init(&attr);

		// Set flags if needed, for example, to specify the scheduling policy
		// posix_spawnattr_setflags(&attr, POSIX_SPAWN_SETSCHEDULER);

		// Spawn a new process
		if (posix_spawnp(&pid, argv[0], NULL, &attr, argv, environ) != 0) {
			perror("spawn failed");
			exit(EXIT_FAILURE);
		}

		// Wait for the spawned process to terminate
		if (waitpid(pid, &status, 0) == -1) {
			perror("waitpid failed");
			exit(EXIT_FAILURE);
		}

		if (WIFEXITED(status)) {
			
		}

		// Destroy spawn attributes
		posix_spawnattr_destroy(&attr);

		continue;

		}
		if(strcmp(argv[0], allowed[1]) == 0){
		pid_t pid;
    
		int status;
		posix_spawnattr_t attr;

		// Initialize spawn attributes
		posix_spawnattr_init(&attr);

		// Set flags if needed, for example, to specify the scheduling policy
		// posix_spawnattr_setflags(&attr, POSIX_SPAWN_SETSCHEDULER);

		// Spawn a new process
		if (posix_spawnp(&pid, argv[0], NULL, &attr, argv, environ) != 0) {
			perror("spawn failed");
			exit(EXIT_FAILURE);
		}

		// Wait for the spawned process to terminate
		if (waitpid(pid, &status, 0) == -1) {
			perror("waitpid failed");
			exit(EXIT_FAILURE);
		}

		if (WIFEXITED(status)) {
			
		}

		// Destroy spawn attributes
		posix_spawnattr_destroy(&attr);

		continue;

		}
		if(strcmp(argv[0], allowed[2]) == 0){
		pid_t pid;
    
		int status;
		posix_spawnattr_t attr;

		// Initialize spawn attributes
		posix_spawnattr_init(&attr);

		// Set flags if needed, for example, to specify the scheduling policy
		// posix_spawnattr_setflags(&attr, POSIX_SPAWN_SETSCHEDULER);

		// Spawn a new process
		if (posix_spawnp(&pid, argv[0], NULL, &attr, argv, environ) != 0) {
			perror("spawn failed");
			exit(EXIT_FAILURE);
		}

		// Wait for the spawned process to terminate
		if (waitpid(pid, &status, 0) == -1) {
			perror("waitpid failed");
			exit(EXIT_FAILURE);
		}

		if (WIFEXITED(status)) {
			
		}

		// Destroy spawn attributes
		posix_spawnattr_destroy(&attr);

		continue;

		}

		if(strcmp(argv[0], allowed[3]) == 0){
		pid_t pid;
    
		int status;
		posix_spawnattr_t attr;

		// Initialize spawn attributes
		posix_spawnattr_init(&attr);

		// Set flags if needed, for example, to specify the scheduling policy
		// posix_spawnattr_setflags(&attr, POSIX_SPAWN_SETSCHEDULER);

		// Spawn a new process
		if (posix_spawnp(&pid, argv[0], NULL, &attr, argv, environ) != 0) {
			perror("spawn failed");
			exit(EXIT_FAILURE);
		}

		// Wait for the spawned process to terminate
		if (waitpid(pid, &status, 0) == -1) {
			perror("waitpid failed");
			exit(EXIT_FAILURE);
		}

		if (WIFEXITED(status)) {
			
		}

		// Destroy spawn attributes
		posix_spawnattr_destroy(&attr);

		continue;

		}

		if(strcmp(argv[0], allowed[4]) == 0){
		pid_t pid;
    
		int status;
		posix_spawnattr_t attr;

		// Initialize spawn attributes
		posix_spawnattr_init(&attr);

		// Set flags if needed, for example, to specify the scheduling policy
		// posix_spawnattr_setflags(&attr, POSIX_SPAWN_SETSCHEDULER);

		// Spawn a new process
		if (posix_spawnp(&pid, argv[0], NULL, &attr, argv, environ) != 0) {
			perror("spawn failed");
			exit(EXIT_FAILURE);
		}

		// Wait for the spawned process to terminate
		if (waitpid(pid, &status, 0) == -1) {
			perror("waitpid failed");
			exit(EXIT_FAILURE);
		}

		if (WIFEXITED(status)) {
			
		}

		// Destroy spawn attributes
		posix_spawnattr_destroy(&attr);

		continue;

		}

		if(strcmp(argv[0], allowed[5]) == 0){
		pid_t pid;
    
		int status;
		posix_spawnattr_t attr;

		// Initialize spawn attributes
		posix_spawnattr_init(&attr);

		// Set flags if needed, for example, to specify the scheduling policy
		// posix_spawnattr_setflags(&attr, POSIX_SPAWN_SETSCHEDULER);

		// Spawn a new process
		if (posix_spawnp(&pid, argv[0], NULL, &attr, argv, environ) != 0) {
			perror("spawn failed");
			exit(EXIT_FAILURE);
		}

		// Wait for the spawned process to terminate
		if (waitpid(pid, &status, 0) == -1) {
			perror("waitpid failed");
			exit(EXIT_FAILURE);
		}

		if (WIFEXITED(status)) {
			
		}

		// Destroy spawn attributes
		posix_spawnattr_destroy(&attr);

		continue;

		}

		if(strcmp(argv[0], allowed[6]) == 0){
		pid_t pid;
    
		int status;
		posix_spawnattr_t attr;

		// Initialize spawn attributes
		posix_spawnattr_init(&attr);

		// Set flags if needed, for example, to specify the scheduling policy
		// posix_spawnattr_setflags(&attr, POSIX_SPAWN_SETSCHEDULER);

		// Spawn a new process
		if (posix_spawnp(&pid, argv[0], NULL, &attr, argv, environ) != 0) {
			perror("spawn failed");
			exit(EXIT_FAILURE);
		}

		// Wait for the spawned process to terminate
		if (waitpid(pid, &status, 0) == -1) {
			perror("waitpid failed");
			exit(EXIT_FAILURE);
		}

		if (WIFEXITED(status)) {
			
		}

		// Destroy spawn attributes
		posix_spawnattr_destroy(&attr);

		continue;

		}

		if(strcmp(argv[0], allowed[7]) == 0){
		pid_t pid;
    
		int status;
		posix_spawnattr_t attr;

		// Initialize spawn attributes
		posix_spawnattr_init(&attr);

		// Set flags if needed, for example, to specify the scheduling policy
		// posix_spawnattr_setflags(&attr, POSIX_SPAWN_SETSCHEDULER);

		// Spawn a new process
		if (posix_spawnp(&pid, argv[0], NULL, &attr, argv, environ) != 0) {
			perror("spawn failed");
			exit(EXIT_FAILURE);
		}

		// Wait for the spawned process to terminate
		if (waitpid(pid, &status, 0) == -1) {
			perror("waitpid failed");
			exit(EXIT_FAILURE);
		}

		if (WIFEXITED(status)) {
			
		}

		// Destroy spawn attributes
		posix_spawnattr_destroy(&attr);

		continue;

		}

		if(strcmp(argv[0], allowed[8]) == 0){
		pid_t pid;
    
		int status;
		posix_spawnattr_t attr;

		// Initialize spawn attributes
		posix_spawnattr_init(&attr);

		// Set flags if needed, for example, to specify the scheduling policy
		// posix_spawnattr_setflags(&attr, POSIX_SPAWN_SETSCHEDULER);

		// Spawn a new process
		if (posix_spawnp(&pid, argv[0], NULL, &attr, argv, environ) != 0) {
			perror("spawn failed");
			exit(EXIT_FAILURE);
		}

		// Wait for the spawned process to terminate
		if (waitpid(pid, &status, 0) == -1) {
			perror("waitpid failed");
			exit(EXIT_FAILURE);
		}

		if (WIFEXITED(status)) {
			
		}

		// Destroy spawn attributes
		posix_spawnattr_destroy(&attr);

		continue;

		}

		if(strcmp(argv[0], allowed[9]) == 0){
			if(argc > 2){
				printf("-rsh: cd: too many arguments\n");
			}
			chdir(argv[1]);
			continue;
		}

		if(strcmp(argv[0], allowed[10]) == 0){
			break;
		}

		if(strcmp(argv[0], allowed[11]) == 0){
			printf("The allowed commands are:\n");
			for(int i = 0; i < N; i++){
				printf("%d: %s\n", (i+1), allowed[i]);
			}
			continue;
		}

		else{
			printf("NOT ALLOWED!\n");
		}

		}
		return 0;
}
