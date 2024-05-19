#pragma once

namespace My7days {

	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			Load += gcnew EventHandler(this, &MyForm2::Form2_Load); // Привязка обработчика события загрузки формы
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ achiev1;
	private: System::Windows::Forms::PictureBox^ achiev2;
	private: System::Windows::Forms::PictureBox^ achiev3;
	private: System::Windows::Forms::PictureBox^ achiev4;
	private: System::Windows::Forms::PictureBox^ achiev5;
	protected:





	private: System::Windows::Forms::PictureBox^ achiev6;
	private: System::Windows::Forms::PictureBox^ achiev7;

	protected:







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->achiev1 = (gcnew System::Windows::Forms::PictureBox());
			this->achiev2 = (gcnew System::Windows::Forms::PictureBox());
			this->achiev3 = (gcnew System::Windows::Forms::PictureBox());
			this->achiev4 = (gcnew System::Windows::Forms::PictureBox());
			this->achiev5 = (gcnew System::Windows::Forms::PictureBox());
			this->achiev6 = (gcnew System::Windows::Forms::PictureBox());
			this->achiev7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev7))->BeginInit();
			this->SuspendLayout();
			// 
			// achiev1
			// 
			this->achiev1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"achiev1.BackgroundImage")));
			this->achiev1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->achiev1->Location = System::Drawing::Point(12, 36);
			this->achiev1->Name = L"achiev1";
			this->achiev1->Size = System::Drawing::Size(438, 95);
			this->achiev1->TabIndex = 0;
			this->achiev1->TabStop = false;
			this->achiev1->Visible = false;
			// 
			// achiev2
			// 
			this->achiev2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"achiev2.BackgroundImage")));
			this->achiev2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->achiev2->Location = System::Drawing::Point(12, 154);
			this->achiev2->Name = L"achiev2";
			this->achiev2->Size = System::Drawing::Size(438, 95);
			this->achiev2->TabIndex = 1;
			this->achiev2->TabStop = false;
			this->achiev2->Visible = false;
			// 
			// achiev3
			// 
			this->achiev3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"achiev3.BackgroundImage")));
			this->achiev3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->achiev3->Location = System::Drawing::Point(12, 271);
			this->achiev3->Name = L"achiev3";
			this->achiev3->Size = System::Drawing::Size(438, 95);
			this->achiev3->TabIndex = 2;
			this->achiev3->TabStop = false;
			this->achiev3->Visible = false;
			// 
			// achiev4
			// 
			this->achiev4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"achiev4.BackgroundImage")));
			this->achiev4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->achiev4->Location = System::Drawing::Point(12, 388);
			this->achiev4->Name = L"achiev4";
			this->achiev4->Size = System::Drawing::Size(438, 95);
			this->achiev4->TabIndex = 3;
			this->achiev4->TabStop = false;
			this->achiev4->Visible = false;
			// 
			// achiev5
			// 
			this->achiev5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"achiev5.BackgroundImage")));
			this->achiev5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->achiev5->Location = System::Drawing::Point(467, 36);
			this->achiev5->Name = L"achiev5";
			this->achiev5->Size = System::Drawing::Size(438, 95);
			this->achiev5->TabIndex = 4;
			this->achiev5->TabStop = false;
			this->achiev5->Visible = false;
			// 
			// achiev6
			// 
			this->achiev6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"achiev6.BackgroundImage")));
			this->achiev6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->achiev6->Location = System::Drawing::Point(467, 154);
			this->achiev6->Name = L"achiev6";
			this->achiev6->Size = System::Drawing::Size(438, 95);
			this->achiev6->TabIndex = 5;
			this->achiev6->TabStop = false;
			this->achiev6->Visible = false;
			// 
			// achiev7
			// 
			this->achiev7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"achiev7.BackgroundImage")));
			this->achiev7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->achiev7->Location = System::Drawing::Point(467, 271);
			this->achiev7->Name = L"achiev7";
			this->achiev7->Size = System::Drawing::Size(438, 95);
			this->achiev7->TabIndex = 6;
			this->achiev7->TabStop = false;
			this->achiev7->Visible = false;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 534);
			this->Controls->Add(this->achiev7);
			this->Controls->Add(this->achiev6);
			this->Controls->Add(this->achiev5);
			this->Controls->Add(this->achiev4);
			this->Controls->Add(this->achiev3);
			this->Controls->Add(this->achiev2);
			this->Controls->Add(this->achiev1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->achiev7))->EndInit();
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
	System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ imagePath = LoadImageLocation();
		if (imagePath != nullptr) {
			if (imagePath->Contains("7")) {
				achiev1->Visible = true;
				achiev2->Visible = true;
				achiev3->Visible = true;
				achiev4->Visible = true;
				achiev5->Visible = true;
				achiev6->Visible = true;
				achiev7->Visible = true;
			}
			else if (imagePath->Contains("6")) {
				achiev1->Visible = true;
				achiev2->Visible = true;
				achiev3->Visible = true;
				achiev4->Visible = true;
				achiev5->Visible = true;
				achiev6->Visible = true;
			}
			else if (imagePath->Contains("5")) {
				achiev1->Visible = true;
				achiev2->Visible = true;
				achiev3->Visible = true;
				achiev4->Visible = true;
				achiev5->Visible = true;
			}
			else if (imagePath->Contains("4")) {
				achiev1->Visible = true;
				achiev2->Visible = true;
				achiev3->Visible = true;
				achiev4->Visible = true;
			}
			else if (imagePath->Contains("3")) {
				achiev1->Visible = true;
				achiev2->Visible = true;
				achiev3->Visible = true;
			}
			else if (imagePath->Contains("2")) {
				achiev1->Visible = true;
				achiev2->Visible = true;
			}
			else if (imagePath->Contains("1")) {
				achiev1->Visible = true;
			}
		}
	}
	};
}
