namespace EmployeeAPI.Model
{
    public class Employee
    {
        public int id { get; set; }
        public string name { get; set; }
        public string email { get; set; }
        public DateTime hireTime { get; set; } 
        public string city { get; set; }

        public Employee(int id, string name, string email, DateTime hireTime, string city)
        {
            this.id = id;
            this.name = name;
            this.email = email;
            this.hireTime = hireTime;
            this.city = city;
        }
    }
}
