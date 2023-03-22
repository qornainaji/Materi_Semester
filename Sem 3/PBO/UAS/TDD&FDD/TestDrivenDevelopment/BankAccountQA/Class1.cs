namespace BankAccountQA
{
    public class Class1
    {

    }

    public class BankAccount
    {
        private string customerName;
        private double balance; 
        
        public BankAccount(string nama, double amount)
        {
            customerName = nama;
            balance = amount;
        }

        public string Nama { get { return customerName; } }
        public double Balance { get { return balance; } }

        public void Debit(double debitAmount)
        {
            if (debitAmount< 0)
            {
                throw new ArgumentOutOfRangeException();
            }
            balance -= debitAmount;
        }
    }
}