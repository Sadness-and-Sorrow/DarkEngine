#pragma once

#include "DarkEngineCore/Application.h"

#include <iostream>

#include <GLFW/glfw3.h>

namespace DarkEngine {

	//������� ����������� ������ ����������
	Application::Application() {

	}

	//������� ���������� ������ ����������
	Application::~Application() {

	}

	//������� ������� ���� � ����������� ������ ������ � ��������� ����
	int Application::start(unsigned int window_width, unsigned int window_height, const char* window_title) {
        std::cout << "Hello from Engine!" << std::endl;

        GLFWwindow* window;

        //���������������� ���������� glfw
        if (!glfwInit())
            return -1;

        //��� �������� ����, ���� ������� ���� ���������
        window = glfwCreateWindow(window_width, window_height, window_title, NULL, NULL);
        if (!window)
        {
            glfwTerminate();
            return -1;
        }

        /* Make the window's context current */
        glfwMakeContextCurrent(window);

        //������� ����. ��� ���������� ��������� ����� ����. ��������� ���� ���� ������� �� ������ ����.
        while (!glfwWindowShouldClose(window))
        {
            /* Render here */
            //glClear(GL_COLOR_BUFFER_BIT);

            /* Swap front and back buffers */
            glfwSwapBuffers(window);

            /* Poll for and process events */
            glfwPollEvents();

            //���� ������� ����������� ������
            on_update();
        }

        glfwTerminate();
        return 0;
	}
	

}