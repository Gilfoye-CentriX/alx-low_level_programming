#ifndef MAINH
#define MAINH

#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void printclass(char *head);
void printdata(char *head);
void printversion(char *head);
void printabi(char *head);
void printtype(char *head);
void printentry(char *head);

int _putchar(char c);

#endif
