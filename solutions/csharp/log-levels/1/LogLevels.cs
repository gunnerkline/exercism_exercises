static class LogLine
{
    public static string Message(string logLine)
    {
        string trimmedLogLine = logLine.Trim();
        int colonIndex = trimmedLogLine.IndexOf(':');
        return trimmedLogLine.Substring(colonIndex + 1).Trim();
    }

    public static string LogLevel(string logLine)
    {
        string trimmedLogLine = logLine.Trim();
        int leftBracketIndex = trimmedLogLine.IndexOf("[");
        int rightBracketIndex = trimmedLogLine.IndexOf("]");
        string trimmedWarning = trimmedLogLine.Substring(leftBracketIndex + 1, rightBracketIndex - leftBracketIndex - 1).Trim();
        return trimmedWarning.ToLower();
    }

    public static string Reformat(string logLine)
    {
        string warningLower = LogLevel(logLine);
        return Message(logLine) + $" ({warningLower})";
    }
}
