#pragma once


#include	"csv.h"
#include	"MarshalString.h"


csv		g_csv;


namespace csv_view {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 の概要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownFirstRecord;

	private: System::Windows::Forms::NumericUpDown^  numericUpDownLastRecord;
	private: System::Windows::Forms::Button^  buttonReload;



	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->numericUpDownFirstRecord = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownLastRecord = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonReload = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownFirstRecord))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLastRecord))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 21;
			this->dataGridView1->Size = System::Drawing::Size(1088, 774);
			this->dataGridView1->TabIndex = 0;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"CSV Files|*.csv|Text Files|*.txt|All Files|*.*";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1112, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->openToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->openToolStripMenuItem->Text = L"Open...";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// numericUpDownFirstRecord
			// 
			this->numericUpDownFirstRecord->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->numericUpDownFirstRecord->Location = System::Drawing::Point(733, 809);
			this->numericUpDownFirstRecord->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numericUpDownFirstRecord->Name = L"numericUpDownFirstRecord";
			this->numericUpDownFirstRecord->Size = System::Drawing::Size(120, 23);
			this->numericUpDownFirstRecord->TabIndex = 2;
			this->numericUpDownFirstRecord->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// numericUpDownLastRecord
			// 
			this->numericUpDownLastRecord->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->numericUpDownLastRecord->Location = System::Drawing::Point(859, 809);
			this->numericUpDownLastRecord->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numericUpDownLastRecord->Name = L"numericUpDownLastRecord";
			this->numericUpDownLastRecord->Size = System::Drawing::Size(120, 23);
			this->numericUpDownLastRecord->TabIndex = 3;
			this->numericUpDownLastRecord->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDownLastRecord->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			// 
			// buttonReload
			// 
			this->buttonReload->Location = System::Drawing::Point(985, 807);
			this->buttonReload->Name = L"buttonReload";
			this->buttonReload->Size = System::Drawing::Size(115, 25);
			this->buttonReload->TabIndex = 4;
			this->buttonReload->Text = L"Reload";
			this->buttonReload->UseVisualStyleBackColor = true;
			this->buttonReload->Click += gcnew System::EventHandler(this, &Form1::buttonReload_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1112, 844);
			this->Controls->Add(this->buttonReload);
			this->Controls->Add(this->numericUpDownLastRecord);
			this->Controls->Add(this->numericUpDownFirstRecord);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1128, 883);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownFirstRecord))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLastRecord))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void	update_dataGrid(void) {
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();

			dataGridView1->Columns->Add("", "Row");
			for (int col = 0; col < g_csv.cols(); col++) {
				dataGridView1->Columns->Add("", s2S(g_csv.get_data(0, col)));
				dataGridView1->Columns[col]->AutoSizeMode = DataGridViewAutoSizeColumnMode::DisplayedCells;
			}

			int		idx = 0;
			for (int row = (int)numericUpDownFirstRecord->Value; row < (int)numericUpDownLastRecord->Value; row++, idx++) {
				dataGridView1->Rows->Add();
				dataGridView1->Rows[idx]->Cells[0]->Value = row;

				for (unsigned int col = 0; col < g_csv.cols(); col++) {
					dataGridView1->Rows[idx]->Cells[col + 1]->Value = s2S(g_csv.get_data(row + 1, col));
				}
			}
		}

		System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if (System::Windows::Forms::DialogResult::OK == openFileDialog1->ShowDialog()) {
				g_csv.open(S2s(openFileDialog1->FileName));

				numericUpDownFirstRecord->Maximum = g_csv.rows() - 2;
				numericUpDownLastRecord ->Maximum = g_csv.rows() - 2;

				update_dataGrid();
			}
		}
		System::Void buttonReload_Click(System::Object^  sender, System::EventArgs^  e) {
			update_dataGrid();
		}
	};
}

