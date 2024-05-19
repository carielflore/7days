#pragma once
#include <vcclr.h> // Для использования маршалинга строк

namespace My7days {

	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Reflection;
	using namespace System::Resources;

	/// <summary>
	/// Сводка для Level2
	/// </summary>
	public ref class Level2 : public System::Windows::Forms::Form
	{
	public:
		Level2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		// Функция для получения изображения из ресурсов
		Image^ GetImageFromResource(String^ resourceName)
		{
			// Получаем текущую сборку
			Assembly^ assembly = Assembly::GetExecutingAssembly();

			// Получаем менеджер ресурсов для текущей сборки
			ResourceManager^ rm = gcnew ResourceManager("My7days.Level2", assembly);

			// Получаем изображение из ресурсов по его имени
			Bitmap^ image = dynamic_cast<Bitmap^>(rm->GetObject(resourceName));

			return image;
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Level2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ firstFinish;
	protected:
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::Button^ nextButton;
	private: System::Windows::Forms::PictureBox^ ppAdvice;
	private: System::Windows::Forms::Panel^ panelLabel;
	private: System::Windows::Forms::PictureBox^ yourWeek;
	private: int n = 1;
	private: System::Windows::Forms::PictureBox^ advice2;
	private: System::Windows::Forms::PictureBox^ advice3;
	private: System::Windows::Forms::PictureBox^ advice4;
	private: System::Windows::Forms::PictureBox^ advice5;
	private: System::Windows::Forms::PictureBox^ advice6;
	private: System::Windows::Forms::PictureBox^ advice7;
	private: System::Windows::Forms::PictureBox^ close;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Level2::typeid));
			this->firstFinish = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->ppAdvice = (gcnew System::Windows::Forms::PictureBox());
			this->panelLabel = (gcnew System::Windows::Forms::Panel());
			this->yourWeek = (gcnew System::Windows::Forms::PictureBox());
			this->advice2 = (gcnew System::Windows::Forms::PictureBox());
			this->advice3 = (gcnew System::Windows::Forms::PictureBox());
			this->advice4 = (gcnew System::Windows::Forms::PictureBox());
			this->advice5 = (gcnew System::Windows::Forms::PictureBox());
			this->advice6 = (gcnew System::Windows::Forms::PictureBox());
			this->advice7 = (gcnew System::Windows::Forms::PictureBox());
			this->close = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ppAdvice))->BeginInit();
			this->panelLabel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yourWeek))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->advice2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->advice3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->advice4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->advice5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->advice6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->advice7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->close))->BeginInit();
			this->SuspendLayout();
			// 
			// firstFinish
			// 
			this->firstFinish->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstFinish.BackgroundImage")));
			this->firstFinish->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->firstFinish->FlatAppearance->BorderSize = 0;
			this->firstFinish->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->firstFinish->Location = System::Drawing::Point(301, 449);
			this->firstFinish->Name = L"firstFinish";
			this->firstFinish->Size = System::Drawing::Size(311, 73);
			this->firstFinish->TabIndex = 14;
			this->firstFinish->UseVisualStyleBackColor = true;
			this->firstFinish->Visible = false;
			this->firstFinish->Click += gcnew System::EventHandler(this, &Level2::firstFinish_Click);
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::Transparent;
			this->backButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.BackgroundImage")));
			this->backButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backButton->FlatAppearance->BorderSize = 0;
			this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButton->Location = System::Drawing::Point(388, 382);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(66, 61);
			this->backButton->TabIndex = 13;
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &Level2::backButton_Click);
			// 
			// nextButton
			// 
			this->nextButton->BackColor = System::Drawing::Color::Transparent;
			this->nextButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextButton.BackgroundImage")));
			this->nextButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->nextButton->FlatAppearance->BorderSize = 0;
			this->nextButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextButton->Location = System::Drawing::Point(460, 382);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(66, 61);
			this->nextButton->TabIndex = 12;
			this->nextButton->UseVisualStyleBackColor = false;
			this->nextButton->Click += gcnew System::EventHandler(this, &Level2::nextButton_Click);
			// 
			// ppAdvice
			// 
			this->ppAdvice->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ppAdvice.Image")));
			this->ppAdvice->Location = System::Drawing::Point(132, 216);
			this->ppAdvice->Name = L"ppAdvice";
			this->ppAdvice->Size = System::Drawing::Size(661, 160);
			this->ppAdvice->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ppAdvice->TabIndex = 11;
			this->ppAdvice->TabStop = false;
			this->ppAdvice->Click += gcnew System::EventHandler(this, &Level2::ppAdvice_Click);
			// 
			// panelLabel
			// 
			this->panelLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->panelLabel->Controls->Add(this->yourWeek);
			this->panelLabel->Location = System::Drawing::Point(-19, 13);
			this->panelLabel->Name = L"panelLabel";
			this->panelLabel->Size = System::Drawing::Size(954, 113);
			this->panelLabel->TabIndex = 10;
			this->panelLabel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Level2::panelLabel_Paint);
			// 
			// yourWeek
			// 
			this->yourWeek->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"yourWeek.Image")));
			this->yourWeek->Location = System::Drawing::Point(198, 30);
			this->yourWeek->Name = L"yourWeek";
			this->yourWeek->Size = System::Drawing::Size(573, 80);
			this->yourWeek->TabIndex = 1;
			this->yourWeek->TabStop = false;
			this->yourWeek->Click += gcnew System::EventHandler(this, &Level2::yourWeek_Click);
			// 
			// advice2
			// 
			this->advice2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"advice2.Image")));
			this->advice2->Location = System::Drawing::Point(12, 449);
			this->advice2->Name = L"advice2";
			this->advice2->Size = System::Drawing::Size(158, 39);
			this->advice2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->advice2->TabIndex = 15;
			this->advice2->TabStop = false;
			// 
			// advice3
			// 
			this->advice3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"advice3.Image")));
			this->advice3->Location = System::Drawing::Point(12, 449);
			this->advice3->Name = L"advice3";
			this->advice3->Size = System::Drawing::Size(158, 39);
			this->advice3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->advice3->TabIndex = 16;
			this->advice3->TabStop = false;
			// 
			// advice4
			// 
			this->advice4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"advice4.Image")));
			this->advice4->Location = System::Drawing::Point(12, 449);
			this->advice4->Name = L"advice4";
			this->advice4->Size = System::Drawing::Size(158, 39);
			this->advice4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->advice4->TabIndex = 17;
			this->advice4->TabStop = false;
			// 
			// advice5
			// 
			this->advice5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"advice5.Image")));
			this->advice5->Location = System::Drawing::Point(12, 449);
			this->advice5->Name = L"advice5";
			this->advice5->Size = System::Drawing::Size(158, 39);
			this->advice5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->advice5->TabIndex = 18;
			this->advice5->TabStop = false;
			// 
			// advice6
			// 
			this->advice6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"advice6.Image")));
			this->advice6->Location = System::Drawing::Point(12, 449);
			this->advice6->Name = L"advice6";
			this->advice6->Size = System::Drawing::Size(158, 39);
			this->advice6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->advice6->TabIndex = 19;
			this->advice6->TabStop = false;
			// 
			// advice7
			// 
			this->advice7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"advice7.Image")));
			this->advice7->Location = System::Drawing::Point(12, 449);
			this->advice7->Name = L"advice7";
			this->advice7->Size = System::Drawing::Size(158, 39);
			this->advice7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->advice7->TabIndex = 20;
			this->advice7->TabStop = false;
			// 
			// close
			// 
			this->close->Location = System::Drawing::Point(12, 449);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(158, 39);
			this->close->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->close->TabIndex = 21;
			this->close->TabStop = false;
			// 
			// Level2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 534);
			this->Controls->Add(this->close);
			this->Controls->Add(this->advice7);
			this->Controls->Add(this->advice6);
			this->Controls->Add(this->advice5);
			this->Controls->Add(this->advice4);
			this->Controls->Add(this->advice3);
			this->Controls->Add(this->advice2);
			this->Controls->Add(this->firstFinish);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->ppAdvice);
			this->Controls->Add(this->panelLabel);
			this->Name = L"Level2";
			this->Text = L"Level2";
			this->Load += gcnew System::EventHandler(this, &Level2::Level2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ppAdvice))->EndInit();
			this->panelLabel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yourWeek))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->advice2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->advice3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->advice4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->advice5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->advice6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->advice7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->close))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void nextButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Image^ image;
		if (n < 7) {
			n += 1;
			switch (n) {
			case 2:
				image = GetImageFromResource("advice2.Image");
				ppAdvice->Image = image;
				break;
			case 3:
				image = GetImageFromResource("advice3.Image");
				ppAdvice->Image = image;
				break;
			case 4:
				image = GetImageFromResource("advice4.Image");
				ppAdvice->Image = image;
				break;
			case 5:
				image = GetImageFromResource("advice5.Image");
				ppAdvice->Image = image;
				break;
			case 6:
				image = GetImageFromResource("advice6.Image");
				ppAdvice->Image = image;
				break;
			case 7:
				image = GetImageFromResource("advice7.Image");
				ppAdvice->Image = image;
				firstFinish->Visible = true;
				break;
			default:
				// Обработка выхода за границы диапазона значений n
				break;
			}
		}
	}
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Image^ image;
		if (n > 1) {
			n -= 1;
			switch (n) {
			case 1:
				image = GetImageFromResource("ppAdvice.Image");
				ppAdvice->Image = image;
				break;
			case 2:
				image = GetImageFromResource("advice2.Image");
				ppAdvice->Image = image;
				break;
			case 3:
				image = GetImageFromResource("advice3.Image");
				ppAdvice->Image = image;
				break;
			case 4:
				image = GetImageFromResource("advice4.Image");
				ppAdvice->Image = image;
				break;
			case 5:
				image = GetImageFromResource("advice5.Image");
				ppAdvice->Image = image;
				break;
			case 6:
				image = GetImageFromResource("advice6.Image");
				ppAdvice->Image = image;
				break;
			default:
				// Обработка выхода за границы диапазона значений n
				break;
			}
		}
	}
public:
	String^ LoadImageLocation()
	{
		// Проверка существования файла конфигурации
		if (File::Exists("image_location_config.txt"))
		{
			// Чтение информации из файла конфигурации
			StreamReader^ reader = gcnew StreamReader("image_location_config.txt");
			String^ imagePath = reader->ReadLine();
			reader->Close();
			return imagePath;
		}
		else
		{
			return nullptr;
		}
	}
	void SaveImageLocation(String^ imagePath)
	{
		// Сохранение изменений в файле конфигурации
		StreamWriter^ writer = gcnew StreamWriter("image_location_config.txt");
		writer->WriteLine(imagePath);
		writer->Close();
	}
private:
	System::Void firstFinish_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
		String^ imageCheck = LoadImageLocation();
		if ((imageCheck != nullptr && imageCheck->Contains("2")) or (imageCheck != nullptr && imageCheck->Contains("3")) or (imageCheck != nullptr && imageCheck->Contains("4")) or (imageCheck != nullptr && imageCheck->Contains("5")) or (imageCheck != nullptr && imageCheck->Contains("6")) or (imageCheck != nullptr && imageCheck->Contains("7"))) {

		}
		else {
			String^ imagePath = "2";
			SaveImageLocation(imagePath); // Сохранение пути к изображению
			MessageBox::Show("Вы получили новое достижение!");
		}
	}
private: System::Void ppAdvice_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panelLabel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void yourWeek_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Level2_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
