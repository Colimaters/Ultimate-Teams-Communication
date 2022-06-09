NAME_SRV = myteams_server
NAME_CLI = myteams_client

SRC_SRV = server/main.c \
			server/help.c \
			server/start.c \
			server/server_init.c \
			server/server_accept.c \
			server/client.c

SRC_CLI = client/main.c

OBJ_SRV = $(SRC_SRV:.c=.o)
OBJ_CLI = $(SRC_CLI:.c=.o)

WARN_CC = -Wall -Wextra -Wpedantic -ansi -std=c99
WARN_CC += -Wdouble-promotion -Wswitch-default -Wuninitialized -Walloc-zero
WARN_CC += -Wduplicated-branches -Wduplicated-cond -Wfloat-equal
WARN_CC += -Wdeclaration-after-statement -Wshadow
WARN_CC += -Wparentheses -Wlogical-op
WARN_CC += -Wno-aggressive-loop-optimizations -Wstrict-prototypes -Wvarargs

OPTI_CC = -O1 -fsigned-char

LOG_LIB = -L ./libs/myteams -l myteams

CFLAGS = $(WARN_CC) $(OPTI_CC) -L ./libs/my/lib -l my $(LOG_LIB) -I ./include

LDFLAGS = 

%.o: %.c
	@gcc -o $@ -c $< $(CFLAGS)

all: $(NAME_SRV) $(NAME_CLI) build

build:
	@make -C./libs/my/lib

$(NAME_SRV): $(OBJ_SRV)
	@gcc $(OBJ_SRV) -o $(NAME_SRV) $(CFLAGS)

$(NAME_CLI): $(OBJ_CLI)
	@gcc $(OBJ_CLI) -o $(NAME_CLI) $(CFLAGS)

clean:
	@rm -f $(OBJ_SRV) $(OBJ_CLI)

fclean: clean
	@rm -f $(NAME_SRV) $(NAME_CLI)

re: fclean all

.PHONY: clean fclean re