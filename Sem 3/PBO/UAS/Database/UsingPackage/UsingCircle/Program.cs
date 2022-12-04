using CircleAreaComputation;
class Program
{
    public static void Main(string[] args)
    {
        double radius = 10;
        Circle circle= new Circle(radius);
        double area = circle.computeArea();
        Console.WriteLine(area);
    }
}