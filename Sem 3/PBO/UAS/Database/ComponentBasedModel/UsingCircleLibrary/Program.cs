using CircleAreaComputation;

class Program
{
    public static void Main(string[] args)
    {
        Circle circle = new Circle(10); 
        double circleArea = circle.computeArea();
        Console.WriteLine($"The area of radius 10 is { circleArea }");
    }
}