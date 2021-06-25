CC = clang
CFLAGS = -Wall

EXECUTABLE_NAME = chess

OBJS = main.o board.o fen.o
OBJDIR = obj
SRCDIR = src

OBJS_WITH_DIR = $(patsubst %, $(OBJDIR)/%, $(OBJS))

$(EXECUTABLE_NAME): $(OBJS_WITH_DIR)
	$(CC) $(CFLAGS) $(OBJS_WITH_DIR) -o $(EXECUTABLE_NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $^ -c -o $@


.PHONY: clean
clean:
	rm -f $(EXECUTABLE_NAME) $(OBJS_WITH_DIR)