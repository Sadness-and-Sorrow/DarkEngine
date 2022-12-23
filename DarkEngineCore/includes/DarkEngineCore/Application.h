namespace DarkEngine {

	class Application {

	public:
		//����������� ������ Application
		Application();
		virtual ~Application();

		//���������� ������������ ����������
		Application(const Application&) = delete;
		Application(Application&&) = delete;
		Application& operator=(const Application&) = delete;
		Application& operator=(Application&&) = delete;

		//������� ������� ���� � ����������� ������ ������ � ��������� ����
		virtual int start(unsigned int window_width, unsigned int window_height, const char* window_title);

		//������� ���������� �� ������  ��������������� ����
		virtual void on_update() {}


	};

}