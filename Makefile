helloworld : helloworld.cpp
	gcc $< -o $@

clean :
	rm helloworld
