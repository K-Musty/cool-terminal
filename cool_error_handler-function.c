#include "shell.h"
/**
 * cool_error_handl - This function handles unfortunate errors
 * @entry: Entry from the keyboard
 * @cool_message: number error
 */
void cool_error_handl(char *entry, int cool_message)
{
	size_t size = strlength(entry);
	int outputt = 0;
	int k = 0;
	cool_error_out err[] = {
		{70, "Error unknown", 14},
		{71, "Error reading from Prompt - Zero tokens", 40},
		{72, "No such file or directory", 26},
		{74, "FATAL ERROR: UNABLE TO CREATE CHILD PROCESS", 44},
		{75, "command not found", 17},
		{73, "FATAL ERROR: NO MEMORY AVAILABLE.", 33},
		{76, "FATAL ERROR: UNABLE TO CREATE CMD LIST", 38},
		{777, "", 0}
	};

	write(STDERR_FILENO, entry, size);
	write(STDERR_FILENO, ": ", 2);
	while (err[k].error_out != 777)
	{
		if (err[k].error_out == cool_message)
		{
			write(STDERR_FILENO, err[k].output, err[k].size);
			outputt = 1;
			break;
		}
		k++;
	}
}
	if (!outputt)
		write(STDERR_FILENO, err[0].output, err[0].size);
	write(STDERR_FILENO, "\n", 1);
}
