#include <iostream>
#include <memory>
#include <DarkEngineCore/Application.h>

//���������� ����� ������, ������� ����������� �� ���������� �� ������
class MyApp : public DarkEngine::Application {


	//������� ������� ������� � ���-������� ����� �����, ������� ��������������
	virtual void on_update() override {
		std::cout << "Update frame: " << frame++ << std::endl;
	}

	//����������� �������� ���������� �������� ������
	int frame = 0;
};

int main() {
	
	auto myApp = std::make_unique<MyApp>();

	int returnCode = myApp->start(1024, 768, "Niggas Game");

	std::cin.get();

	return returnCode;
}