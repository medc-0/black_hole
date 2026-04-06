#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <vector>
#include <iostream>
#include <cmath>
using namespace glm;

/* global variables */
constexpr int WIDTH = 800;
constexpr int HEIGHT = 600;

/* Engine Class */
class Engine {
public:
    // Quads and Textures
    GLFWwindow* window;
    GLuint quadVAO;
    GLuint texture;
    GLuint shaderProgram;

    Engine(){
        this->window = StartGLFW(); // TODO: implement
        this->shaderProgram = CreateShaderProgram(); // TODO: Implement

        auto result = QuadVAO(); // TOSO: implement
        this->quadVAO = result[0];
        this->texture = result[1];
    }
    GLFWwindow* StartGLFW();
};