SRC_PATH = ./src
OBJ_PATH = ./obj
LIB_PATH = ./lib/mlx_linux
INC_PATH = -I ./lib/mlx_linux 

CC = gcc
FLAGS = -Wall -Wextra -Werror
LIB_NAME = libmlx_Linux.a
MAIN = main.c
EXEC = minirt
MLX_LIBS = -lXext -lX11 -lm -lz

MAIN_O = $(MAIN:.c=.o)
LIB = $(LIB_PATH)/$(LIB_NAME)
SRC = $(notdir $(wildcard ./src/*.c))
OBJ=$(addprefix $(OBJ_PATH)/, $(SRC:.c=.o))

all:	$(OBJ) $(LIB)

run:	$(EXEC)
	@./$<

clean:
	@rm -f $(OBJ_PATH)/*.o

fclean:	clean
	@rm -f $(LIB_PATH)/*.a
	@rm -f $(EXEC)

re: fclean all

$(OBJ_PATH)/%.o:	$(SRC_PATH)/%.c
	@$(CC) $(FLAGS) -I/usr/include -Imlx_linux -O3  -c $< -o $@  		
$(LIB_PATH)/%.a:
	@ar rcs $(LIB) $(OBJ) 

$(EXEC): $(LIB_PATH)/$(LIB_NAME)
	@$(CC) $(INC_PATH) -c $(MAIN)
	@$(CC) -o $@ $(MAIN_O) $(LIB_PATH)/$(LIB_NAME) $(MLX_LIBS)
	@rm -f *.o

$(LIB_PATH)/$(LIB_NAME):
	$(MAKE) -C $(LIB_PATH)
