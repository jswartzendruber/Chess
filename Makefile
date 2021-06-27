CC = clang
CFLAGS = -Wall

EXECUTABLE_NAME = chess

OBJS = main.o board.o fen.o
OBJDIR = bin
SRCDIR = src

OBJS_WITH_DIR = $(patsubst %, $(OBJDIR)/%, $(OBJS))

$(EXECUTABLE_NAME): $(OBJS_WITH_DIR)
	$(CC) $(CFLAGS) $(OBJS_WITH_DIR) -o $(EXECUTABLE_NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) $^ -c -o $@

# Create obj file if it does not exist
$(OBJDIR):
	mkdir -p $@


.PHONY: clean
clean:
	rm -rf $(EXECUTABLE_NAME) $(OBJDIR)