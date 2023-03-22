using RestSharp;
using System.Collections.Immutable;
using System.Text.Json; 

string conn = "https://localhost:7003/api/Employee";

var client = new RestClient(conn);
var request = new RestRequest(conn, Method.Get);
var response = client.Execute(request);
string responseData = response.Content;
//Console.WriteLine(response.Content);

using var parseData = JsonDocument.Parse(responseData);
JsonElement parseJSON = parseData.RootElement;

var employeeData = parseJSON.EnumerateArray();

while(employeeData.MoveNext())
{
    //foreach(var pair in parseData)
    //{
    //    Console.WriteLine(parseJSON[pair.Key]);
    //}
    Console.WriteLine(employeeData.GetType());
}