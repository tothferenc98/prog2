class Parent
{
    public void saySomething()
    {
        System.out.println("Parent says: BLA BLA BLA");
    }
}
class Child extends Parent
{
    public void echoSomething(String msg)
    {
        System.out.println(msg);
    }
}
public class App
{
    public static void main(String[] args)
    {
        Parent p = new Parent();
        Parent p2 = new Child();
        
        System.out.println("Invoking method of parent");
        p.saySomething();
        
        System.out.println("Invoking method of child through parent ref");
        p2.echoSomething("This won't work");
        
    }
}
