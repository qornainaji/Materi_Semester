using EmployeeAPI.Model;
using EmployeeAPI.Services;

using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;

namespace EmployeeAPI.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class EmployeeController : ControllerBase
    {
        private readonly EmployeesRepository employeesRepository;

        public EmployeeController()
        {
            this.employeesRepository = new EmployeesRepository();
        }

        [HttpGet]
        public List<Employee> Get()
        {
            return employeesRepository.GetAllEmployees();
        }
    }
}
