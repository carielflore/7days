#pragma once
#include "Level1.h"
#include "Level2.h"
#include "Level3.h"
#include "level4.h"
#include "level5.h"
#include "level6.h"
#include "level7.h"
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
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			Load += gcnew EventHandler(this, &MyForm1::Form1_Load); // Привязка обработчика события загрузки формы
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
			ResourceManager^ rm = gcnew ResourceManager("My7days.MyForm1", assembly);

			// Получаем изображение из ресурсов по его имени
			Bitmap^ image = dynamic_cast<Bitmap^>(rm->GetObject(resourceName));

			return image;
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ levelImage1;
	private: System::Windows::Forms::PictureBox^ levelImage2;




	private: System::Windows::Forms::PictureBox^ levelImage3;
	private: System::Windows::Forms::PictureBox^ levelImage4;
	private: System::Windows::Forms::PictureBox^ levelImage5;
	private: System::Windows::Forms::PictureBox^ levelImage6;
	private: System::Windows::Forms::PictureBox^ levelImage7;
	private: System::Windows::Forms::PictureBox^ levelComplete;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->levelImage1 = (gcnew System::Windows::Forms::PictureBox());
			this->levelImage2 = (gcnew System::Windows::Forms::PictureBox());
			this->levelImage3 = (gcnew System::Windows::Forms::PictureBox());
			this->levelImage4 = (gcnew System::Windows::Forms::PictureBox());
			this->levelImage5 = (gcnew System::Windows::Forms::PictureBox());
			this->levelImage6 = (gcnew System::Windows::Forms::PictureBox());
			this->levelImage7 = (gcnew System::Windows::Forms::PictureBox());
			this->levelComplete = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelComplete))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// levelImage1
			// 
			this->levelImage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->levelImage1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"levelImage1.Image")));
			this->levelImage1->Location = System::Drawing::Point(72, 12);
			this->levelImage1->Name = L"levelImage1";
			this->levelImage1->Size = System::Drawing::Size(209, 156);
			this->levelImage1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->levelImage1->TabIndex = 4;
			this->levelImage1->TabStop = false;
			this->levelImage1->Click += gcnew System::EventHandler(this, &MyForm1::levelImage1_Click);
			// 
			// levelImage2
			// 
			this->levelImage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->levelImage2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"levelImage2.Image")));
			this->levelImage2->Location = System::Drawing::Point(368, 12);
			this->levelImage2->Name = L"levelImage2";
			this->levelImage2->Size = System::Drawing::Size(209, 156);
			this->levelImage2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->levelImage2->TabIndex = 5;
			this->levelImage2->TabStop = false;
			this->levelImage2->Click += gcnew System::EventHandler(this, &MyForm1::levelImage2_Click);
			// 
			// levelImage3
			// 
			this->levelImage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->levelImage3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"levelImage3.Image")));
			this->levelImage3->Location = System::Drawing::Point(658, 12);
			this->levelImage3->Name = L"levelImage3";
			this->levelImage3->Size = System::Drawing::Size(209, 156);
			this->levelImage3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->levelImage3->TabIndex = 6;
			this->levelImage3->TabStop = false;
			this->levelImage3->Click += gcnew System::EventHandler(this, &MyForm1::levelImage3_Click);
			// 
			// levelImage4
			// 
			this->levelImage4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->levelImage4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"levelImage4.Image")));
			this->levelImage4->Location = System::Drawing::Point(72, 189);
			this->levelImage4->Name = L"levelImage4";
			this->levelImage4->Size = System::Drawing::Size(209, 156);
			this->levelImage4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->levelImage4->TabIndex = 7;
			this->levelImage4->TabStop = false;
			this->levelImage4->Click += gcnew System::EventHandler(this, &MyForm1::levelImage4_Click);
			// 
			// levelImage5
			// 
			this->levelImage5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->levelImage5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"levelImage5.Image")));
			this->levelImage5->Location = System::Drawing::Point(368, 189);
			this->levelImage5->Name = L"levelImage5";
			this->levelImage5->Size = System::Drawing::Size(209, 156);
			this->levelImage5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->levelImage5->TabIndex = 8;
			this->levelImage5->TabStop = false;
			this->levelImage5->Click += gcnew System::EventHandler(this, &MyForm1::levelImage5_Click);
			// 
			// levelImage6
			// 
			this->levelImage6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->levelImage6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"levelImage6.Image")));
			this->levelImage6->Location = System::Drawing::Point(658, 189);
			this->levelImage6->Name = L"levelImage6";
			this->levelImage6->Size = System::Drawing::Size(209, 156);
			this->levelImage6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->levelImage6->TabIndex = 9;
			this->levelImage6->TabStop = false;
			this->levelImage6->Click += gcnew System::EventHandler(this, &MyForm1::levelImage6_Click);
			// 
			// levelImage7
			// 
			this->levelImage7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->levelImage7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"levelImage7.Image")));
			this->levelImage7->Location = System::Drawing::Point(72, 366);
			this->levelImage7->Name = L"levelImage7";
			this->levelImage7->Size = System::Drawing::Size(209, 156);
			this->levelImage7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->levelImage7->TabIndex = 10;
			this->levelImage7->TabStop = false;
			this->levelImage7->Click += gcnew System::EventHandler(this, &MyForm1::levelImage7_Click);
			// 
			// levelComplete
			// 
			this->levelComplete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->levelComplete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"levelComplete.Image")));
			this->levelComplete->Location = System::Drawing::Point(368, 366);
			this->levelComplete->Name = L"levelComplete";
			this->levelComplete->Size = System::Drawing::Size(209, 156);
			this->levelComplete->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->levelComplete->TabIndex = 11;
			this->levelComplete->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(368, 366);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(209, 156);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 534);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->levelComplete);
			this->Controls->Add(this->levelImage7);
			this->Controls->Add(this->levelImage6);
			this->Controls->Add(this->levelImage5);
			this->Controls->Add(this->levelImage4);
			this->Controls->Add(this->levelImage3);
			this->Controls->Add(this->levelImage2);
			this->Controls->Add(this->levelImage1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelImage7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelComplete))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
public:
	String^ LoadImageLocation()
	{
		// Проверка существования файла конфигурации
		if (File::Exists("image_location_config.txt"))
		{
			// Чтение пути к изображению из файла
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
public:
	System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ imagePath = LoadImageLocation();
		if (imagePath != nullptr) {
			if (imagePath->Contains("7")) {
				Image^ image = GetImageFromResource("levelComplete.Image");
				levelImage1->Image = image;
				levelImage2->Image = image;
				levelImage3->Image = image;
				levelImage4->Image = image;
				levelImage5->Image = image;
				levelImage6->Image = image;
				levelImage7->Image = image;
			}
			else if (imagePath->Contains("6")) {
				Image^ image = GetImageFromResource("levelComplete.Image");
				levelImage1->Image = image;
				levelImage2->Image = image;
				levelImage3->Image = image;
				levelImage4->Image = image;
				levelImage5->Image = image;
				levelImage6->Image = image;
			}
			else if (imagePath->Contains("5")) {
				Image^ image = GetImageFromResource("levelComplete.Image");
				levelImage1->Image = image;
				levelImage2->Image = image;
				levelImage3->Image = image;
				levelImage4->Image = image;
				levelImage5->Image = image;
			}
			else if (imagePath->Contains("4")) {
				Image^ image = GetImageFromResource("levelComplete.Image");
				levelImage1->Image = image;
				levelImage2->Image = image;
				levelImage3->Image = image;
				levelImage4->Image = image;
			}
			else if (imagePath->Contains("3")) {
				Image^ image = GetImageFromResource("levelComplete.Image");
				levelImage1->Image = image;
				levelImage2->Image = image;
				levelImage3->Image = image;
			}
			else if (imagePath->Contains("2")) {
				Image^ image = GetImageFromResource("levelComplete.Image");
				levelImage1->Image = image;
				levelImage2->Image = image;
			}
			else if (imagePath->Contains("1")) {
				Image^ image = GetImageFromResource("levelComplete.Image");
				levelImage1->Image = image;
			}
		}
	}
private: System::Void levelImage1_Click(System::Object^ sender, System::EventArgs^ e) {
	Level1^ level1 = gcnew Level1;
	level1->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	level1->Show();
	}
private: System::Void levelImage2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ imageCheck = LoadImageLocation();
	if (imageCheck != nullptr) {
		if ((imageCheck->Contains("1")) || (imageCheck->Contains("2")) || (imageCheck->Contains("3")) || (imageCheck->Contains("4")) || (imageCheck->Contains("5")) || (imageCheck->Contains("6")) || (imageCheck->Contains("7"))) {
			Level2^ level2 = gcnew Level2;
			level2->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			level2->Show();
		}
		else {
			MessageBox::Show("Сначала пройдите первый день!");
		}
	}
	else {
		MessageBox::Show("Сначала пройдите первый день!");
	}	
	}
private: System::Void levelImage3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ imageCheck = LoadImageLocation();
	if (imageCheck != nullptr) {
		if ((imageCheck->Contains("2")) || (imageCheck->Contains("3")) || (imageCheck->Contains("4")) || (imageCheck->Contains("5")) || (imageCheck->Contains("6")) || (imageCheck->Contains("7"))) {
			Level3^ level3 = gcnew Level3;
			level3->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			level3->Show();
		}
		else {
			MessageBox::Show("Сначала пройдите второй день!");
		}
	}
	else {
		MessageBox::Show("Сначала пройдите второй день!");
	}
	}
private: System::Void levelImage4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ imageCheck = LoadImageLocation();
	if (imageCheck != nullptr) {
		if ((imageCheck->Contains("3")) || (imageCheck->Contains("4")) || (imageCheck->Contains("5")) || (imageCheck->Contains("6")) || (imageCheck->Contains("7"))) {
			Level4^ level4 = gcnew Level4;
			level4->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			level4->Show();
		}
		else {
			MessageBox::Show("Сначала пройдите третий день!");
		}
	}

	else {
		MessageBox::Show("Сначала пройдите третий день!");
	}
	}
private: System::Void levelImage5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ imageCheck = LoadImageLocation();
	if (imageCheck != nullptr) {
		if ((imageCheck->Contains("4")) || (imageCheck->Contains("5")) || (imageCheck->Contains("6")) || (imageCheck->Contains("7"))) {
			Level5^ level5 = gcnew Level5;
			level5->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			level5->Show();
		}
		else {
			MessageBox::Show("Сначала пройдите четвертый день!");
		}
	}
	else {
		MessageBox::Show("Сначала пройдите четвертый день!");
	}
	}
private: System::Void levelImage6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ imageCheck = LoadImageLocation();
	if (imageCheck != nullptr) {
		if ((imageCheck->Contains("5")) || (imageCheck->Contains("6")) || (imageCheck->Contains("7"))) {
			Level6^ level6 = gcnew Level6;
			level6->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			level6->Show();
		}
		else {
			MessageBox::Show("Сначала пройдите пятый день!");
		}
	}
	else {
		MessageBox::Show("Сначала пройдите пятый день!");
	}
	}
private: System::Void levelImage7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ imageCheck = LoadImageLocation();
	if (imageCheck != nullptr) {
		if ((imageCheck->Contains("6")) || (imageCheck->Contains("7"))) {
			Level7^ level7 = gcnew Level7;
			level7->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			level7->Show();
		}
		else {
			MessageBox::Show("Сначала пройдите шестой день!");
		}
	}
	else {
		MessageBox::Show("Сначала пройдите шестой день!");
	}
	}
};
}
