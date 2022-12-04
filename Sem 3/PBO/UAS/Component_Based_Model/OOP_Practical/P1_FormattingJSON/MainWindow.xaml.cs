using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using Newtonsoft.Json;

namespace P1_FormattingJSON
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        public class Mahasiswa
        {
            public int NIM { get; set; }
            public string nama { get; set; }
            public double IPK { get; set; }
        }

        private void TekanTombol(object sender, RoutedEventArgs e)
        {
            Mahasiswa Chewwyyy = new Mahasiswa();
            Chewwyyy.NIM = 475357;
            Chewwyyy.nama = "Chewwyyylagi👉👈";
            Chewwyyy.IPK = 4.00;
            string mahasiswaJSON = JsonConvert.SerializeObject(Chewwyyy);
            TextPlacement.Text = mahasiswaJSON;
            //TextPlacement.Text = "Chewwyyy lagi 👉👈";
        }
    }
}
