class Person {
  String name = "无名";
  void speak() {
    System.out.println("我是人类");
  }
}

class Student extends Person {
  void speak() {
    super.speak();
    System.out.println("我是学生");
  }
}

public class Main {
  public static void main(String[] args) {
    Student s = new Student();
    s.speak();
  }
}