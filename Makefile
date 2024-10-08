# Nom de l'exécutable
EXEC = stats_character

# Compilateur
CC = gcc

# Options de compilation
CFLAGS = -Wall -Wextra -Werror

# Fichiers source
SRCS = ex-4.c

# Fichiers objets générés après compilation
OBJS = $(SRCS:.c=.o)

# Cible par défaut
all: $(EXEC)

# Règle pour générer l'exécutable
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

# Règle pour compiler les fichiers .c en fichiers objets .o
%.o: %.c struct.h
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers objets et l'exécutable
clean:
	rm -f $(OBJS) $(EXEC)

# Règle pour supprimer seulement l'exécutable
fclean: clean
	rm -f $(EXEC)

# Règle pour recompiler tout
re: fclean all

# Indiquer que les règles ne sont pas des fichiers réels
.PHONY: all clean fclean re