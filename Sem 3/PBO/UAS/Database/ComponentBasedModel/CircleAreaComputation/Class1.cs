namespace CircleAreaComputation
{
    public class Circle
    {
        private double radius;
        
        // constructor
        public Circle(double radius)
        {
            this.radius = radius;
        }

        // method untuk menghitung area  
        public double computeArea()
        {
            double area = Math.PI*radius*radius;
            return area;
        }
    }
}