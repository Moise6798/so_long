NAME		=	so_long

CC			=	clang

FLAG		=	-Wall -Wextra -Werror

MLX_FILE	=	libmlx.a

MLX_FLAG	=	-lX11 -lXext -lmlx

MLX_PATH	=	./minilibx-linux/

SRC			=	so_long_main.c \

OBJ			=	$(SRC:.c=.o)

.c.o:
			$(CC) $(MLX_FLAG) -c $< -o $@

all:		$(MLX_PATH) $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(MLX_FLAG) -fsanitize=address -o $@ $^ $(LIB)

$(MLX_PATH):
			@echo " [ .. ] | Compiling minilibx.."
			@make -s -C mlx
			@echo " [ OK ] | Minilibx ready!"


clean:
			@rm -rf $(OBJ) obj
			@echo "object files removed."

fclean:		clean
			@rm -rf $(NAME)
			@echo "binary file removed."

re:			fclean all

.PHONY:		all clean fclean re