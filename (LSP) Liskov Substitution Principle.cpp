using System;
using System.Collections.Generic;
using System.Text;

namespace LSP{
    public abstract class Fruit{
        public abstract string GetColor();
    }

    public class Lemon : Fruit{
        public override string GetColor() { 
            return "green"; 
        }
    }

    public class Orange : Fruit{
        public override string GetColor(){
            return "orange";
        }
    }
    
    public class ExecuteTest{
        public static void Execute(){
            Fruit fruit = new Lemon();
            Console.WriteLine(fruit.GetColor()); //green

            fruit = new Orange();
            Console.WriteLine(fruit.GetColor()); //orange
        }
    }
}