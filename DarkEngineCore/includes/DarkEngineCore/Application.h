namespace DarkEngine {

	class Application {

	public:
		//Конструктор класса Application
		Application();
		virtual ~Application();

		//Запрещение дублирования приложения
		Application(const Application&) = delete;
		Application(Application&&) = delete;
		Application& operator=(const Application&) = delete;
		Application& operator=(Application&&) = delete;

		//функция запуска окна с параметрами высоты ширины и заголовка окна
		virtual int start(unsigned int window_width, unsigned int window_height, const char* window_title);

		//Функция вызываемая на каждый  прорисовываемый кадр
		virtual void on_update() {}


	};

}