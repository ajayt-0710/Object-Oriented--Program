
# C++ OBJECT-ORIENTED PROGRAMMING
## Complete Practice Workbook – 35 Problems

**Language:** C++
**Level:** Absolute Beginner to Advanced
**Total Problems:** 35
**Test Cases:** 3 per problem
**Solutions:** Not included

---

# PART 1: CLASSES AND OBJECTS
Difficulty: Very Easy
Problems 1–5

## Problem 1: Student Information

Create a class called `Student`.

Requirements:
- Attributes: name, age, rollNumber.
- Create a method called `displayDetails().
- Create three student objects.
- Display the details of all students.

Test Cases:

| Test | Name | Age | Roll Number |
|---|---|---|---|
| 1 | Rahul | 20 | 101 |
| 2 | Priya | 21 | 102 |
| 3 | Alex | 19 | 103 |

Expected: Display the correct details for each student.

---

## Problem 2: Rectangle Calculator

Create a class called `Rectangle`.

Requirements:
- Attributes: length and breadth.
- Method: calculateArea().
- Method: calculatePerimeter().
- Create objects with different dimensions.

Test Cases:

| Test | Length | Breadth | Expected Area | Expected Perimeter |
|---|---:|---:|---:|---:|
| 1 | 5 | 3 | 15 | 16 |
| 2 | 10 | 4 | 40 | 28 |
| 3 | 7 | 7 | 49 | 28 |

---

## Problem 3: Circle Calculator

Create a class called `Circle`.

Requirements:
- Attribute: radius.
- Method: calculateArea().
- Method: calculateCircumference().
- Use PI = 3.14.

Test Cases:

| Test | Radius | Expected Area | Expected Circumference |
|---|---:|---:|---:|
| 1 | 1 | 3.14 | 6.28 |
| 2 | 5 | 78.50 | 31.40 |
| 3 | 7 | 153.86 | 43.96 |

---

## Problem 4: Employee Salary Calculator

Create a class called `Employee`.

Requirements:
- Attributes: employeeName, employeeID, monthlySalary.
- Method: displayDetails().
- Method: calculateAnnualSalary().
- Annual salary = monthly salary × 12.

Test Cases:

| Test | Name | ID | Monthly Salary | Annual Salary |
|---|---|---:|---:|---:|
| 1 | John | 1001 | 5000 | 60000 |
| 2 | Sarah | 1002 | 7000 | 84000 |
| 3 | David | 1003 | 3500 | 42000 |

---

## Problem 5: Car Information

Create a class called `Car`.

Requirements:
- Attributes: brand, model, manufacturingYear, price.
- Method: displayCarDetails().
- Method: isLuxuryCar().
- A car is considered luxury if its price exceeds 50000.

Test Cases:

| Test | Brand | Price | Expected |
|---|---|---:|---|
| 1 | BMW | 75000 | Luxury |
| 2 | Toyota | 30000 | Not Luxury |
| 3 | Audi | 60000 | Luxury |

---

# PART 2: CONSTRUCTORS AND DESTRUCTORS
Difficulty: Easy
Problems 6–10

## Problem 6: Default Constructor

Create a class called `Laptop`.

Requirements:
- Attributes: brand, RAM, price.
- Create a default constructor.
- Initialize default values:
  - Brand = Dell
  - RAM = 8 GB
  - Price = 500
- Display the information.

Test Cases:

| Test | Construction | Expected Brand | RAM | Price |
|---|---|---|---:|---:|
| 1 | Default | Dell | 8 | 500 |
| 2 | Default | Dell | 8 | 500 |
| 3 | Default | Dell | 8 | 500 |

---

## Problem 7: Parameterized Constructor

Create a class called `Book`.

Requirements:
- Attributes: title, author, price.
- Create a parameterized constructor.
- Initialize attributes through constructor arguments.
- Create three different objects.

Test Cases:

| Test | Title | Author | Price |
|---|---|---|---:|
| 1 | C++ Basics | John | 250 |
| 2 | Java Guide | Smith | 350 |
| 3 | Python 101 | Alex | 300 |

---

## Problem 8: Constructor Overloading

Create a class called `Calculator`.

Requirements:
- Create a default constructor.
- Create a constructor accepting one integer.
- Create a constructor accepting two integers.
- Display the initialized values.

Test Cases:

| Test | Constructor | Expected Values |
|---|---|---|
| 1 | Default | 0, 0 |
| 2 | One parameter: 10 | 10, 0 |
| 3 | Two parameters: 10, 20 | 10, 20 |

---

## Problem 9: Destructor Demonstration

Create a class called `Demo`.

Requirements:
- Constructor should print "Object Created".
- Destructor should print "Object Destroyed".
- Create an object inside a function.
- Observe when the destructor is called.

Test Cases:

1. Create an object inside main().
2. Create an object inside a separate function.
3. Create two local objects and observe their destruction order.

Expected: Local objects are destroyed automatically when their scope ends. Multiple local objects are destroyed in reverse order of construction.

---

## Problem 10: Shopping Cart Constructor

Create a class called `Product`.

Requirements:
- Attributes: productName, quantity, price.
- Create a parameterized constructor.
- Create a method calculateTotal().
- Create a method displayProduct().
- Total = quantity × price.

Test Cases:

| Test | Product | Quantity | Price | Expected Total |
|---|---|---:|---:|---:|
| 1 | Mouse | 2 | 500 | 1000 |
| 2 | Keyboard | 1 | 1200 | 1200 |
| 3 | Monitor | 3 | 5000 | 15000 |

---

# PART 3: ENCAPSULATION
Difficulty: Easy to Medium
Problems 11–15

## Problem 11: Bank Account

Create a class called `BankAccount`.

Requirements:
- Private attributes: accountNumber, balance.
- Public methods:
  - deposit()
  - withdraw()
  - getBalance()
- Deposit amount must be positive.
- Withdrawal cannot exceed available balance.
- Balance must never become negative.

Test Cases:

| Test | Initial Balance | Operation | Amount | Expected Balance |
|---|---:|---|---:|---:|
| 1 | 1000 | Deposit | 500 | 1500 |
| 2 | 1000 | Withdraw | 300 | 700 |
| 3 | 1000 | Withdraw | 2000 | 1000 |

---

## Problem 12: Student Marks Validation

Create a class called `Student`.

Requirements:
- Private attributes: name and marks.
- Create setMarks() and getMarks().
- Marks must be between 0 and 100.
- Reject invalid values.

Test Cases:

| Test | Marks | Expected |
|---|---:|---|
| 1 | 85 | Accepted |
| 2 | 120 | Rejected |
| 3 | -10 | Rejected |

---

## Problem 13: Employee Salary Protection

Create a class called `Employee`.

Requirements:
- Private attribute: salary.
- Public method: setSalary().
- Public method: getSalary().
- Salary cannot be negative.
- Salary cannot be accessed directly outside the class.

Test Cases:

| Test | Salary Input | Expected |
|---|---:|---|
| 1 | 50000 | Accepted |
| 2 | 0 | Accepted |
| 3 | -5000 | Rejected |

Additional Challenge:
Try accessing the private salary directly from main(). Understand the compiler error.

---

## Problem 14: Mobile Phone Security

Create a class called `MobilePhone`.

Requirements:
- Private attributes: PIN and balance.
- Method: checkBalance().
- Accept a PIN as an argument.
- Display balance only when the PIN is correct.
- Reject incorrect PIN attempts.

Test Cases:

| Test | Stored PIN | Entered PIN | Expected |
|---|---:|---:|---|
| 1 | 1234 | 1234 | Display balance |
| 2 | 1234 | 1111 | Access denied |
| 3 | 5678 | 5678 | Display balance |

---

## Problem 15: ATM Withdrawal System

Create a class called `ATM`.

Requirements:
- Private attributes: accountBalance, dailyWithdrawalLimit, amountWithdrawnToday.
- Methods:
  - deposit()
  - withdraw()
  - checkBalance()
  - resetDailyLimit()
- Withdrawal must not exceed the account balance.
- Withdrawal must not exceed the daily limit.
- Invalid transactions must be rejected.

Test Cases:

| Test | Balance | Daily Limit | Withdrawal | Expected |
|---|---:|---:|---:|---|
| 1 | 10000 | 5000 | 2000 | Successful |
| 2 | 10000 | 5000 | 6000 | Rejected |
| 3 | 1000 | 5000 | 2000 | Rejected |

---

# PART 4: INHERITANCE
Difficulty: Medium
Problems 16–20

## Problem 16: Animal Kingdom

Create a base class called `Animal`.

Requirements:
- Attribute: name.
- Method: eat().

Create derived classes:
- Dog
- Cat

Additional methods:
- Dog: bark()
- Cat: meow()

Test Cases:

| Test | Animal | Expected Output |
|---|---|---|
| 1 | Dog | Eating and Barking |
| 2 | Cat | Eating and Meowing |
| 3 | Dog | Correct name and inherited eating method |

---

## Problem 17: Vehicle Management

Create a base class called `Vehicle`.

Attributes:
- Brand
- Speed

Create derived classes:
- Car
- Bike

Requirements:
- Both should inherit Vehicle.
- Each should have its own display method.
- Display brand, speed and vehicle type.

Test Cases:

| Test | Vehicle | Brand | Speed |
|---|---|---|---:|
| 1 | Car | Toyota | 120 |
| 2 | Bike | Honda | 80 |
| 3 | Car | BMW | 200 |

---

## Problem 18: Multilevel Inheritance

Create three classes:

Person → Employee → Manager

Requirements:

Person:
- Name
- Age

Employee:
- Employee ID
- Salary

Manager:
- Department

Display all information using a Manager object.

Test Cases:

| Test | Name | Age | ID | Salary | Department |
|---|---|---:|---:|---:|---|
| 1 | Rahul | 35 | 101 | 80000 | IT |
| 2 | Priya | 40 | 102 | 95000 | HR |
| 3 | Alex | 30 | 103 | 70000 | Finance |

---

## Problem 19: Hierarchical Inheritance

Create a base class called `Shape`.

Create three derived classes:
- Circle
- Rectangle
- Triangle

Requirements:
- Each class should calculate its own area.
- Use inheritance to share common structure.

Test Cases:

| Test | Shape | Dimensions | Expected Area |
|---|---|---|---:|
| 1 | Circle | Radius = 5 | 78.5 |
| 2 | Rectangle | 5 × 4 | 20 |
| 3 | Triangle | Base = 6, Height = 4 | 12 |

---

## Problem 20: University Management System

Create a base class called `Person`.

Create derived classes:
- Student
- Professor
- Administrator

Requirements:

Student:
- Roll number
- Course

Professor:
- Subject
- Salary

Administrator:
- Department
- Designation

Each derived class should have its own display method.

Test Cases:

| Test | Type | Name | Additional Information |
|---|---|---|---|
| 1 | Student | Rahul | 101, Computer Science |
| 2 | Professor | John | Mathematics, 70000 |
| 3 | Administrator | Sarah | IT, Head |

---

# PART 5: POLYMORPHISM
Difficulty: Medium to Hard
Problems 21–25

## Problem 21: Function Overloading

Create a class called `Calculator`.

Create three methods with the same name add():

- Add two integers.
- Add three integers.
- Add two floating-point numbers.

Test Cases:

| Test | Operation | Input | Expected |
|---|---|---|---:|
| 1 | add() | 5, 10 | 15 |
| 2 | add() | 5, 10, 15 | 30 |
| 3 | add() | 2.5, 3.5 | 6.0 |

---

## Problem 22: Method Overriding

Create a base class called `Animal`.

Create a method called sound().

Create derived classes:
- Dog
- Cat
- Cow

Override sound() in every derived class.

Test Cases:

| Test | Object | Expected Output |
|---|---|---|
| 1 | Dog | Woof |
| 2 | Cat | Meow |
| 3 | Cow | Moo |

---

## Problem 23: Runtime Polymorphism

Extend Problem 22.

Requirements:
- Make sound() a virtual function.
- Create a base class pointer.
- Point it to Dog, Cat and Cow objects.
- Call sound() through the pointer.
- Use override in derived classes.

Test Cases:

1. Base pointer points to Dog. Expected: Woof.
2. Base pointer points to Cat. Expected: Meow.
3. Base pointer points to Cow. Expected: Moo.

Question:
Why does the derived class method execute even though the pointer is of the base class type?

---

## Problem 24: Operator Overloading

Create a class called `Complex`.

Attributes:
- Real part
- Imaginary part

Requirements:
- Overload the + operator.
- Add two complex numbers.
- Display the result in a + bi format.

Test Cases:

| Test | First Number | Second Number | Expected |
|---|---|---|---|
| 1 | 3 + 4i | 2 + 5i | 5 + 9i |
| 2 | 5 + 2i | 1 + 3i | 6 + 5i |
| 3 | 10 + 8i | 4 + 2i | 14 + 10i |

---

## Problem 25: Employee Bonus System

Create a base class called `Employee`.

Create derived classes:
- Manager
- Developer

Requirements:
- Create a virtual method calculateBonus().
- Manager receives 20% of salary.
- Developer receives 10% of salary.
- Call methods using base-class pointers.

Test Cases:

| Test | Employee | Salary | Expected Bonus |
|---|---|---:|---:|
| 1 | Manager | 50000 | 10000 |
| 2 | Developer | 50000 | 5000 |
| 3 | Manager | 100000 | 20000 |

---

# PART 6: ABSTRACTION
Difficulty: Medium to Hard
Problems 26–30

## Problem 26: Shape Abstraction

Create an abstract class called `Shape`.

Requirements:
- Create a pure virtual function calculateArea().
- Create derived classes Circle and Rectangle.
- Implement calculateArea() in both derived classes.
- Demonstrate that Shape itself cannot be instantiated.

Test Cases:

| Test | Shape | Input | Expected Area |
|---|---|---|---:|
| 1 | Circle | Radius = 5 | 78.5 |
| 2 | Rectangle | 4 × 5 | 20 |
| 3 | Rectangle | 10 × 3 | 30 |

Question:
Why can't an object of an abstract class be created?

---

## Problem 27: Payment System

Create an abstract class called `Payment`.

Create derived classes:
- CreditCardPayment
- UpiPayment
- CashPayment

Requirements:
- Create a pure virtual function processPayment().
- Each payment method should implement its own processing logic.
- Demonstrate runtime polymorphism.

Test Cases:

| Test | Payment Type | Amount | Expected |
|---|---|---:|---|
| 1 | Credit Card | 1000 | Successful processing |
| 2 | UPI | 500 | Successful processing |
| 3 | Cash | 200 | Successful processing |

---

## Problem 28: Employee Salary Abstraction

Create an abstract class called `Employee`.

Methods:
- calculateSalary()
- displayDetails()

Create derived classes:
- FullTimeEmployee
- PartTimeEmployee

Rules:
- Full-time salary = monthly salary.
- Part-time salary = hourly rate × hours worked.

Test Cases:

| Test | Type | Salary Information | Expected |
|---|---|---|---:|
| 1 | Full-time | Monthly = 5000 | 5000 |
| 2 | Part-time | Rate = 20, Hours = 80 | 1600 |
| 3 | Part-time | Rate = 30, Hours = 100 | 3000 |

---

## Problem 29: Notification System

Create an abstract class called `Notification`.

Create derived classes:
- EmailNotification
- SMSNotification
- PushNotification

Requirements:
- Create a pure virtual method sendNotification().
- Each class should implement its own notification logic.
- Use base-class pointers to call the methods.

Test Cases:

| Test | Notification | Expected |
|---|---|---|
| 1 | Email | Email sent |
| 2 | SMS | SMS sent |
| 3 | Push | Push notification sent |

---

## Problem 30: Online Shopping Payment

Create an abstract class called `PaymentMethod`.

Create derived classes:
- CreditCard
- DebitCard
- UPI

Requirements:
- Implement processPayment().
- Store transaction amount.
- Validate that amount is positive.
- Display transaction details.
- Use runtime polymorphism.

Test Cases:

| Test | Payment | Amount | Expected |
|---|---|---:|---|
| 1 | Credit Card | 2500 | Successful |
| 2 | UPI | 1000 | Successful |
| 3 | Debit Card | -500 | Rejected |

---

# PART 7: ADVANCED OOP CHALLENGES
Difficulty: Hard
Problems 31–35

These problems combine multiple OOP concepts.
Try solving them without looking at tutorials.

## Problem 31: Complete Banking Management System

Build a banking application using C++ OOP.

Requirements:

1. Create an abstract base class Account.
2. Create derived classes:
   - SavingsAccount
   - CurrentAccount
3. Store:
   - Account number
   - Account holder name
   - Balance
4. Implement:
   - deposit()
   - withdraw()
   - calculateInterest()
   - displayAccountDetails()
5. Savings accounts should earn 4% annual interest.
6. Current accounts should not earn interest.
7. Prevent withdrawals exceeding the available balance.
8. Use encapsulation to protect account information.
9. Use runtime polymorphism for interest calculation.
10. Maintain multiple accounts using a vector of base-class pointers or smart pointers.

Test Cases:

Test 1:
- Account type: Savings
- Initial balance: 10000
- Deposit: 2000
- Withdrawal: 3000
- Expected balance: 9000

Test 2:
- Account type: Current
- Initial balance: 20000
- Withdrawal: 5000
- Expected balance: 15000
- Interest: 0

Test 3:
- Account type: Savings
- Initial balance: 5000
- Withdrawal: 8000
- Expected: Transaction rejected.
- Balance remains 5000.

Additional Challenge:
Implement transaction history for each account.

---

## Problem 32: Library Management System

Build a complete library management application.

Requirements:

1. Create a Book class.
2. Create a Member class.
3. Create a Library class.
4. Each book should contain:
   - ISBN
   - Title
   - Author
   - Availability status
5. Each member should have:
   - Member ID
   - Name
   - List of borrowed books
6. Implement:
   - addBook()
   - removeBook()
   - searchBook()
   - borrowBook()
   - returnBook()
7. A member can borrow a maximum of 3 books.
8. A book cannot be borrowed if unavailable.
9. Prevent duplicate ISBN entries.
10. Use encapsulation and composition.

Test Cases:

Test 1:
- Add book: ISBN 101, C++ Basics.
- Search ISBN 101.
- Expected: Book found and available.

Test 2:
- Member borrows ISBN 101.
- Another member attempts to borrow ISBN 101.
- Expected: Second borrowing rejected.

Test 3:
- Member already has 3 borrowed books.
- Attempts to borrow a fourth book.
- Expected: Borrowing rejected.

Additional Challenge:
Implement a late-return fine system.

---

## Problem 33: E-Commerce Shopping Cart

Build an object-oriented shopping cart application.

Requirements:

1. Create a Product class.
2. Create a Customer class.
3. Create a ShoppingCart class.
4. Create an abstract Payment class.
5. Create derived payment classes:
   - CreditCardPayment
   - UpiPayment
6. Implement:
   - addProduct()
   - removeProduct()
   - updateQuantity()
   - calculateTotal()
   - applyDiscount()
   - checkout()
7. Store multiple products in the cart.
8. Apply a 10% discount when the cart total exceeds 5000.
9. Reject checkout when the cart is empty.
10. Use polymorphism for payment processing.
11. Use encapsulation for product prices and quantities.

Test Cases:

Test 1:
- Product A: 2000 × 2
- Product B: 1500 × 1
- Expected subtotal: 5500
- Discount: 550
- Final total: 4950

Test 2:
- Product A: 1000 × 2
- Expected subtotal: 2000
- Discount: 0
- Final total: 2000

Test 3:
- Empty cart.
- Attempt checkout.
- Expected: Checkout rejected.

Additional Challenge:
Add inventory tracking so products cannot be ordered beyond available stock.

---

## Problem 34: Hospital Management System

Build a hospital management application using OOP.

Requirements:

1. Create an abstract base class Person.
2. Create derived classes:
   - Patient
   - Doctor
   - Nurse
3. Create an Appointment class.
4. Create a Hospital class.
5. Store patient information:
   - Patient ID
   - Name
   - Age
   - Medical history
6. Store doctor information:
   - Doctor ID
   - Specialization
   - Consultation fee
7. Implement:
   - registerPatient()
   - addDoctor()
   - bookAppointment()
   - cancelAppointment()
   - displayPatientHistory()
8. Prevent double booking of a doctor for the same time slot.
9. Use polymorphism to display different person details.
10. Use composition to connect appointments with patients and doctors.
11. Protect sensitive attributes using encapsulation.

Test Cases:

Test 1:
- Doctor: D101
- Patient: P101
- Time: 10:00 AM
- Expected: Appointment booked.

Test 2:
- Same doctor.
- Another patient.
- Same time: 10:00 AM.
- Expected: Appointment rejected due to scheduling conflict.

Test 3:
- Doctor: D101
- Patient: P102
- Time: 11:00 AM.
- Expected: Appointment booked successfully.

Additional Challenge:
Implement appointment history and billing.

---

## Problem 35: University Course Registration System

Build a complete university course registration system.

Requirements:

1. Create an abstract base class Person.
2. Create derived classes:
   - Student
   - Professor
3. Create a Course class.
4. Create a University class.
5. Each student should have:
   - Student ID
   - Name
   - Registered courses
6. Each professor should have:
   - Professor ID
   - Name
   - Assigned courses
7. Each course should have:
   - Course ID
   - Course name
   - Credit hours
   - Maximum enrollment capacity
8. Implement:
   - registerStudent()
   - addCourse()
   - assignProfessor()
   - enrollStudent()
   - dropCourse()
   - calculateTotalCredits()
   - displayTranscript()
9. A student cannot register for the same course twice.
10. A student cannot exceed 18 credit hours.
11. A course cannot exceed its enrollment capacity.
12. A professor cannot be assigned to more than 4 courses.
13. Use inheritance, abstraction, encapsulation, composition and polymorphism.
14. Use STL containers such as vector, map or unordered_map.
15. Handle invalid registrations gracefully.

Test Cases:

Test 1:
- Student: S101
- Course: CS101
- Credits: 3
- Maximum capacity: 30
- Current enrollment: 10
- Expected: Registration successful.

Test 2:
- Student already enrolled in CS101.
- Attempts to register for CS101 again.
- Expected: Duplicate registration rejected.

Test 3:
- Student already has 16 credits.
- Attempts to register for a 4-credit course.
- Expected: Registration rejected because total would exceed 18 credits.

Additional Challenge:
Implement:
- GPA calculation.
- Course prerequisites.
- Semester-wise transcripts.
- Persistent storage using file handling.

---

# FINAL LEARNING CHECKLIST

## Beginner Skills
- [ ] Classes and objects
- [ ] Attributes and methods
- [ ] Constructors
- [ ] Destructors
- [ ] Constructor overloading

## Intermediate Skills
- [ ] Encapsulation
- [ ] Getters and setters
- [ ] Inheritance
- [ ] Function overloading
- [ ] Function overriding
- [ ] Runtime polymorphism

## Advanced Skills
- [ ] Abstract classes
- [ ] Pure virtual functions
- [ ] Operator overloading
- [ ] Composition
- [ ] STL containers
- [ ] Smart pointers
- [ ] Exception handling
- [ ] File handling

## Recommended Rules

1. Write the code independently.
2. Do not copy solutions from the internet.
3. Compile every program.
4. Test all three test cases.
5. Use meaningful class and method names.
6. Avoid making all attributes public.
7. Explain which OOP concepts you used in every solution.
8. For Problems 31–35, write a short design before coding.

**Goal:** Complete all 35 problems and build confidence in C++ object-oriented programming.
