namespace ADONet_DataSet
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.datasetButton = new System.Windows.Forms.Button();
            this.namaListBox = new System.Windows.Forms.ListBox();
            this.prodiListBox = new System.Windows.Forms.ListBox();
            this.dataReader = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // datasetButton
            // 
            this.datasetButton.Location = new System.Drawing.Point(129, 120);
            this.datasetButton.Name = "datasetButton";
            this.datasetButton.Size = new System.Drawing.Size(180, 23);
            this.datasetButton.TabIndex = 0;
            this.datasetButton.Text = "View via Dataset";
            this.datasetButton.UseVisualStyleBackColor = true;
            this.datasetButton.Click += new System.EventHandler(this.datasetButton_Click);
            // 
            // namaListBox
            // 
            this.namaListBox.FormattingEnabled = true;
            this.namaListBox.Location = new System.Drawing.Point(129, 171);
            this.namaListBox.Name = "namaListBox";
            this.namaListBox.Size = new System.Drawing.Size(180, 95);
            this.namaListBox.TabIndex = 1;
            // 
            // prodiListBox
            // 
            this.prodiListBox.FormattingEnabled = true;
            this.prodiListBox.Location = new System.Drawing.Point(333, 171);
            this.prodiListBox.Name = "prodiListBox";
            this.prodiListBox.Size = new System.Drawing.Size(186, 95);
            this.prodiListBox.TabIndex = 2;
            // 
            // dataReader
            // 
            this.dataReader.Location = new System.Drawing.Point(333, 119);
            this.dataReader.Name = "dataReader";
            this.dataReader.Size = new System.Drawing.Size(186, 23);
            this.dataReader.TabIndex = 3;
            this.dataReader.Text = "View via DataReader";
            this.dataReader.UseVisualStyleBackColor = true;
            this.dataReader.Click += new System.EventHandler(this.datareaderButton_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(758, 435);
            this.Controls.Add(this.dataReader);
            this.Controls.Add(this.prodiListBox);
            this.Controls.Add(this.namaListBox);
            this.Controls.Add(this.datasetButton);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button datasetButton;
        private System.Windows.Forms.ListBox namaListBox;
        private System.Windows.Forms.ListBox prodiListBox;
        private System.Windows.Forms.Button dataReader;
    }
}

