public class Student {
  String name;
  int age;
  
  public Student(String name, int age) {
    this.name = name;
    this.age = age;
  }

  public void showInfo() {
    System.out.println(name + ", " + age);
  }
}