*This project has been created as part of the 42 curriculum by micampos.*

## Description 

This project has the objective of creating the function Get_next_line, it aims to teach the concept of static variables. Get_next_line is a function that accepts a file descriptor as a parameter and when called, returns a string representing the first line of the file referenced by the file descriptor passed. Subsequent calls of get_next_line return subsequent lines from the file. After the end of file is reached, get_next_line returns NULL. If a problem occurs, get_next_line also returns NULL. The key to this project is using static storage that persists beyond the function return.

## How to use
1. Clone the repository.
2. Compile `cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=42`

## Resources

* Google
* Peer discussions

### A.I. Usage Disclosure
* A.I. was used in this project to clear up some syntax questions.
* To learn new concepts related to this project.

## Program Logic Deepdive

### Notable Function overview:

#### char *normal_strjoin (dst, src)

Almost a standard strjoin in terms of function. When normal_strjoin receives helper, it assumes it's a heap allocated string and it takes ownership over the freeing of that memory. When normal_strjoin returns, it always frees helper.

#### char *extract_line(char **buffer)

The function extraxt_line, receives the heap allocatead string helper and the string buffer which always contains a new line character. The function calls normal_strjoin and then appends a null terminator at the index [ helper lenght + index of new_line + 1 ] to close the string right after the new line character. Extract_line then copies buffer from the position after the new line to its beginning.

#### char *get_next_line(int fd)

get_next_line loop checks for new line character inside buffer, if it doesn't find it and received is bigger than zero, helper becomes [helper + buffer] content wise and read is called to fill buffer. buffer then gets null Terminated at index [ received ]. when a new line is found inside buffer, the loop finishes and extract_line is called joining buffer and helper, rewriting buffer from the new line character and returning the current line. If get_next_line is repeatedly called the file will eventually end and received is going to be 0 and buffer will contain no new line character. if this happens the the loop is exited but before that buffer gets terminated on index 0 and the function returns helper. When get_next_line is called again, because received is inialized to 1, the loop in entered and normal_strjoin is called, because buffer[ 0 ] equals the null terminator and helper is initialized as NULL, string_join returns NULL. This will happen on every subsquent call of get_next_line.c.
