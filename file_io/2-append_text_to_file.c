#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL-terminated string to add at the end
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, bytes_written = 0;
    ssize_t write_result;

    if (filename == NULL)
        return (-1);

    /* Open file in append mode, without creating it if it doesn't exist */
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    /* If text_content is NULL, just check if file exists and is writable */
    if (text_content == NULL)
    {
        close(fd);
        return (1);
    }

    /* Calculate length of text_content */
    while (text_content[bytes_written] != '\0')
        bytes_written++;

    /* Write content to end of file */
    write_result = write(fd, text_content, bytes_written);
    if (write_result == -1 || write_result != bytes_written)
    {
        close(fd);
        return (-1);
    }

    close(fd);
    return (1);
}