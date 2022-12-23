#include <iostream>
#include <memory>
#include <DarkEngineCore/Application.h>

//Определяем класс МайАпп, который наследуется от Аппликэйшн из движка
class MyApp : public DarkEngine::Application {


	//функция которая выводит в лог-консоль номер кадра, который отрисовывается
	virtual void on_update() override {
		std::cout << "Update frame: " << frame++ << std::endl;
	}

	//изначальное значение переменной подсчёта кадров
	int frame = 0;
};

int main() {
	
	auto myApp = std::make_unique<MyApp>();

	int returnCode = myApp->start(1024, 768, "Niggas Game");

	std::cin.get();

	return returnCode;
}