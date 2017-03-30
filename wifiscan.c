#include "wifiscan.h"
#include "screen.h"
#include <stdio.h>
#include <string.h>

// this function is to be implemented by student
// now it is just a stub function.
void read_data(void){
	FILE *fp;
	char line[200];		// a line of data
	WIFI_INFO wf;
	int c;


	if((fp = fopen("scan.txt", "r")) == NULL){
		printf("Cannot open file %s\n", "scan.txt"); return ;
	}
	while (fgets(line, 200, fp)!=NULL){	// read file line by line
#ifdef DEBUG
	printf("Line read: %s", line);
#endif
	remove_spaces(line);	// remove leading spaces of the line
	printf("%s", line);
/*	if(strncmp(line, "Cell", 4)==0){	//first line of a cell
		c=0;	// set line counter to 0
		get_MAC(line, wf.MAC);
	}
	else{
		c++;
		if (c==1) 
			wf.frequency = get_frequency(line);
		if (c==2) 
			wf.slevel = get_slevel(line);
		if (c==3)
			get_essid(line, wf.essid);
	}*/
	}
	fclose(fp);
	printf("Wifi has been processed\n");
}

/* the output of "iwlist" makes a number of spaces at front of each line, in 
order to read the data, those spaces need to be removed. This function find 
the first non-space character of s[] and uses strcpy function to move the 
partial string to the beginning of s[]*/
void remove_spaces(char s[]){
	int i, len=strlen(s);
	for (i=0; i<len; i++){
		if(s[i]!=' ' && s[i]!='\t' && s[i]!='\n') break;
	}
	strcpy(s, &s[i]);
}

/* this function find MAC address from the first line of a cell. this line is
always formatted by iwlist as "Cell xx - Addres: xx:xx:xx:xx:xx:xx"
so, simply locate the 19th element of a line, and use sscanf to scan 6 
hexadecimal values into macaddr*/
void get_MAC(char line[], char macaddr[]){
}
