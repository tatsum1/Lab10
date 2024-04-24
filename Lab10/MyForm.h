#pragma once

#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>

namespace Lab10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ створитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиЯкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ відкритиToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ закритиToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->створитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиЯкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->відкритиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->закритиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->закритиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(640, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->створитиToolStripMenuItem,
					this->зберегтиToolStripMenuItem, this->зберегтиЯкToolStripMenuItem, this->відкритиToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::файлToolStripMenuItem_Click);
			// 
			// створитиToolStripMenuItem
			// 
			this->створитиToolStripMenuItem->Name = L"створитиToolStripMenuItem";
			this->створитиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->створитиToolStripMenuItem->Text = L"Створити";
			this->створитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::створитиToolStripMenuItem_Click);
			// 
			// зберегтиToolStripMenuItem
			// 
			this->зберегтиToolStripMenuItem->Name = L"зберегтиToolStripMenuItem";
			this->зберегтиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->зберегтиToolStripMenuItem->Text = L"Зберегти";
			this->зберегтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зберегтиToolStripMenuItem_Click);
			// 
			// зберегтиЯкToolStripMenuItem
			// 
			this->зберегтиЯкToolStripMenuItem->Name = L"зберегтиЯкToolStripMenuItem";
			this->зберегтиЯкToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->зберегтиЯкToolStripMenuItem->Text = L"Зберегти як";
			this->зберегтиЯкToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зберегтиЯкToolStripMenuItem_Click);
			// 
			// відкритиToolStripMenuItem
			// 
			this->відкритиToolStripMenuItem->Name = L"відкритиToolStripMenuItem";
			this->відкритиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->відкритиToolStripMenuItem->Text = L"Відкрити";
			this->відкритиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::відкритиToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(0, 27);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(640, 470);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// закритиToolStripMenuItem
			// 
			this->закритиToolStripMenuItem->Name = L"закритиToolStripMenuItem";
			this->закритиToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->закритиToolStripMenuItem->Text = L"Закрити";
			this->закритиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::закритиToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 496);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void файлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void створитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Створення файлу "numbers.txt"
	std::ofstream outfile("numbers.txt");

	// Перевірка, чи файл успішно створено
	if (outfile.is_open()) {
		outfile.close();
		MessageBox::Show("Файл numbers.txt успішно створено!");
	}
	else {
		MessageBox::Show("Помилка при створенні файлу numbers.txt!");
	}
}

private: System::Void зберегтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Відкриття файлу "numbers.txt" для запису
	std::ofstream outfile("numbers.txt");

	// Перевірка, чи файл успішно відкрито
	if (outfile.is_open()) {
		// Отримання тексту з RichTextBox
		String^ text = richTextBox1->Text;

		// Розбиття тексту на окремі рядки
		array<String^>^ lines = text->Split('\n');

		// Перемінна для суми квадратів додатніх чисел
		int sumOfPositiveSquares = 0;

		// Ітеруємося по кожному рядку
		for (int i = 0; i < lines->Length; i++) {
			// Конвертуємо рядок у ціле число
			int number = Convert::ToInt32(lines[i]);

			// Розрахунок квадрату числа
			int square = number * number;

			// Якщо число додатнє, додаємо його квадрат до суми
			if (number > 0) {
				sumOfPositiveSquares += square;
			}
		}

		// Запис суми квадратів додатніх чисел у файл
		outfile << sumOfPositiveSquares;

		// Закриття файлу
		outfile.close();

		// Повідомлення про успішне збереження
		MessageBox::Show("Суму квадратів додатніх чисел успішно збережено у файл numbers.txt!");
	}
	else {
		// Повідомлення про помилку при відкритті файлу
		MessageBox::Show("Помилка при відкритті файлу numbers.txt для запису!");
	}
}

private: System::Void зберегтиЯкToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Діалогове вікно для вибору шляху збереження
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->Title = "Зберегти як";

	// Якщо користувач натиснув кнопку "Зберегти"
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// Вибраний шлях до файлу
		String^ filePath = saveFileDialog1->FileName;

		// Відкриття файлу для запису
		std::ofstream outfile(msclr::interop::marshal_as<std::string>(filePath));

		// Перевірка, чи файл успішно відкрито
		if (outfile.is_open()) {
			// Отримання тексту з RichTextBox
			String^ text = richTextBox1->Text;

			// Розбиття тексту на окремі рядки
			array<String^>^ lines = text->Split('\n');

			// Перемінна для суми квадратів додатніх чисел
			int sumOfPositiveSquares = 0;

			// Ітеруємося по кожному рядку
			for (int i = 0; i < lines->Length; i++) {
				// Конвертуємо рядок у ціле число
				int number = Convert::ToInt32(lines[i]);

				// Розрахунок квадрату числа
				int square = number * number;

				// Якщо число додатнє, додаємо його квадрат до суми
				if (number > 0) {
					sumOfPositiveSquares += square;
				}
			}

			// Запис суми квадратів додатніх чисел у файл
			outfile << sumOfPositiveSquares;

			// Закриття файлу
			outfile.close();

			// Повідомлення про успішне збереження
			MessageBox::Show("Суму квадратів додатніх чисел успішно збережено!");
		}
		else {
			// Повідомлення про помилку при відкритті файлу
			MessageBox::Show("Помилка при відкритті файлу для запису!");
		}
	}
}

private: System::Void відкритиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Відкриття діалогового вікна для вибору файлу
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// Читання рядків з обраного файлу
		array<String^>^ lines = System::IO::File::ReadAllLines(openFileDialog1->FileName);


		// Оголошення змінної для збереження суми квадратів додатніх чисел
		int sumOfSquares = 0;

		// Прохід по всіх рядках із файлу
		for (int i = 0; i < lines->Length; i++) {
			String^ line = lines[i];
			int number;
			if (Int32::TryParse(line, number)) {
				// Виконуємо дії з числом, наприклад, обчислюємо суму квадратів додатніх чисел
				if (number > 0) {
					sumOfSquares += number * number;
				}
			}
			else {
				// Якщо рядок не може бути перетворений у число, відповідно обробляємо помилку або ігноруємо рядок
			}
		}

		// Виведення результату, наприклад, у MessageBox
		MessageBox::Show("Сума квадратів додатніх чисел: " + sumOfSquares);
	}
}

private: System::Void закритиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
