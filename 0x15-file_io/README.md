# 0x15. C - File I/O
## Project Objectives
-How to create, open, close, read and write files
-What are file descriptors
-What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
-How to use the I/O system calls open, close, read and write
-What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
-What are file permissions, and how to set them when creating a file with the open system call
-What is a system call
-What is the difference between a function and a system call

## File Descriptions
### Mandatory
**[0. Tread lightly, she is near] ssize_t read_textfile(const char *filename, size_t letters); - a function that reads a text file and prints it to the POSIX standard output.

**[1. Under the snow] int create_file(const char *filename, char *text_content); - a function that creates a file.

**[2. Speak gently, she can hear] int append_text_to_file(const char *filename, char *text_content); - a function that appends text at the end of a file.

**[3. cp] cp file_from file_to - a program that copies the content of a file to another file.


### Advanced
**[4. elf] elf_header elf_filename - a program that displays the information contained in the ELF header at the start of an ELF file.
