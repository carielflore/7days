#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm4.h"
#include <vcclr.h> // Для использования маршалинга строк

namespace My7days {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Reflection;
	using namespace System::Resources;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			Load += gcnew EventHandler(this, &MyForm::Form_Load); // Привязка обработчика события загрузки формы
			FormClosing += gcnew FormClosingEventHandler(this, &MyForm::Form_FormClosing); // Привязка обработчика события закрытия формы
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
			ResourceManager^ rm = gcnew ResourceManager("My7days.MyForm", assembly);

			// Получаем изображение из ресурсов по его имени
			Bitmap^ image = dynamic_cast<Bitmap^>(rm->GetObject(resourceName));

			return image;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::PictureBox^ logo;

	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::Button^ progress;



	private: System::Windows::Forms::Button^ achiev;
	private: System::Windows::Forms::Button^ info;


	private: System::Windows::Forms::PictureBox^ yourWeek;
	private: System::Windows::Forms::Panel^ panelLabel;








	private: System::Windows::Forms::Panel^ panelParent;
	private: System::Windows::Forms::Form^ childForm;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->info = (gcnew System::Windows::Forms::Button());
			this->achiev = (gcnew System::Windows::Forms::Button());
			this->progress = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->yourWeek = (gcnew System::Windows::Forms::PictureBox());
			this->panelLabel = (gcnew System::Windows::Forms::Panel());
			this->panelParent = (gcnew System::Windows::Forms::Panel());
			this->panelMenu->SuspendLayout();
			this->panelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yourWeek))->BeginInit();
			this->panelLabel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->panelMenu->Controls->Add(this->info);
			this->panelMenu->Controls->Add(this->achiev);
			this->panelMenu->Controls->Add(this->progress);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(275, 700);
			this->panelMenu->TabIndex = 0;
			// 
			// info
			// 
			this->info->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"info.BackgroundImage")));
			this->info->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->info->FlatAppearance->BorderSize = 0;
			this->info->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->info->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->info->Location = System::Drawing::Point(-3, 598);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(275, 88);
			this->info->TabIndex = 4;
			this->info->UseVisualStyleBackColor = true;
			this->info->Click += gcnew System::EventHandler(this, &MyForm::info_Click);
			// 
			// achiev
			// 
			this->achiev->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"achiev.BackgroundImage")));
			this->achiev->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->achiev->FlatAppearance->BorderSize = 0;
			this->achiev->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->achiev->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->achiev->Location = System::Drawing::Point(0, 197);
			this->achiev->Name = L"achiev";
			this->achiev->Size = System::Drawing::Size(275, 88);
			this->achiev->TabIndex = 2;
			this->achiev->UseVisualStyleBackColor = true;
			this->achiev->Click += gcnew System::EventHandler(this, &MyForm::achiev_Click);
			// 
			// progress
			// 
			this->progress->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"progress.BackgroundImage")));
			this->progress->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->progress->FlatAppearance->BorderSize = 0;
			this->progress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->progress->Font = (gcnew System::Drawing::Font(L"Forte", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->progress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->progress->Location = System::Drawing::Point(0, 113);
			this->progress->Name = L"progress";
			this->progress->Size = System::Drawing::Size(275, 88);
			this->progress->TabIndex = 1;
			this->progress->UseVisualStyleBackColor = true;
			this->progress->Click += gcnew System::EventHandler(this, &MyForm::progress_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->panelLogo->Controls->Add(this->logo);
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(275, 118);
			this->panelLogo->TabIndex = 1;
			// 
			// logo
			// 
			this->logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.BackgroundImage")));
			this->logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->logo->Location = System::Drawing::Point(23, 21);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(220, 70);
			this->logo->TabIndex = 0;
			this->logo->TabStop = false;
			// 
			// yourWeek
			// 
			this->yourWeek->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"yourWeek.Image")));
			this->yourWeek->Location = System::Drawing::Point(312, 21);
			this->yourWeek->Name = L"yourWeek";
			this->yourWeek->Size = System::Drawing::Size(480, 70);
			this->yourWeek->TabIndex = 1;
			this->yourWeek->TabStop = false;
			// 
			// panelLabel
			// 
			this->panelLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->panelLabel->Controls->Add(this->yourWeek);
			this->panelLabel->Location = System::Drawing::Point(275, 0);
			this->panelLabel->Name = L"panelLabel";
			this->panelLabel->Size = System::Drawing::Size(939, 113);
			this->panelLabel->TabIndex = 2;
			// 
			// panelParent
			// 
			this->panelParent->BackColor = System::Drawing::SystemColors::Control;
			this->panelParent->Location = System::Drawing::Point(275, 113);
			this->panelParent->Name = L"panelParent";
			this->panelParent->Size = System::Drawing::Size(936, 573);
			this->panelParent->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1209, 685);
			this->Controls->Add(this->panelParent);
			this->Controls->Add(this->panelLabel);
			this->Controls->Add(this->panelMenu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"7Дней";
			this->panelMenu->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yourWeek))->EndInit();
			this->panelLabel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
public: 
	void ClearImageLocationFile()
	{
		// Открытие файла на запись (прогресс)
		StreamWriter^ writer = gcnew StreamWriter("image_location_config.txt");

		// Очистка содержимого файла
		writer->Write("");

		// Закрытие файла
		writer->Close();
	  }
private:
	System::Void Form_Load(System::Object^ sender, System::EventArgs^ e) {
		Image^ image = GetImageFromResource("info.BackgroundImage");
		yourWeek->Image = image;
		if (childForm != nullptr && !childForm->IsDisposed) {
			childForm->Close();
		}
		MyForm4^ childForm4 = gcnew MyForm4;
		childForm = childForm4;
		childForm4->TopLevel = false; // Указываем, что форма не является верхним уровнем
		childForm4->Parent = panelParent;// Устанавливаем контейнер Panel в качестве родительского для дочерней формы
		childForm4->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		childForm4->Dock = DockStyle::Fill; // Заполняем всю площадь контейнера
		childForm4->Show(); // Показываем дочернюю форму
	}
	System::Void Form_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	ClearImageLocationFile(); // Очистка файла с расположением изображения при закрытии формы
	}
private: System::Void progress_Click(System::Object^ sender, System::EventArgs^ e) {
	Image^ image = GetImageFromResource("yourWeek.Image");
	yourWeek->Image = image;
	if (childForm != nullptr && !childForm->IsDisposed) {
		childForm->Close();
	}
	MyForm1^ childProgress = gcnew MyForm1;
	childForm = childProgress;
	childProgress->TopLevel = false; // Указываем, что форма не является верхним уровнем
	childProgress->Parent = panelParent;// Устанавливаем контейнер Panel в качестве родительского для дочерней формы
	childProgress->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	childProgress->Dock = DockStyle::Fill; // Заполняем всю площадь контейнера
	childProgress->Show(); // Показываем дочернюю форму
}
private: System::Void achiev_Click(System::Object^ sender, System::EventArgs^ e) {
	Image^ image = GetImageFromResource("achiev.BackgroundImage");
	yourWeek->Image = image;
	if (childForm != nullptr && !childForm->IsDisposed) {
		childForm->Close();
	}
	MyForm2^ childAchiev = gcnew MyForm2;
	childForm = childAchiev;
	childAchiev->TopLevel = false; // Указываем, что форма не является верхним уровнем
	childAchiev->Parent = panelParent;// Устанавливаем контейнер Panel в качестве родительского для дочерней формы
	childAchiev->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	childAchiev->Dock = DockStyle::Fill; // Заполняем всю площадь контейнера
	childAchiev->Show(); // Показываем дочернюю форму
}
private: System::Void info_Click(System::Object^ sender, System::EventArgs^ e) {
	Image^ image = GetImageFromResource("info.BackgroundImage");
	yourWeek->Image = image;
	if (childForm != nullptr && !childForm->IsDisposed) {
		childForm->Close();
	}
	MyForm4^ childInfo = gcnew MyForm4;
	childForm = childInfo;
	childInfo->TopLevel = false; // Указываем, что форма не является верхним уровнем
	childInfo->Parent = panelParent;// Устанавливаем контейнер Panel в качестве родительского для дочерней формы
	childInfo->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	childInfo->Dock = DockStyle::Fill; // Заполняем всю площадь контейнера
	childInfo->Show(); // Показываем дочернюю форму
}
};
}
