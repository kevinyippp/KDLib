namespace KYLib.FiniteStateMachine;

public interface IState<TEnum> where TEnum : struct, Enum
{
    TEnum? Update(double dt);
    void Enter(){}
    void Exit(){}
}