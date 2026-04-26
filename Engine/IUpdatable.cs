public interface IUpdatable
{
    /// <summary>
    /// Updates the internal state of the object based on the elapsed time.
    /// </summary>
    /// <param name="dt">(delta time) The time elapsed since the last update, in seconds.</param>
    public void Update(double dt){}
}