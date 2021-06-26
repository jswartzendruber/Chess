CC = clang
CFLAGS = -Wall

EXECUTABLE_NAME = chess

OBJS = main.o board.o fen.o
OBJDIR = obj
SRCDIR = src

OBJS_WITH_DIR = $(patsubst %, $(OBJDIR)/%, $(OBJS))

$(EXECUTABLE_NAME): $(OBJS_WITH_DIR)
	$(CC) $(CFLAGS) $(OBJS_WITH_DIR) -o $(EXECUTABLE_NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | obj
	$(CC) $(CFLAGS) $^ -c -o $@

# Create obj file if it does not exist
obj:
	mkdir -p $@


.PHONY: clean
clean:
	rm -rf $(EXECUTABLE_NAME) $(OBJDIR)