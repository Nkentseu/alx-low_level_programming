#include "main.h"

/**
 * create_file - Crée un fichier et écrit du contenu dedans
 *
 * @filename: Nom du fichier à créer
 * @text_content: Contenu à écrire dans le fichier
 *
 * Return: 1 en cas de succès, -1 en cas d'erreur
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (filename == NULL)
		return (-1);

	/**
	 * Ouverture ou création du fichier en écriture seulement,
	 * avec les permissions rw-------
	 **/
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* Écriture du texte dans le fichier */
	if (text_content != NULL)
	{
		while (text_content[count])
			count++;
		if (write(fd, text_content, count) == -1)
			return (-1);
	}

	/* Fermeture du fichier et retour */
	if (close(fd) == -1)
		return (-1);
	return (1);
}
