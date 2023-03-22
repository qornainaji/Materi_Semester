using EmployeeAPI.Model;

namespace EmployeeAPI.Services
{
    public class EmployeesRepository
    {
        public List<Employee> employees = new List<Employee>
        {
            //"https://localhost:7003/api/Employee"
            new Employee(1, "Annisa Uswa Sufia", "annisa.uswa.sufia@mail.ugm.ac.id", DateTime.Now, "Demak"),
            new Employee(2, "Qornain Aji", "qornain.aji@mail.ugm.ac.id", DateTime.Now, "Sleman"),
            new Employee(3, "Chewwyyy", "chewwyyy@mail.ugm.ac.id", DateTime.Now, "Denmark"),
            new Employee(4, "AiinaChan", "aiichan@mail.ugm.ac.id", DateTime.Now, "New Yorkarto")
        };

        public List<Employee> GetAllEmployees()
        {
            return employees;
        }
    }
}
