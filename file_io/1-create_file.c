#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file with specified content
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, bytes_written = 0;
    mode_t permissions = S_IRUSR | S_IWUSR; /* rw------- */

    if (filename == NULL)
        return (-1);

    /* Open file with O_CREAT, O_WRONLY, O_TRUNC flags */
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permissions);
    if (fd == -1)
        return (-1);

    /* If text_content is not NULL, write it to the file */
    if (text_content != NULL)
    {
        /* Calculate length of text_content */
        while (text_content[bytes_written] != '\0')
            bytes_written++;

        /* Write content to file */
        if (write(fd, text_content, bytes_written) == -1)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}