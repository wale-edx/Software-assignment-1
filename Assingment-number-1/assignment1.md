## Assignment Number 1 
# chapter review questions 

*A1 :*  a class is OOP vehicle to represent a real life object in programming as one package containing data & methods which manipulates these data

---

*A2 :*   
* Abstraction is accomplished by hiding complex details and giving a well defined interface to deal with.
* Data hiding is accomplished by having the data members as private for the class methods only & no public user can access it .
* Encapsulation is achieved by wrapping the related data & methods in one package aka. class .

---

*A3 : * An object is an instance of a class.

---

*A4 : * Class member functions are shared among different instances of the class - they are loaded once in the memory - But objects has a unique copy of class data members.

---

*A5 : *

    class bank {
        private:
          string username;
          string accountnumber;
          double balance;

        public:
          bank(string name , string number = "unset", double setbalance = 0);
          void displaydata();
          void add(double a);
          void withdraw(double a);

    };

---

*A6 : * Class constructors are called when creating a new instance or calling them directly. Class destructor is called when an object dies

---

*A7 : *

    bank::bank(string name, string number , double setbalance ) {
         username = name;
         accountnumber=number;
         balance = setbalance;  
      }

---

*A8 : *

A default constructor is a constructor which can be called with no arguments (either defined with an empty parameter list, or with default arguments provided for every parameter).

If no default constructor is provided in code, the compiler will generate one automatically.

---

*A9 : *

    #ifndef STOCK_H_
    #define STOCK_H_
    class Stock
    {
      private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot() { total_val = shares * share_val; }
      public:
        Stock();
        // default constructor
        Stock(const std::string & co, long n, double pr);
        ~Stock() {}
        // do-nothing destructor
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show() const;
        const Stock & topval(const Stock & s) const;
        int numshares() const { return shares; }
        double shareval() const { return share_val; }
        double totalval() const { return total_val; }
        const string & co_name() const { return company; }
    };

---
*A10 : * `this` is a pointer available to class function members which points to the object 
       * `*this` represents the object itself.
