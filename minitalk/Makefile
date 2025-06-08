# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/08 09:20:40 by fsuguiur          #+#    #+#              #
#    Updated: 2025/06/08 09:33:13 by fsuguiur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ---------------- Paths ----------------
FT_PRINTF_PATH     = ft_printf
MINITALK_SRC_PATH  = src
MINITALK_INC_PATH  = inc

# ---------------- Files ----------------
SERVER_SRC         = $(MINITALK_SRC_PATH)/server.c
CLIENT_SRC         = $(MINITALK_SRC_PATH)/client.c
SERVER_OBJ         = $(SERVER_SRC:.c=.o)
CLIENT_OBJ         = $(CLIENT_SRC:.c=.o)

# ---------------- Lib ------------------
LIBFT_PRINTF       = $(FT_PRINTF_PATH)/libftprintf.a

# ---------------- Compiler ----------------
CC                 = cc
CFLAGS             = -Wall -Wextra -Werror
INCLUDES           = -I$(FT_PRINTF_PATH) -I$(MINITALK_INC_PATH)

# ---------------- Executables ----------------
SERVER_NAME        = server
CLIENT_NAME        = client

# ---------------- Rules ----------------

all: $(SERVER_NAME) $(CLIENT_NAME)

$(LIBFT_PRINTF): 
	@$(MAKE) -C $(FT_PRINTF_PATH) $(notdir $@)

$(SERVER_NAME): $(SERVER_OBJ) $(LIBFT_PRINTF)
	@$(CC) $(CFLAGS) $(INCLUDES) $(SERVER_OBJ) $(LIBFT_PRINTF) -o $(SERVER_NAME)

$(CLIENT_NAME): $(CLIENT_OBJ) $(LIBFT_PRINTF)
	@$(CC) $(CFLAGS) $(INCLUDES) $(CLIENT_OBJ) $(LIBFT_PRINTF) -o $(CLIENT_NAME)

# Compile source files
$(MINITALK_SRC_PATH)/%.o: $(MINITALK_SRC_PATH)/%.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@$(MAKE) -C $(FT_PRINTF_PATH) clean
	@rm -f $(SERVER_OBJ) $(CLIENT_OBJ)

fclean: clean
	@$(MAKE) -C $(FT_PRINTF_PATH) fclean
	@rm -f $(SERVER_NAME) $(CLIENT_NAME)

re: fclean all

.PHONY: all clean fclean re
