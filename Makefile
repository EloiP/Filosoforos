# Executable name
NAME = philo
CC = cc

# Compiler flags
CFLAGS = #-Wall -Werror -Wextra
BFLAGS = -g -fsanitize=address

# Directories
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = Includes
DEPS_DIR = deps

# Source files
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
DEP_FILES = $(SRC_FILES:$(SRC_DIR)/%.c=$(DEPS_DIR)/%.d)
CLIB = .a

# Rules
all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^ -I $(INC_DIR)

$(INC_DIR):
	@mkdir -p $(INC_DIR) # Create Includes directory if it doesn't exist

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c Makefile
	@mkdir -p $(OBJ_DIR)  # Create object directory if it doesn't exist
	@mkdir -p $(DEPS_DIR)  # Create dependencies directory if it doesn't exist
	$(CC) $(CFLAGS) -c $< -o $@ -MD -MF $(DEPS_DIR)/$*.d -I $(INC_DIR)

# Include dependency files
-include $(DEP_FILES)

norm:
	norminette $(Includes) $(SRC_DIR)

mem:
	valgrind --track-origins=yes --show-leak-kinds=all --leakcheck=full ./$(NAME)

clean:
	@rm -rf $(OBJ_DIR)  # Remove object files
	@rm -rf $(DEPS_DIR)  # Remove deps files
	@rm -rf $(LIB_DIR) # Remove libs

fclean: clean
	@rm -f $(NAME)  # Remove the executable

re: fclean all  # Rebuild the project

.PHONY: all clean fclean re
