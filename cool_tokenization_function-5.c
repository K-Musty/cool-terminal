#include "shell.h"

/**
 * cool_get_term - makes a node
 * @entry: keyboard instruction
 *
 * Return: -1|1
 */
cool_instruction *cool_get_term(char *entry)
{
	cool_instruction *cool_node = NULL;

	cool_node = malloc(sizeof(cool_instruction));
	if (cool_node == NULL)
		cool_error_handl(entry, 76);
	cool_node->instruction = malloc(sizeof(char *));
	if (!cool_node->instruction)
		cool_error_handl(entry, 76);
	return (cool_node);
}

/**
 * cool_token - includes token(keyy)
 * @dry: tyerminal shell
 * @cool_node: node instruction
 * @start: starting point
 * @keyy: token
 *
 */
void cool_token(char *dry, command_t *cool_node, size_t start, char *keyy)
{
	cool_node->instruction[start] = strdupl(keyy);
	if (!cool_node->instruction[start])
		cool_error_handl(dry, 76);
}
