all: sample2D

sample3D: Sample_GL3.cpp
	g++ -o sample3D Sample_GL3.cpp -lGL -lGLU -lGLEW -lglut -lm  

sample2D: play.cpp
	g++ -o sample2D play.cpp glad.c  -lGL -lglfw -lSOIL -ldl -lGLU -lGLEW -lm -lglut
clean:
	rm sample2D 
