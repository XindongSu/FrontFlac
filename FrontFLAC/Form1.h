#pragma once

#include <windows.h>
#undef GetTempPath

#include "Advanced_options.h"


namespace FrontFLAC {

	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::IO;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:
		Form1(void)
		{
			InitializeComponent();
			this->AdvDialog = (gcnew Advanced_options());
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ListBox^  lstFiles;
	protected: 

	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnRemove;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::OpenFileDialog^  dlgAddFile;
	private: System::Windows::Forms::GroupBox^  gbEncoding;

	private: System::Windows::Forms::TextBox^  textLevel;
	private: System::Windows::Forms::Label^  lblLevel;


	private: System::Windows::Forms::TrackBar^  tbLevel;
	private: System::Windows::Forms::CheckBox^  chkReplayGainAlbum;

	private: System::Windows::Forms::CheckBox^  chkReplayGain;
	private: System::Windows::Forms::CheckBox^  chkVerify;
	private: System::Windows::Forms::FolderBrowserDialog^  dlgOutputDirectory;
	private: System::Windows::Forms::GroupBox^  gbOutputDir;



	private: System::Windows::Forms::Button^  btnSelectDirectory;
	private: System::Windows::Forms::TextBox^  txtOutputDirectory;
	private: System::Windows::Forms::Button^  btnOutputDirSameAsInput;



	private: System::Windows::Forms::Button^  btnEncode;
	private: System::Windows::Forms::Button^  btnDecode;
	private: System::Windows::Forms::Button^  btnTest;
	private: System::Windows::Forms::Button^  btnFingerprint;
	private: System::Windows::Forms::Button^  btnExit;



	private: System::Windows::Forms::GroupBox^  gbGeneral;

	private: System::Windows::Forms::CheckBox^  chkOggFlac;

	private: System::Windows::Forms::CheckBox^  chkDeleteInput;
	private: System::Windows::Forms::CheckBox^  chkKeepForeign;
	private: System::Windows::Forms::GroupBox^  gbDecoding;
	private: System::Windows::Forms::CheckBox^  chkDecodeThroughErrors;



	private: System::Windows::Forms::Button^  btnHelp;

	private: System::Windows::Forms::Button^  btnAdvanced;

	private: Advanced_options^ AdvDialog;
	private: System::Windows::Forms::ToolTip^  ttHelp;
	private: System::Windows::Forms::Button^  btnAbout;




	private: System::ComponentModel::IContainer^  components;




	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lstFiles = (gcnew System::Windows::Forms::ListBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->dlgAddFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->gbEncoding = (gcnew System::Windows::Forms::GroupBox());
			this->chkReplayGainAlbum = (gcnew System::Windows::Forms::CheckBox());
			this->chkReplayGain = (gcnew System::Windows::Forms::CheckBox());
			this->chkVerify = (gcnew System::Windows::Forms::CheckBox());
			this->textLevel = (gcnew System::Windows::Forms::TextBox());
			this->lblLevel = (gcnew System::Windows::Forms::Label());
			this->tbLevel = (gcnew System::Windows::Forms::TrackBar());
			this->dlgOutputDirectory = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->gbOutputDir = (gcnew System::Windows::Forms::GroupBox());
			this->btnOutputDirSameAsInput = (gcnew System::Windows::Forms::Button());
			this->btnSelectDirectory = (gcnew System::Windows::Forms::Button());
			this->txtOutputDirectory = (gcnew System::Windows::Forms::TextBox());
			this->btnEncode = (gcnew System::Windows::Forms::Button());
			this->btnDecode = (gcnew System::Windows::Forms::Button());
			this->btnTest = (gcnew System::Windows::Forms::Button());
			this->btnFingerprint = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->gbGeneral = (gcnew System::Windows::Forms::GroupBox());
			this->chkKeepForeign = (gcnew System::Windows::Forms::CheckBox());
			this->chkOggFlac = (gcnew System::Windows::Forms::CheckBox());
			this->chkDeleteInput = (gcnew System::Windows::Forms::CheckBox());
			this->gbDecoding = (gcnew System::Windows::Forms::GroupBox());
			this->chkDecodeThroughErrors = (gcnew System::Windows::Forms::CheckBox());
			this->btnHelp = (gcnew System::Windows::Forms::Button());
			this->btnAdvanced = (gcnew System::Windows::Forms::Button());
			this->ttHelp = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->btnAbout = (gcnew System::Windows::Forms::Button());
			this->gbEncoding->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbLevel))->BeginInit();
			this->gbOutputDir->SuspendLayout();
			this->gbGeneral->SuspendLayout();
			this->gbDecoding->SuspendLayout();
			this->SuspendLayout();
			// 
			// lstFiles
			// 
			this->lstFiles->AllowDrop = true;
			this->lstFiles->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lstFiles->FormattingEnabled = true;
			this->lstFiles->HorizontalScrollbar = true;
			this->lstFiles->ItemHeight = 32;
			this->lstFiles->Location = System::Drawing::Point(26, 29);
			this->lstFiles->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->lstFiles->Name = L"lstFiles";
			this->lstFiles->Size = System::Drawing::Size(1041, 324);
			this->lstFiles->TabIndex = 0;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(1079, 29);
			this->btnAdd->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(162, 56);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"&Add files";
			this->ttHelp->SetToolTip(this->btnAdd, L"Add files to be encoded/decoded/checked etc.");
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Form1::btnAdd_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(1079, 104);
			this->btnRemove->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(162, 56);
			this->btnRemove->TabIndex = 2;
			this->btnRemove->Text = L"&Remove file";
			this->ttHelp->SetToolTip(this->btnRemove, L"Remove one file from the list");
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &Form1::btnRemove_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(1079, 176);
			this->btnClear->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(162, 56);
			this->btnClear->TabIndex = 3;
			this->btnClear->Text = L"&Clear filelist";
			this->ttHelp->SetToolTip(this->btnClear, L"Clear the list of files to be encoded/decoded/checked etc.");
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// dlgAddFile
			// 
			this->dlgAddFile->Filter = L"Supported Files|*.wav;*.flac;*.ogg;*.oga;*.aiff;*.w64;*.raw|FLAC files|*.flac|Unc"
				L"ompressed files|*.wav;*.w64;*.aiff;*.raw|OGG Files|*.ogg;*.oga";
			this->dlgAddFile->Multiselect = true;
			this->dlgAddFile->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::dlgAddFile_FileOk);
			// 
			// gbEncoding
			// 
			this->gbEncoding->Controls->Add(this->chkReplayGainAlbum);
			this->gbEncoding->Controls->Add(this->chkReplayGain);
			this->gbEncoding->Controls->Add(this->chkVerify);
			this->gbEncoding->Controls->Add(this->textLevel);
			this->gbEncoding->Controls->Add(this->lblLevel);
			this->gbEncoding->Controls->Add(this->tbLevel);
			this->gbEncoding->Location = System::Drawing::Point(26, 375);
			this->gbEncoding->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->gbEncoding->Name = L"gbEncoding";
			this->gbEncoding->Padding = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->gbEncoding->Size = System::Drawing::Size(549, 329);
			this->gbEncoding->TabIndex = 4;
			this->gbEncoding->TabStop = false;
			this->gbEncoding->Text = L"Encoding options";
			// 
			// chkReplayGainAlbum
			// 
			this->chkReplayGainAlbum->AutoSize = true;
			this->chkReplayGainAlbum->Enabled = false;
			this->chkReplayGainAlbum->Location = System::Drawing::Point(65, 265);
			this->chkReplayGainAlbum->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->chkReplayGainAlbum->Name = L"chkReplayGainAlbum";
			this->chkReplayGainAlbum->Size = System::Drawing::Size(362, 36);
			this->chkReplayGainAlbum->TabIndex = 5;
			this->chkReplayGainAlbum->Text = L"Treat input files as one album";
			this->ttHelp->SetToolTip(this->chkReplayGainAlbum, L"If set, all input files will be treated");
			this->chkReplayGainAlbum->UseVisualStyleBackColor = true;
			// 
			// chkReplayGain
			// 
			this->chkReplayGain->AutoSize = true;
			this->chkReplayGain->Location = System::Drawing::Point(28, 209);
			this->chkReplayGain->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->chkReplayGain->Name = L"chkReplayGain";
			this->chkReplayGain->Size = System::Drawing::Size(268, 36);
			this->chkReplayGain->TabIndex = 4;
			this->chkReplayGain->Text = L"Calculate ReplayGain";
			this->ttHelp->SetToolTip(this->chkReplayGain, L"If set, ReplayGain tags are added");
			this->chkReplayGain->UseVisualStyleBackColor = true;
			this->chkReplayGain->CheckStateChanged += gcnew System::EventHandler(this, &Form1::chkReplayGain_CheckStateChanged);
			// 
			// chkVerify
			// 
			this->chkVerify->AutoSize = true;
			this->chkVerify->Checked = true;
			this->chkVerify->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkVerify->Location = System::Drawing::Point(28, 151);
			this->chkVerify->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->chkVerify->Name = L"chkVerify";
			this->chkVerify->Size = System::Drawing::Size(269, 36);
			this->chkVerify->TabIndex = 3;
			this->chkVerify->Text = L"Verify after encoding";
			this->ttHelp->SetToolTip(this->chkVerify, L"If set, the resulting file is checked for integrity");
			this->chkVerify->UseVisualStyleBackColor = true;
			// 
			// textLevel
			// 
			this->textLevel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textLevel->Location = System::Drawing::Point(104, 67);
			this->textLevel->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->textLevel->Name = L"textLevel";
			this->textLevel->ReadOnly = true;
			this->textLevel->Size = System::Drawing::Size(41, 39);
			this->textLevel->TabIndex = 2;
			this->textLevel->Text = L"5";
			this->textLevel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ttHelp->SetToolTip(this->textLevel, L"The compression level, a higher level makes smaller files, but takes longer to en"
				L"code");
			// 
			// lblLevel
			// 
			this->lblLevel->AutoSize = true;
			this->lblLevel->Location = System::Drawing::Point(22, 73);
			this->lblLevel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->lblLevel->Name = L"lblLevel";
			this->lblLevel->Size = System::Drawing::Size(74, 32);
			this->lblLevel->TabIndex = 1;
			this->lblLevel->Text = L"Level:";
			// 
			// tbLevel
			// 
			this->tbLevel->Location = System::Drawing::Point(162, 56);
			this->tbLevel->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->tbLevel->Maximum = 8;
			this->tbLevel->Name = L"tbLevel";
			this->tbLevel->Size = System::Drawing::Size(348, 90);
			this->tbLevel->TabIndex = 0;
			this->ttHelp->SetToolTip(this->tbLevel, L"Set the compression level, a higher level makes smaller files, but takes longer t"
				L"o encode");
			this->tbLevel->Value = 5;
			this->tbLevel->ValueChanged += gcnew System::EventHandler(this, &Form1::tbLevel_ValueChanged);
			// 
			// dlgOutputDirectory
			// 
			this->dlgOutputDirectory->HelpRequest += gcnew System::EventHandler(this, &Form1::dlgOutputDirectory_HelpRequest);
			// 
			// gbOutputDir
			// 
			this->gbOutputDir->Controls->Add(this->btnOutputDirSameAsInput);
			this->gbOutputDir->Controls->Add(this->btnSelectDirectory);
			this->gbOutputDir->Controls->Add(this->txtOutputDirectory);
			this->gbOutputDir->Location = System::Drawing::Point(26, 719);
			this->gbOutputDir->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->gbOutputDir->Name = L"gbOutputDir";
			this->gbOutputDir->Padding = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->gbOutputDir->Size = System::Drawing::Size(1041, 131);
			this->gbOutputDir->TabIndex = 5;
			this->gbOutputDir->TabStop = false;
			this->gbOutputDir->Text = L"Output directory (only for encoding and decoding)";
			// 
			// btnOutputDirSameAsInput
			// 
			this->btnOutputDirSameAsInput->Location = System::Drawing::Point(814, 52);
			this->btnOutputDirSameAsInput->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnOutputDirSameAsInput->Name = L"btnOutputDirSameAsInput";
			this->btnOutputDirSameAsInput->Size = System::Drawing::Size(216, 55);
			this->btnOutputDirSameAsInput->TabIndex = 2;
			this->btnOutputDirSameAsInput->Text = L"Same as input";
			this->ttHelp->SetToolTip(this->btnOutputDirSameAsInput, L"Set output directory the same as input directory");
			this->btnOutputDirSameAsInput->UseVisualStyleBackColor = true;
			this->btnOutputDirSameAsInput->Click += gcnew System::EventHandler(this, &Form1::btnOutputDirSameAsInput_Click);
			// 
			// btnSelectDirectory
			// 
			this->btnSelectDirectory->Location = System::Drawing::Point(744, 52);
			this->btnSelectDirectory->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnSelectDirectory->Name = L"btnSelectDirectory";
			this->btnSelectDirectory->Size = System::Drawing::Size(66, 55);
			this->btnSelectDirectory->TabIndex = 1;
			this->btnSelectDirectory->Text = L"...";
			this->ttHelp->SetToolTip(this->btnSelectDirectory, L"Select an output directory");
			this->btnSelectDirectory->UseVisualStyleBackColor = true;
			this->btnSelectDirectory->Click += gcnew System::EventHandler(this, &Form1::btnSelectDirectory_Click);
			// 
			// txtOutputDirectory
			// 
			this->txtOutputDirectory->Enabled = false;
			this->txtOutputDirectory->Location = System::Drawing::Point(28, 55);
			this->txtOutputDirectory->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->txtOutputDirectory->Name = L"txtOutputDirectory";
			this->txtOutputDirectory->Size = System::Drawing::Size(703, 39);
			this->txtOutputDirectory->TabIndex = 0;
			this->txtOutputDirectory->Text = L"<< Same as input directory >>";
			// 
			// btnEncode
			// 
			this->btnEncode->Location = System::Drawing::Point(26, 864);
			this->btnEncode->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnEncode->Name = L"btnEncode";
			this->btnEncode->Size = System::Drawing::Size(162, 56);
			this->btnEncode->TabIndex = 6;
			this->btnEncode->Text = L"&Encode";
			this->ttHelp->SetToolTip(this->btnEncode, L"Encode WAV files or re-encode FLAC files to FLAC");
			this->btnEncode->UseVisualStyleBackColor = true;
			this->btnEncode->Click += gcnew System::EventHandler(this, &Form1::btnEncode_Click);
			// 
			// btnDecode
			// 
			this->btnDecode->Location = System::Drawing::Point(200, 864);
			this->btnDecode->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnDecode->Name = L"btnDecode";
			this->btnDecode->Size = System::Drawing::Size(162, 56);
			this->btnDecode->TabIndex = 7;
			this->btnDecode->Text = L"&Decode";
			this->ttHelp->SetToolTip(this->btnDecode, L"Decode FLAC-files to WAV-files");
			this->btnDecode->UseVisualStyleBackColor = true;
			this->btnDecode->Click += gcnew System::EventHandler(this, &Form1::btnDecode_Click);
			// 
			// btnTest
			// 
			this->btnTest->Location = System::Drawing::Point(436, 864);
			this->btnTest->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnTest->Name = L"btnTest";
			this->btnTest->Size = System::Drawing::Size(243, 56);
			this->btnTest->TabIndex = 8;
			this->btnTest->Text = L"&Test for errors";
			this->ttHelp->SetToolTip(this->btnTest, L"Test whether FLAC-file is not corrupt");
			this->btnTest->UseVisualStyleBackColor = true;
			this->btnTest->Click += gcnew System::EventHandler(this, &Form1::btnTest_Click);
			// 
			// btnFingerprint
			// 
			this->btnFingerprint->Location = System::Drawing::Point(691, 865);
			this->btnFingerprint->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnFingerprint->Name = L"btnFingerprint";
			this->btnFingerprint->Size = System::Drawing::Size(204, 56);
			this->btnFingerprint->TabIndex = 9;
			this->btnFingerprint->Text = L"&Fingerprint";
			this->ttHelp->SetToolTip(this->btnFingerprint, L"Show MD5 sums of FLAC-files");
			this->btnFingerprint->UseVisualStyleBackColor = true;
			this->btnFingerprint->Click += gcnew System::EventHandler(this, &Form1::btnFingerprint_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(1079, 864);
			this->btnExit->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(162, 56);
			this->btnExit->TabIndex = 10;
			this->btnExit->Text = L"E&xit";
			this->ttHelp->SetToolTip(this->btnExit, L"Exit FrontFLAC");
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
			// 
			// gbGeneral
			// 
			this->gbGeneral->Controls->Add(this->chkKeepForeign);
			this->gbGeneral->Controls->Add(this->chkOggFlac);
			this->gbGeneral->Controls->Add(this->chkDeleteInput);
			this->gbGeneral->Location = System::Drawing::Point(587, 369);
			this->gbGeneral->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->gbGeneral->Name = L"gbGeneral";
			this->gbGeneral->Padding = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->gbGeneral->Size = System::Drawing::Size(480, 216);
			this->gbGeneral->TabIndex = 11;
			this->gbGeneral->TabStop = false;
			this->gbGeneral->Text = L"General options";
			// 
			// chkKeepForeign
			// 
			this->chkKeepForeign->AutoSize = true;
			this->chkKeepForeign->Location = System::Drawing::Point(28, 163);
			this->chkKeepForeign->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->chkKeepForeign->Name = L"chkKeepForeign";
			this->chkKeepForeign->Size = System::Drawing::Size(291, 36);
			this->chkKeepForeign->TabIndex = 2;
			this->chkKeepForeign->Text = L"Keep foreign metadata";
			this->ttHelp->SetToolTip(this->chkKeepForeign, L"Keep foreign metadata (like BWF-chunks), see the flac website for more informatio"
				L"n");
			this->chkKeepForeign->UseVisualStyleBackColor = true;
			// 
			// chkOggFlac
			// 
			this->chkOggFlac->AutoSize = true;
			this->chkOggFlac->Location = System::Drawing::Point(28, 105);
			this->chkOggFlac->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->chkOggFlac->Name = L"chkOggFlac";
			this->chkOggFlac->Size = System::Drawing::Size(321, 36);
			this->chkOggFlac->TabIndex = 1;
			this->chkOggFlac->Text = L"Create/read as OGG-FLAC";
			this->ttHelp->SetToolTip(this->chkOggFlac, L"Create a FLAC-file in the OGG container or force the input file to be read as OGG"
				L"");
			this->chkOggFlac->UseVisualStyleBackColor = true;
			// 
			// chkDeleteInput
			// 
			this->chkDeleteInput->AutoSize = true;
			this->chkDeleteInput->Location = System::Drawing::Point(28, 49);
			this->chkDeleteInput->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->chkDeleteInput->Name = L"chkDeleteInput";
			this->chkDeleteInput->Size = System::Drawing::Size(229, 36);
			this->chkDeleteInput->TabIndex = 0;
			this->chkDeleteInput->Text = L"Delete input files";
			this->ttHelp->SetToolTip(this->chkDeleteInput, L"Delete the input files after a succesful encode or decode operation");
			this->chkDeleteInput->UseVisualStyleBackColor = true;
			// 
			// gbDecoding
			// 
			this->gbDecoding->Controls->Add(this->chkDecodeThroughErrors);
			this->gbDecoding->Location = System::Drawing::Point(587, 593);
			this->gbDecoding->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->gbDecoding->Name = L"gbDecoding";
			this->gbDecoding->Padding = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->gbDecoding->Size = System::Drawing::Size(480, 111);
			this->gbDecoding->TabIndex = 12;
			this->gbDecoding->TabStop = false;
			this->gbDecoding->Text = L"Decoding/testing options";
			// 
			// chkDecodeThroughErrors
			// 
			this->chkDecodeThroughErrors->AutoSize = true;
			this->chkDecodeThroughErrors->Location = System::Drawing::Point(28, 47);
			this->chkDecodeThroughErrors->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->chkDecodeThroughErrors->Name = L"chkDecodeThroughErrors";
			this->chkDecodeThroughErrors->Size = System::Drawing::Size(337, 36);
			this->chkDecodeThroughErrors->TabIndex = 0;
			this->chkDecodeThroughErrors->Text = L"Decode/test through errors";
			this->ttHelp->SetToolTip(this->chkDecodeThroughErrors, L"When errors are found during decoding, do not stop");
			this->chkDecodeThroughErrors->UseVisualStyleBackColor = true;
			// 
			// btnHelp
			// 
			this->btnHelp->Location = System::Drawing::Point(1081, 576);
			this->btnHelp->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnHelp->Name = L"btnHelp";
			this->btnHelp->Size = System::Drawing::Size(162, 56);
			this->btnHelp->TabIndex = 13;
			this->btnHelp->Text = L"&Help";
			this->ttHelp->SetToolTip(this->btnHelp, L"Place your mouse pointer over an option to get more information");
			this->btnHelp->UseVisualStyleBackColor = true;
			this->btnHelp->Click += gcnew System::EventHandler(this, &Form1::btnHelp_Click);
			// 
			// btnAdvanced
			// 
			this->btnAdvanced->Location = System::Drawing::Point(1081, 384);
			this->btnAdvanced->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnAdvanced->Name = L"btnAdvanced";
			this->btnAdvanced->Size = System::Drawing::Size(162, 56);
			this->btnAdvanced->TabIndex = 14;
			this->btnAdvanced->Text = L"Ad&vanced";
			this->ttHelp->SetToolTip(this->btnAdvanced, L"See advanced options");
			this->btnAdvanced->UseVisualStyleBackColor = true;
			this->btnAdvanced->Click += gcnew System::EventHandler(this, &Form1::btnAdvanced_Click);
			// 
			// ttHelp
			// 
			this->ttHelp->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &Form1::ttHelp_Popup);
			// 
			// btnAbout
			// 
			this->btnAbout->Location = System::Drawing::Point(1081, 648);
			this->btnAbout->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(162, 56);
			this->btnAbout->TabIndex = 15;
			this->btnAbout->Text = L"A&bout";
			this->ttHelp->SetToolTip(this->btnAbout, L"Get version number of FrontFLAC");
			this->btnAbout->UseVisualStyleBackColor = true;
			this->btnAbout->Click += gcnew System::EventHandler(this, &Form1::btnAbout_Click);
			// 
			// Form1
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1261, 940);
			this->Controls->Add(this->btnAbout);
			this->Controls->Add(this->btnAdvanced);
			this->Controls->Add(this->btnHelp);
			this->Controls->Add(this->gbDecoding);
			this->Controls->Add(this->gbGeneral);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnFingerprint);
			this->Controls->Add(this->btnTest);
			this->Controls->Add(this->btnDecode);
			this->Controls->Add(this->btnEncode);
			this->Controls->Add(this->gbOutputDir);
			this->Controls->Add(this->gbEncoding);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->lstFiles);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrontFLAC";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &Form1::lstFiles_DragDrop);
			this->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &Form1::lstFiles_DragEnter);
			this->gbEncoding->ResumeLayout(false);
			this->gbEncoding->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbLevel))->EndInit();
			this->gbOutputDir->ResumeLayout(false);
			this->gbOutputDir->PerformLayout();
			this->gbGeneral->ResumeLayout(false);
			this->gbGeneral->PerformLayout();
			this->gbDecoding->ResumeLayout(false);
			this->gbDecoding->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

// -------------------------------//
// --- Right column of buttons --- //
// -------------------------------//

private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
			 dlgAddFile->ShowDialog();
		 }

private: System::Void dlgAddFile_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 lstFiles->Items->AddRange(dlgAddFile->FileNames);
		 }

private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
			 lstFiles->Items->Clear();
		 }

private: System::Void btnRemove_Click(System::Object^  sender, System::EventArgs^  e) {
			 lstFiles->Items->Remove(lstFiles->SelectedItem);	 
		 }

private: System::Void btnAdvanced_Click(System::Object^  sender, System::EventArgs^  e) {
			 AdvDialog->ShowDialog();
		 }

private: System::Void btnHelp_Click(System::Object^  sender, System::EventArgs^  e) {
			 ttHelp->Show("Place your mouse pointer over a specific option to get more information",btnHelp);
		 }

private: System::Void btnAbout_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("FrontFLAC v2024, based on FLAC Frontend v2.1, using FLAC Commandline Tools vX.X.X","FrontFLAC version info",MessageBoxButtons::OK,MessageBoxIcon::Information);
		 }

// ----------------------------------//
// --- Setting fields interaction --- //
// ----------------------------------//

private: System::Void tbLevel_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 textLevel->Text = tbLevel->Value.ToString();
		 }

private: System::Void chkReplayGain_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(chkReplayGain->Checked == true){
				 chkReplayGainAlbum->Enabled = true;
			 }else{
				 chkReplayGainAlbum->Checked = false;
				 chkReplayGainAlbum->Enabled = false;
			 }

		 }

// ---------------------------------//
// --- Output directory buttons --- //
// ---------------------------------//

private: System::Void btnSelectDirectory_Click(System::Object^  sender, System::EventArgs^  e) {
			 dlgOutputDirectory->ShowDialog();
			 if(!String::IsNullOrEmpty(dlgOutputDirectory->SelectedPath))
				txtOutputDirectory->Text = dlgOutputDirectory->SelectedPath;
		 }

private: System::Void btnOutputDirSameAsInput_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtOutputDirectory->Text = "<< Same as input directory >>";
		 }


// ---------------------------//
// --- Last row of buttons --- //
// ---------------------------//

private: System::Void btnEncode_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ fileargs = "";
			 String ^ command  = "flac.exe";
			 String ^ args = "";
			 String ^ fileTemp = "";
			 String ^ ext = ".flac";
			 COORD c;
			 int numberOfFiles = lstFiles->Items->Count;
			 int i;

			 // Check whether possible
			 if(chkReplayGain->Checked == true && chkReplayGainAlbum->Checked == true && numberOfFiles > 50){
				 MessageBox::Show("Adding Album ReplayGain for more then 50 files is not possible","Too many files",MessageBoxButtons::OK,MessageBoxIcon::Error);
				 return;
			 }
			 if(chkReplayGain->Checked == true && chkOggFlac->Checked == true){
				 MessageBox::Show("Adding ReplayGain to OGG-FLAC files is currently not supported","No ReplayGain with Ogg",MessageBoxButtons::OK,MessageBoxIcon::Error);
				 return;
			 }

			 // Retrieve settings and transform to command-line options
			 args += "-" + tbLevel->Value.ToString() + " ";
			 if(chkVerify->Checked == true)		    args += "-V ";
			 if(chkDeleteInput->Checked == true)	args += "--delete-input-file ";
			 if(chkKeepForeign->Checked == true)	args += "--keep-foreign-metadata ";
			 if(chkOggFlac->Checked == true){	    args += "--ogg "; ext = ".oga"; }
			 if(AdvDialog->chkIgnoreChunkSize->Checked == true)	    args += "--ignore-chunk-sizes ";
			 if(chkReplayGain->Checked == true && chkReplayGainAlbum->Checked == false)
				 args += "--replay-gain ";
			 if(!String::IsNullOrEmpty(AdvDialog->txtCuesheet->Text))
				 args += "--cuesheet \"" + AdvDialog->txtCuesheet->Text + "\" ";
			 args += AdvDialog->txtCommandLine->Text + " ";

			 // Get console ready and populate proces
			 FreeConsole();
			 AllocConsole();
			 c.X = 80; c.Y= 8000;
			 SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE),c);
			 Process^ p = gcnew Process();
			 p->StartInfo->FileName = command;
			 p->StartInfo->UseShellExecute = false;
			  
			 if(txtOutputDirectory->Text != "<< Same as input directory >>"){
				  // Proces each file seperate if output directory is specified
				  for(i=0; i<numberOfFiles; i++){
					  fileTemp = "" + lstFiles->Items[i];
					  fileTemp = txtOutputDirectory->Text + "\\" + fileTemp->Substring(fileTemp->LastIndexOf("\\"));
					  fileTemp = fileTemp->Substring(0,fileTemp->LastIndexOf(".")) + ext;
					  p->StartInfo->Arguments = args + "-o " + "\"" + fileTemp + "\" \"" + lstFiles->Items[i] + "\"";
					  p->Start();
					  p->WaitForExit();
				  }
			  } else if(chkReplayGain->Checked == true && chkReplayGainAlbum->Checked == false){
				  // Proces files in batches of 50 if output directory is same as input
				  // and (not-album) ReplayGain processing is required
				  for(i=0; i<numberOfFiles; i++){
					  if (i % 50 == 49){
						  p->StartInfo->Arguments = args + fileargs;
						  p->Start();
						  p->WaitForExit();
						  fileargs = "";
					  }
					  fileargs += "\"" + lstFiles->Items[i] + "\" ";
				  }
				  // Run remainder
				  p->StartInfo->Arguments = args + fileargs;
				  p->Start();
				  p->WaitForExit();	
			  } else {
				  // Proces files in batches of 50 if output directory is same as input
				  // and ReplayGain processing is not required or Album gain has to be calculated seperately
				  for(i=0; i<numberOfFiles; i++){
					  if (i % 50 == 49){
						  p->StartInfo->Arguments = args + fileargs;
						  p->Start();
						  p->WaitForExit();
						  fileargs = "";
					  }
					  fileargs += "\"" + lstFiles->Items[i] + "\" ";
				  }
				  // Run remainder
				  p->StartInfo->Arguments = args + fileargs;
				  p->Start();
				  p->WaitForExit();	
			  }

			 // Add ReplayGain tags if album-tags have to be added 
		     if(chkReplayGain->Checked == true && chkReplayGainAlbum->Checked == true){
				 fileargs = "";
				 Console::WriteLine("");
				 Console::WriteLine("Now adding ReplayGain, this can take a while... ");
				 p->StartInfo->FileName = "metaflac.exe";
				 args = "--add-replay-gain ";
				 for(i=0; i<numberOfFiles; i++){
					 if(txtOutputDirectory->Text != "<< Same as input directory >>"){
						fileTemp = "" + lstFiles->Items[i];
						fileTemp = txtOutputDirectory->Text + "\\" + fileTemp->Substring(fileTemp->LastIndexOf("\\"));
						fileTemp = fileTemp->Substring(0,fileTemp->LastIndexOf(".")) + ext;
						fileargs += "\"" + fileTemp + "\" ";
					 } else {
						fileTemp = "" + lstFiles->Items[i];
						fileTemp = fileTemp->Substring(0,fileTemp->LastIndexOf(".")) + ext;
						fileargs += "\"" + fileTemp + "\" ";
					 }
				 }
				 p->StartInfo->Arguments = args + fileargs;
				 p->Start();
				 p->WaitForExit();
			 }

			 // Add pause to let console window stay 
			 p->StartInfo->FileName = "cmd";
			 p->StartInfo->Arguments = "/c PAUSE";
			 p->Start();
			 p->WaitForExit();
			 FreeConsole();
		 }

private: System::Void btnDecode_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ fileargs = "";
			 String ^ command  = "flac.exe";
			 String ^ args = "-d ";
			 String ^ fileTemp = "";
			 COORD c;
			 int numberOfFiles = lstFiles->Items->Count;
			 int i;

			 // Retrieve settings
			  if(chkDeleteInput->Checked == true)	args += "--delete-input-file ";
			  if(chkKeepForeign->Checked == true)	args += "--keep-foreign-metadata ";
			  if(chkOggFlac->Checked == true)	    args += "--ogg ";
			  if(chkDecodeThroughErrors->Checked == true)	    args += "-F ";

			  args += AdvDialog->txtCommandLine->Text + " ";

			 // Get console ready and populate proces
			 FreeConsole();
			 AllocConsole();
			 c.X = 80; c.Y = 8000;
			 SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE),c);
			 Process^ p = gcnew Process();
			 p->StartInfo->FileName = command;
			 p->StartInfo->UseShellExecute = false;


			  if(txtOutputDirectory->Text != "<< Same as input directory >>"){
				  // Proces each file seperate if output directory is specified
				  for(i=0; i<numberOfFiles; i++){
						  fileTemp = "" + lstFiles->Items[i];
						  fileTemp = txtOutputDirectory->Text + "\\" + fileTemp->Substring(fileTemp->LastIndexOf("\\"));
						  fileTemp = fileTemp->Substring(0,fileTemp->LastIndexOf(".")) + ".wav";
						  p->StartInfo->Arguments = args + "-o " + "\"" + fileTemp + "\" \"" + lstFiles->Items[i] + "\"";
						  p->Start();
						  p->WaitForExit();
					  }
			  } else {
				  // Proces in batches of 50 if file is processed in same directory
				  for(i=0; i<numberOfFiles; i++){
					  if (i % 50 == 49){
						  p->StartInfo->Arguments = args + fileargs;
						  p->Start();
						  p->WaitForExit();
						  fileargs = "";
					  }
					  fileargs += "\"" + lstFiles->Items[i] + "\" ";
				  }
				  // Run remainder
				  p->StartInfo->Arguments = args + fileargs;
				  p->Start();
				  p->WaitForExit();				  
			  }

			 // Add pause to let console window stay 
			 p->StartInfo->FileName = "cmd";
			 p->StartInfo->Arguments = "/c PAUSE";
			 p->Start();
			 p->WaitForExit();
			 FreeConsole();
		 }

private: System::Void btnTest_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Let's first create some kind of BAT-file
			 String ^ fileargs = "";
			 String ^ command  = "flac.exe";
			 String ^ args = "-t ";
			 COORD c;
			 int numberOfFiles = lstFiles->Items->Count;
			 int i;

			 if(chkDecodeThroughErrors->Checked == true)	args += "-F ";
			 
			 // Get console ready and populate proces
			 FreeConsole();
			 AllocConsole();
			 c.X = 80; c.Y = 8000;
			 SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE),c);
			 Process^ p = gcnew Process();
			 p->StartInfo->FileName = command;
			 p->StartInfo->UseShellExecute = false;


			 // Process in batches of 50
			 for(i=0; i<numberOfFiles; i++){
				 if (i % 50 == 49){
				    p->StartInfo->Arguments = args + fileargs;
					p->Start();
					p->WaitForExit();
					fileargs = "";
				 }
				 fileargs += "\"" + lstFiles->Items[i] + "\" ";
			 }
			 
			 // Run remainder
		     p->StartInfo->Arguments = args + fileargs;
			 p->Start();
			 p->WaitForExit();

			 // Add pause to let console window stay 
			 p->StartInfo->FileName = "cmd";
			 p->StartInfo->Arguments = "/c PAUSE";
			 p->Start();
			 p->WaitForExit();
			 FreeConsole();
			 
		 }

private: System::Void btnFingerprint_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Let's first create some kind of BAT-file
			 String ^ fileargs = "";
			 String ^ command = "metaflac.exe";
			 String ^ args = "--show-md5sum ";
			 COORD c;
			 int numberOfFiles = lstFiles->Items->Count;
			 int i;

			 // Get console ready and populate proces
			 FreeConsole();
			 AllocConsole();
			 c.X = 80; c.Y = 8000;
			 SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE),c);
			 Process^ p = gcnew Process();
			 p->StartInfo->FileName = command;
			 p->StartInfo->UseShellExecute = false;
			 
			 // Proces files in batches of 50
			 for(i=0; i<numberOfFiles; i++){
				 if (i % 50 == 49){
				    p->StartInfo->Arguments = args + fileargs;
					p->Start();
					p->WaitForExit();
					fileargs = "";
				 }
				 fileargs += "\"" + lstFiles->Items[i] + "\" ";
			 }

			 // Run remainder
		     p->StartInfo->Arguments = args + fileargs;
			 p->Start();
			 p->WaitForExit();

			 // Add pause to let console window stay 
			 p->StartInfo->FileName = "cmd";
			 p->StartInfo->Arguments = "/c PAUSE";
			 p->Start();
			 p->WaitForExit();
			 FreeConsole();
		 }

private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }

// ---------------------------//
// --- Drag and drop stuff --- //
// ---------------------------//

private: System::Void lstFiles_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			 // Show user that dragdrop is possible
			 if(e->Data->GetDataPresent(DataFormats::FileDrop))
				 e->Effect = DragDropEffects::Link;
			 else
				 e->Effect = DragDropEffects::None;
		 }
private: System::Void lstFiles_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			 // Get filedrop into array of strings
			 array<String^>^ FileDropList = (array<String^>^)e->Data->GetData(DataFormats::FileDrop);
			 String^ extension = "";
			 String^ FileDropDirItem = "";
			 String^ FileDropItem = "";

			 // First process each item that has been dropped
			 for each (String^ FileDropItem in FileDropList){
				 if(Directory::Exists(FileDropItem)){
					 // Check whether dropped item is directory and find all files in that directory
					 for each (String^ FileDropDirItem in Directory::GetFiles(FileDropItem,"*.*",SearchOption::AllDirectories)){			
						extension = FileDropDirItem->Substring(FileDropDirItem->LastIndexOf(".")+1);
						if((extension == "flac") || (extension == "oga") || (extension == "ogg") || (extension == "wav")){
							// In directory search, only add relevant files
							lstFiles->Items->Add(FileDropDirItem);
						}
					}
				} else {
					// If not a directory, just add the dropped item
					lstFiles->Items->Add(FileDropItem);
				}
			 }
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 if(!(File::Exists("flac.exe"))){
				 MessageBox::Show("flac.exe is not found, FrontFLAC can't be used without it.","FLAC Commandline tools not found",MessageBoxButtons::OK,MessageBoxIcon::Error);
				 exit(1);
			 }
			 if(!(File::Exists("metaflac.exe"))){
				 MessageBox::Show("metaflac.exe is not found, FrontFLAC can't be used without it.","FLAC Commandline tools not found",MessageBoxButtons::OK,MessageBoxIcon::Error);
				 exit(1);
			 }
		 }
private: System::Void dlgOutputDirectory_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ttHelp_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
}
};
}

