#pragma once

namespace CalculatorProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalculatorForm
	/// </summary>
	public ref class CalculatorForm : public System::Windows::Forms::Form
	{
	public:
		CalculatorForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CalculatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBackspace;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ textDisplay;
	private: System::Windows::Forms::Button^ btnClear;

	private: System::Windows::Forms::Button^ btnCE;

	private: System::Windows::Forms::Button^ btnSigns;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;

	protected:







	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;






	private: System::Windows::Forms::Button^ btnSubtract;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;






	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnDecimal;
	private: System::Windows::Forms::Button^ btnEqual;






	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Label^ labelDisplay;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->textDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnSigns = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->labelDisplay = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnBackspace
			// 
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBackspace->Location = System::Drawing::Point(12, 93);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(75, 60);
			this->btnBackspace->TabIndex = 0;
			this->btnBackspace->Text = L"";
			this->btnBackspace->UseVisualStyleBackColor = true;
			this->btnBackspace->UseWaitCursor = true;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &CalculatorForm::btnBackspace_Click);
			// 
			// textDisplay
			// 
			this->textDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textDisplay->Location = System::Drawing::Point(12, 12);
			this->textDisplay->Multiline = true;
			this->textDisplay->Name = L"textDisplay";
			this->textDisplay->Size = System::Drawing::Size(318, 75);
			this->textDisplay->TabIndex = 1;
			this->textDisplay->Text = L"0";
			this->textDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(93, 93);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 60);
			this->btnClear->TabIndex = 0;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &CalculatorForm::btnClear_Click);
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(174, 93);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(75, 60);
			this->btnCE->TabIndex = 0;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &CalculatorForm::btnCE_Click);
			// 
			// btnSigns
			// 
			this->btnSigns->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSigns->Location = System::Drawing::Point(255, 93);
			this->btnSigns->Name = L"btnSigns";
			this->btnSigns->Size = System::Drawing::Size(75, 60);
			this->btnSigns->TabIndex = 0;
			this->btnSigns->Text = L"±";
			this->btnSigns->UseVisualStyleBackColor = true;
			this->btnSigns->Click += gcnew System::EventHandler(this, &CalculatorForm::btnSigns_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 159);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(75, 60);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &CalculatorForm::NumberClick);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(93, 159);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(75, 60);
			this->btn8->TabIndex = 0;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &CalculatorForm::NumberClick);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(174, 159);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(75, 60);
			this->btn9->TabIndex = 0;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &CalculatorForm::NumberClick);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(255, 159);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 60);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CalculatorForm::OperatorClick);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 225);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(75, 60);
			this->btn4->TabIndex = 0;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &CalculatorForm::NumberClick);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(93, 225);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 60);
			this->btn5->TabIndex = 0;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &CalculatorForm::NumberClick);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(174, 225);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(75, 60);
			this->btn6->TabIndex = 0;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &CalculatorForm::NumberClick);
			// 
			// btnSubtract
			// 
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtract->Location = System::Drawing::Point(255, 225);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(75, 60);
			this->btnSubtract->TabIndex = 0;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->UseVisualStyleBackColor = true;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &CalculatorForm::OperatorClick);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 291);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 60);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &CalculatorForm::NumberClick);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(93, 291);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(75, 60);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &CalculatorForm::NumberClick);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(174, 291);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(75, 60);
			this->btn3->TabIndex = 0;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &CalculatorForm::NumberClick);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->Location = System::Drawing::Point(255, 291);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(75, 60);
			this->btnMultiply->TabIndex = 0;
			this->btnMultiply->Text = L"*";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &CalculatorForm::OperatorClick);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(12, 357);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(75, 60);
			this->btn0->TabIndex = 0;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &CalculatorForm::NumberClick);
			// 
			// btnDecimal
			// 
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecimal->Location = System::Drawing::Point(93, 357);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(75, 60);
			this->btnDecimal->TabIndex = 0;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = true;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &CalculatorForm::btnDecimal_Click);
			// 
			// btnEqual
			// 
			this->btnEqual->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual->Location = System::Drawing::Point(174, 357);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(75, 60);
			this->btnEqual->TabIndex = 0;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = false;
			this->btnEqual->Click += gcnew System::EventHandler(this, &CalculatorForm::btnEqual_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(255, 357);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(75, 60);
			this->btnDivide->TabIndex = 0;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &CalculatorForm::OperatorClick);
			// 
			// labelDisplay
			// 
			this->labelDisplay->AutoSize = true;
			this->labelDisplay->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelDisplay->Location = System::Drawing::Point(23, 60);
			this->labelDisplay->Name = L"labelDisplay";
			this->labelDisplay->Size = System::Drawing::Size(14, 16);
			this->labelDisplay->TabIndex = 2;
			this->labelDisplay->Text = L"0";
			// 
			// CalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(337, 429);
			this->Controls->Add(this->labelDisplay);
			this->Controls->Add(this->textDisplay);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnSubtract);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnSigns);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnBackspace);
			this->MaximizeBox = false;
			this->Name = L"CalculatorForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &CalculatorForm::CalculatorForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstNumber = 0, secondNumber = 0, result = 0;  //include nullable ints (int? here)?
		bool operationPressed = false, equalPressed = false;
		String^ operators;

	private: System::Void CalculatorForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void NumberClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);

		if (textDisplay->Text == "0" || operationPressed == true) { // operation true makes the calculator not flood with # in 2nd parse
			textDisplay->Text = Numbers->Text;
			if (operationPressed == true) labelDisplay->Text += Numbers->Text; //[PROBLEM HERE] -> FIXED
			else labelDisplay->Text = Numbers->Text;
			operationPressed = false;
		}
		//else if (equalPressed == true) { //Problem here ...
		//	textDisplay->Text == "";
		//}
		else {
			textDisplay->Text += Numbers->Text;
			labelDisplay->Text += Numbers->Text;
		}
		//add another case that textDisplay "restarts" when operator is used
	}

	private: System::Void OperatorClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ Operators = safe_cast<Button^>(sender);

		if (result != 0) { //not ideal for it to be != 0

			firstNumber = result;
			result = 0; //for resetting result ... may not be needed.

			firstNumber = Double::Parse(textDisplay->Text);

			textDisplay->Text = "";
			operators = Operators->Text;

			if (operators == "+") labelDisplay->Text = firstNumber + Operators->Text;
			else if (operators == "-") labelDisplay->Text = firstNumber + Operators->Text;
			else if (operators == "*") labelDisplay->Text = firstNumber + Operators->Text;
			else if (operators == "/") labelDisplay->Text = firstNumber + Operators->Text;
			else labelDisplay->Text = "ERROR";
		}
		
		else if (firstNumber != 0) { // works ... but ... try nullable int?
			secondNumber = Double::Parse(textDisplay->Text);

			if (operators == "+") {
				firstNumber += secondNumber;
				textDisplay->Text = System::Convert::ToString(firstNumber);
				labelDisplay->Text = System::Convert::ToString(firstNumber) + "+";
			}
			else if (operators == "-") {
				firstNumber -= secondNumber;
				textDisplay->Text = System::Convert::ToString(firstNumber);
				labelDisplay->Text = System::Convert::ToString(firstNumber) + "-";
			}
			else if (operators == "*") {
				firstNumber *= secondNumber;
				textDisplay->Text = System::Convert::ToString(firstNumber);
				labelDisplay->Text = System::Convert::ToString(firstNumber) + "*";
			}
			else if (operators == "/") {
				firstNumber /= secondNumber;
				textDisplay->Text = System::Convert::ToString(firstNumber);
				labelDisplay->Text = System::Convert::ToString(firstNumber) + "/";
			}

			operationPressed = true;
			firstNumber = Double::Parse(textDisplay->Text);
			//textDisplay->Text = "";
			operators = Operators->Text;
		}

		else {
			firstNumber = Double::Parse(textDisplay->Text);
			textDisplay->Text = "";
			operators = Operators->Text;

			if (operators == "+") labelDisplay->Text += Operators->Text;
			else if (operators == "-") labelDisplay->Text += Operators->Text;
			else if (operators == "*") labelDisplay->Text += Operators->Text;
			else if (operators == "/") labelDisplay->Text += Operators->Text;
			else labelDisplay->Text = "ERROR";
		}
		//textDisplay->Text = textDisplay->Text + Operators->Text;
	}

	private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!textDisplay->Text->Contains(".")) {
			textDisplay->Text += ".";
			labelDisplay->Text += ".";
		}
	}

	private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
		secondNumber = Double::Parse(textDisplay->Text);

		if (operators == "+") {
			result = firstNumber + secondNumber;
			textDisplay->Text = System::Convert::ToString(result);
			labelDisplay->Text += "=" + System::Convert::ToString(result);
		}
		else if (operators == "-") {
			result = firstNumber - secondNumber;
			textDisplay->Text = System::Convert::ToString(result);
			labelDisplay->Text += "=" + System::Convert::ToString(result);
		}
		else if (operators == "*") {
			result = firstNumber * secondNumber;
			textDisplay->Text = System::Convert::ToString(result);
			labelDisplay->Text += "=" + System::Convert::ToString(result);
		}
		else if (operators == "/") {
			result = firstNumber / secondNumber;
			textDisplay->Text = System::Convert::ToString(result);
			labelDisplay->Text += "=" + System::Convert::ToString(result);
		}

		firstNumber = 0; //resetting for OperationClicked function
		//equalPressed = true;        //Erasing memory after calculation
	}

	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		textDisplay->Text = "0";
		labelDisplay->Text = "0";

		firstNumber = 0;
		secondNumber = 0;

		//Complete Erase Memory [PROBLEM] -> LACKING FEATURE -> FIXED with first&secondNumber
	}

	private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
		textDisplay->Text = "0";

		if (firstNumber != 0) {
			labelDisplay->Text = labelDisplay->Text->Remove(labelDisplay->Text->Length - 1, textDisplay->Text->Length - 1); //VARIOUS PROBLEMS
		}
		else {
			labelDisplay->Text = "0"; //WORKS!
		}

		//firstNumber = 0;           //Uncomment this if needed
		//secondNumber = 0;
	}

	private: System::Void btnSigns_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (textDisplay->Text->Contains("-")) {
			textDisplay->Text = textDisplay->Text->Remove(0, 1);
			labelDisplay->Text = labelDisplay->Text->Remove(0, 1);
		}
		else if (firstNumber != 0) { //PROLBEM HERE BELOW
			textDisplay->Text = "-" + textDisplay->Text;
			
			labelDisplay->Text = labelDisplay->Text->Remove(labelDisplay->Text->Length - 1, textDisplay->Text->Length - 1); //does not work for 2+ digits
			labelDisplay->Text += "(" + textDisplay->Text + ")";

		}
		else if (result != 0) { //does not whollistically work 
			textDisplay->Text = "-" + textDisplay->Text;
			labelDisplay->Text = textDisplay->Text;
			result = 0; //reset
		}
		else {
			textDisplay->Text = "-" + textDisplay->Text;
			labelDisplay->Text = "-" + labelDisplay->Text; //Potential Problem HERE, should be fixed via above [else if] ...
		}
	}

	private: System::Void btnBackspace_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (textDisplay->Text->Length > 0) {
			textDisplay->Text = textDisplay->Text->Remove(textDisplay->Text->Length - 1, 1);
			labelDisplay->Text = labelDisplay->Text->Remove(labelDisplay->Text->Length - 1, 1);
		}

		if (textDisplay->Text == "") {
			textDisplay->Text = "0";
			labelDisplay->Text = "0";
		}
	}

};
}

/* To-Fix Problems:
	1. If operation (signs) are pressed twice (by accident), error occurs.
	2. Once equals is pressed, if operation is pressed afterward, additional calculation is made. [FIXED]
	3. Sign Change (+ -> -) can't be shown for 2+ digit numbers on labelDisplay
	4. CE does not fully work for labelDisplay when secondNumber is displayed
	5. Once result has been calculated (i.e., equal button pressed), clicking on a number does NOT reset the calculation, but rather adds to the resultant
*/

/* Additional (Potential) Features
	1. Create a scientific calculator that includes functions like x-squared, square root, trig (e.g., sin, cos, tan), etc. 

*/
