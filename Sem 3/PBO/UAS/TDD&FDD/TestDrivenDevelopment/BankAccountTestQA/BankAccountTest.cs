using BankAccountQA;

namespace BankAccountTestQA
{
    [TestClass]
    public class BankAccountTest
    {
        [TestMethod]
        public void DebitCorrectProcess()
        {
            string nama = "Annisa Uswa";
            double balance = 2000000;
            BankAccount account = new BankAccount(nama, balance);
            double debitAmount = 1000000;
            double expected = 1000000;

            account.Debit(debitAmount);
            Assert.AreEqual(account.Balance, expected, 0.00001, "Error! Computed value is wrong.");
        }

        [TestMethod]
        public void DebitPositiveAmount()
        {
            string nama = "Annisa Uswa";
            double balance = 1000000;
            BankAccount account = new BankAccount(nama, balance);
            double debitAmount = -250000;
            try
            {
                account.Debit(debitAmount);
            }
            catch (System.ArgumentOutOfRangeException e)
            {
                return;
            }

            Assert.Fail("Debited amount is invalid");
        }
    }
}