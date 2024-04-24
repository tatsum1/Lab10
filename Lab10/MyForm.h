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
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(640, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->��������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->����������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����������ToolStripMenuItem->Text = L"�������� ��";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�������ToolStripMenuItem->Text = L"³������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
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
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
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
	private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// ��������� ����� "numbers.txt"
	std::ofstream outfile("numbers.txt");

	// ��������, �� ���� ������ ��������
	if (outfile.is_open()) {
		outfile.close();
		MessageBox::Show("���� numbers.txt ������ ��������!");
	}
	else {
		MessageBox::Show("������� ��� �������� ����� numbers.txt!");
	}
}

private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// ³������� ����� "numbers.txt" ��� ������
	std::ofstream outfile("numbers.txt");

	// ��������, �� ���� ������ �������
	if (outfile.is_open()) {
		// ��������� ������ � RichTextBox
		String^ text = richTextBox1->Text;

		// �������� ������ �� ����� �����
		array<String^>^ lines = text->Split('\n');

		// �������� ��� ���� �������� ������� �����
		int sumOfPositiveSquares = 0;

		// ��������� �� ������� �����
		for (int i = 0; i < lines->Length; i++) {
			// ���������� ����� � ���� �����
			int number = Convert::ToInt32(lines[i]);

			// ���������� �������� �����
			int square = number * number;

			// ���� ����� ������, ������ ���� ������� �� ����
			if (number > 0) {
				sumOfPositiveSquares += square;
			}
		}

		// ����� ���� �������� ������� ����� � ����
		outfile << sumOfPositiveSquares;

		// �������� �����
		outfile.close();

		// ����������� ��� ������ ����������
		MessageBox::Show("���� �������� ������� ����� ������ ��������� � ���� numbers.txt!");
	}
	else {
		// ����������� ��� ������� ��� ������� �����
		MessageBox::Show("������� ��� ������� ����� numbers.txt ��� ������!");
	}
}

private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// ĳ������� ���� ��� ������ ����� ����������
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->Title = "�������� ��";

	// ���� ���������� �������� ������ "��������"
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// �������� ���� �� �����
		String^ filePath = saveFileDialog1->FileName;

		// ³������� ����� ��� ������
		std::ofstream outfile(msclr::interop::marshal_as<std::string>(filePath));

		// ��������, �� ���� ������ �������
		if (outfile.is_open()) {
			// ��������� ������ � RichTextBox
			String^ text = richTextBox1->Text;

			// �������� ������ �� ����� �����
			array<String^>^ lines = text->Split('\n');

			// �������� ��� ���� �������� ������� �����
			int sumOfPositiveSquares = 0;

			// ��������� �� ������� �����
			for (int i = 0; i < lines->Length; i++) {
				// ���������� ����� � ���� �����
				int number = Convert::ToInt32(lines[i]);

				// ���������� �������� �����
				int square = number * number;

				// ���� ����� ������, ������ ���� ������� �� ����
				if (number > 0) {
					sumOfPositiveSquares += square;
				}
			}

			// ����� ���� �������� ������� ����� � ����
			outfile << sumOfPositiveSquares;

			// �������� �����
			outfile.close();

			// ����������� ��� ������ ����������
			MessageBox::Show("���� �������� ������� ����� ������ ���������!");
		}
		else {
			// ����������� ��� ������� ��� ������� �����
			MessageBox::Show("������� ��� ������� ����� ��� ������!");
		}
	}
}

private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// ³������� ���������� ���� ��� ������ �����
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// ������� ����� � �������� �����
		array<String^>^ lines = System::IO::File::ReadAllLines(openFileDialog1->FileName);


		// ���������� ����� ��� ���������� ���� �������� ������� �����
		int sumOfSquares = 0;

		// ������ �� ��� ������ �� �����
		for (int i = 0; i < lines->Length; i++) {
			String^ line = lines[i];
			int number;
			if (Int32::TryParse(line, number)) {
				// �������� 䳿 � ������, ���������, ���������� ���� �������� ������� �����
				if (number > 0) {
					sumOfSquares += number * number;
				}
			}
			else {
				// ���� ����� �� ���� ���� ������������ � �����, �������� ���������� ������� ��� �������� �����
			}
		}

		// ��������� ����������, ���������, � MessageBox
		MessageBox::Show("���� �������� ������� �����: " + sumOfSquares);
	}
}

private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
