using Bank_Account;

namespace BankAccountTestQA
{
    [TestClass]
    public class BankAccountTest
    {
        [TestMethod]
        public void DebitCorrectExecution()
        {
            string name = "Annisa Uswa Sufia";
            double balance = 1000000;
            BankAccount account = new BankAccount(name, balance);

            double debitAmount = 250000;
            double expectedAmount = 750000;
            account.Debit(debitAmount);
            Assert.AreEqual(account.Balance, expectedAmount, 0.00001, "Error! Computation is wrong. ");

        }
        [TestMethod] 
        public void DebitPossitiveAmount() 
        {
            string name = "Annisa Uswa Sufia";
            double balance = 1000000;
            BankAccount account = new BankAccount(name, balance);

            double debitAmount = -250000;

            try
            {
                account.Debit(debitAmount);
            }catch(System.ArgumentOutOfRangeException e) 
            {
                Console.WriteLine(e.Message);
                return;
            }

            Assert.Fail("Debited amount is invalid!");
        }
    }
}