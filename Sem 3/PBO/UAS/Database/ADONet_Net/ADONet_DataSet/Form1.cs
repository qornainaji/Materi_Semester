using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace ADONet_DataSet
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void datasetButton_Click(object sender, EventArgs e)
        {
            // setup connection
            string connectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=F:\Data Qornain\Materi Matkul\Materi_Semester\Sem 3\PBO\UAS\Database\ADONet_Net\ADONet_DataSet\UGMDatabase.mdf;Integrated Security=True;Connect Timeout=30";
            SqlConnection dbConnection = new SqlConnection(connectionString);
            dbConnection.Open();

            // membaca data dari database
            SqlDataAdapter sqlDataAdapter = new SqlDataAdapter("select * from Mahasiswa", dbConnection);
            DataSet dataSet = new DataSet();
            sqlDataAdapter.Fill(dataSet);
            namaListBox.Items.Clear();
            prodiListBox.Items.Clear();

            foreach (DataTable dt in dataSet.Tables)
            {
                foreach(DataRow dr in dt.Rows)
                {
                    namaListBox.Items.Add(dr["Nama"].ToString());
                    prodiListBox.Items.Add(dr["Prodi"].ToString());
                }
            }


            //SqlCommand command = new SqlCommand("select * from Mahasiswa");
            //SqlDataReader sqlDataReader = command.ExecuteReader();
        }

        private void datareaderButton_Click(object sender, EventArgs e)
        {
            // setup connection
            string connectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=F:\Data Qornain\Materi Matkul\Materi_Semester\Sem 3\PBO\UAS\Database\ADONet_Net\ADONet_DataSet\UGMDatabase.mdf;Integrated Security=True;Connect Timeout=30";
            SqlConnection dbConnection = new SqlConnection(connectionString);
            dbConnection.Open();

            // DataReader
            SqlCommand commmand = new SqlCommand("select * from Mahasiswa", dbConnection);
            SqlDataReader sqlDataReader = commmand.ExecuteReader();
            namaListBox.Items.Clear(); 
            prodiListBox.Items.Clear(); 

            while (sqlDataReader.Read())
            {
                namaListBox.Items.Add(sqlDataReader["Nama"].ToString());
                prodiListBox.Items.Add(sqlDataReader["Prodi"].ToString());
            }
        }
    }
}
