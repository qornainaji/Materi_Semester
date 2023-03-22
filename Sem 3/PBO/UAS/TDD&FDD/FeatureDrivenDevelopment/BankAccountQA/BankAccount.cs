//namespace BankAccountQA
//{
//    public class BankAccount
//    {
//        private string customerName;
//        private double balance;
//
//        public BankAccount(string name, double uang)
//        {
//            // this biar mbedain parameter sama variable nya
//            // this.customerName = customerName;
//            // this.balance = balance;
//            customerName = name;
//            balance = uang;
//        }
//
//        public double Balance { get { return balance; } }
//        public void Debit(double amount)
//        {
//            if(amount < 0)
//            {
//                throw new ArgumentOutOfRangeException();
//            }
//            if(amount > balance)
//            {
//                throw new ArgumentOutOfRangeException();
//            }
//            balance -= amount;
//        }
//    }
//}

namespace Bank_Account
{
    public interface ITransaction
    {
        void Execute(double amount);
    }


    public class CreditTransaction : ITransaction
{
    public void Execute(double amount)
    {
        // Add funds to the account
    }
}

public class DebitTransaction : ITransaction
{
    public void Execute(double amount)
    {
        // Subtract funds from the account
    }
}

public class BankAccount
{
    private string customerName;
    private double balance;
    private ITransaction transaction;

    public BankAccount(string customerName, double balance, ITransaction transaction)
    {
        this.customerName = customerName;
        this.balance = balance;
        this.transaction = transaction;
    }

    public double Balance { get { return balance; } }
    public void ExecuteTransaction(double amount)
    {
        if (amount < 0)
        {
            throw new ArgumentOutOfRangeException();
        }

        if (amount > balance)
        {
            throw new ArgumentOutOfRangeException();
        }

        transaction.Execute(amount);
    }
}