#pragma once

#include "DarkEngineCore/Application.h"

#include <iostream>

#include <GLFW/glfw3.h>

namespace DarkEngine {

	//добавил конструктор класса приложения
	Application::Application() {

	}

	//добавил деструктор класса приложения
	Application::~Application() {

	}

	//функция запуска окна с параметрами высоты ширины и заголовка окна
	int Application::start(unsigned int window_width, unsigned int window_height, const char* window_title) {
        std::cout << "Hello from Engine!" << std::endl;

        GLFWwindow* window;

        //Инициализируется библиотека glfw
        if (!glfwInit())
            return -1;

        //Код создания окна, сюда предаем наши параметры
        window = glfwCreateWindow(window_width, window_height, window_title, NULL, NULL);
        if (!window)
        {
            glfwTerminate();
            return -1;
        }

        /* Make the window's context current */
        glfwMakeContextCurrent(window);

        //Главный цикл. Тут происходит отрисовка самой игры. Добавляем сюда свою функцию на каждый кадр.
        while (!glfwWindowShouldClose(window))
        {
            /* Render here */
            //glClear(GL_COLOR_BUFFER_BIT);

            /* Swap front and back buffers */
            glfwSwapBuffers(window);

            /* Poll for and process events */
            glfwPollEvents();

            //Наща функция обороботчик кадров
            on_update();
        }

        glfwTerminate();
        return 0;
	}
	

}