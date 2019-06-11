CC := g++
SRCDIR := src
BUILDDIR := build
BINDIR := bin
TARGET := bin/TireCenter
TESTDIR := test
TESTSOURCE := Client_test.cpp
TESTTARGET := test
 
SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS := -g -Wall
INC := -I include

$(TARGET): $(OBJECTS)
	@echo " Linking...";
	@mkdir -p $(BINDIR)
	$(CC) $^ -o $(TARGET) $(LIB)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

tests:
	@mkdir -p $(BINDIR)
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $(INC) -c $(TESTDIR)/class_Car_test.cpp -o $(BUILDDIR)/test.o
	$(CC) $(BUILDDIR)/test.o $(BUILDDIR)/Car.o -o $(BINDIR)/$(TESTTARGET) -lboost_unit_test_framework

run:
	./$(TARGET)

runtests:
	./bin/$(TESTTARGET)


clean:
	@echo " Cleaning..."; 
	$(RM) -r $(BUILDDIR) $(BINDIR);

.PHONY: clean
