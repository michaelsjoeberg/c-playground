FILE *fp;

// write to file
fp = fopen("test.txt", "w+");
fprintf(fp, "%s\n", "This is a string.");

// close file
fclose(fp);

// read a file
char buffer[255];

fp = fopen("test.txt", "r");

// stops at first space
fscanf(fp, "%s\n", buffer);
printf("%s\n", buffer);                 // This

// stops at newline
fgets(buffer, 255, (FILE*)fp);
printf("%s\n", buffer);                 // is a string.

'''
Michael Sjoeberg
2019-08-21
https://github.com/michaelsjoeberg/c-playground/blob/master/basics/files.c
'''