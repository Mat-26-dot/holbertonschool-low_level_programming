#ifndef MAIN_H
#define MAIN_H
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int open_source(const char *filename);
int create_dest(const char *filename);
void handle_error(int code, const char *msg, int fd);
void copy_contents(int fd_from, int fd_to, const char *from, const char *to);


#endif

