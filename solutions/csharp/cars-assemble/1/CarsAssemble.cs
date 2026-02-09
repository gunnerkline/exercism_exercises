static class AssemblyLine
{

    public static double SuccessRate(int speed)
    {
        if (speed == 0) return .00;
        else if (1 <= speed && speed <= 4) return 1.00;
        else if (5 <= speed && speed <= 8) return .90;
        else if (speed == 9) return .80;
        else return .77;
    }
    
    public static double ProductionRatePerHour(int speed)
    {
        double CARS_PER_HOUR = 221;

        return (double)(speed * CARS_PER_HOUR * SuccessRate(speed));
    }

    public static int WorkingItemsPerMinute(int speed)
    {
        return (int)(ProductionRatePerHour(speed) / 60);
    }
}
