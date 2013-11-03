bin/helloworld : helloworld.cpp
	gcc $< -o $@

clean :
	rm bin/helloworld
