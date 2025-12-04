CC = g++
CFLAGS = -Wall

SRCS = TestInequalities.cpp Inequalities.cpp 
OBJS = $(SRCS:.cpp=.o)

myprogram: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) myprogram

