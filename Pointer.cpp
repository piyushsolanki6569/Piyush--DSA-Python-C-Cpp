// 1.
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int *p = &x;                            Answer:25 25
    *p = *p + 15;
    cout << x << " " << *p << endl;
    return 0;
}

// 2.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int *p = arr;
    cout << *p << " ";                    Answer:5 15 10
    cout << *(p + 2) << " ";
    p++;
    cout << *p << endl;
    return 0;
}

// 3.
#include <iostream>
using namespace std;
int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int *p = arr;      
    cout << *p << " ";                       Answer:5 15 10
    cout << *(p + 2) << " ";
    p++;
    cout << *p << endl;
    return 0;
}

// 4.
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int y = 20;
    int *p = &x;                  Answer:30 10
    int *q = &y;
    *p = *p + *q;
    *q = *p - *q;
    cout << x << " " << y << endl;
    return 0;
}

// 5.
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40};
    int *p = arr + 1;
    cout << *p << " ";
    p += 2;
    cout << *p << " ";             Answer:20 40 30
    p--;
    cout << *p << endl;
    return 0;
}

// 6.
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int *p = &x;
    int *q = p;
    *p = 15;                                      Answer:25 25 25
    *q = *q + 10;
    cout << x << " " << *p << " " << *q << endl;
    return 0;
}

// 7.
#include <iostream>
using namespace std;
int main() {
    int x = 50;
    int *p = &x;
    int **q = &p;
    **q = 100;
    cout << x << " ";                   Answer:100 100 100
    cout << *p << " ";
    cout << **q << endl;
    return 0;
}

// 8.
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    cout << *p << " ";
    ++p;
    ++p;
    cout << *p << " ";                  Answer:10 30 20
    --p;
    cout << *p << endl;
    return 0;
}

// 9.
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    int *q = arr + 4;
    cout << *p + *q << " ";
    p++;
    q--;
    cout << *p + *q << " ";                                Answer:60 60 60            
    p++;
    q--;
    cout << *p + *q << endl;
    return 0;
}

// 10.
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int *p = &x;
    int **q = &p;                    Answer:30 30 30
    *p = *p + 5;
    **q = **q * 2;                       
    cout << x << " ";
    cout << *p << " ";
    cout << **q << endl;
    return 0;
}

// 11.
#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 20;
    int *p = &a;
    int **q = &p;
    cout << **q << " ";
    *q = &b;
    cout << **q << " ";                       Answer:10 20 10 50
    **q = 50;
    cout << a << " " << b << endl;
    return 0;
}

// 12.
#include <iostream>
using namespace std;
class Number {
public:
    int x,y = 0;
    void change(int x) {                       
        y = x + 10;
    }
};
int main() {
    Number n;
    Number *p = &n;
    p->x = 20;
    p->change(p->y);
    cout << n.x << " " << p->y;             Answer:20 10
    return 0;
}

// 13.
#include <iostream>
using namespace std;
class Number {
public:
    int x;
    Number(int v) {
        x = v;
    }
};
int main() {
    Number a(10);
    Number b(20);
    Number *p = &a;
    Number **q = &p;
    *q = &b;
    (*q)->x = 50;
    cout << a.x << " " << b.x << " " << p->x;           Answer:10 50 50
    return 0;
}

// 14.
#include <iostream>
using namespace std;
class Test {
public:
    int x;
    Test(int x) {
        this->x = x;
    }
    void change(Test *p) {
        p = this;                                 Answer:100 20 20
        p->x = 100;
    }
};
int main() {
    Test a(10);
    Test b(20);
    Test *ptr = &b;
    a.change(ptr);
    cout << a.x << " " << b.x << " " << ptr->x;
    return 0;
}

// 15.
#include <iostream>
using namespace std;
class Test {
public:
    int x;
    Test(int x) {
        this->x = x;
    }
    void modify(Test **p) {
        (*p)->x += 10;
        *p = this;
        (*p)->x += 20;
    }
};
int main() {
    Test a(10);
    Test b(100);
    Test *ptr = &b;                                        Answer:30 110 30
    a.modify(&ptr);
    cout << a.x << " " << b.x << " " << ptr->x;
    return 0;
}

// 16.
#include <iostream>
using namespace std;
class Test {
public:
    int x;
    Test(int x) {
        this->x = x;
    }
    void process(Test *p, Test &r) {
        p->x += 10;
        r.x += 20;
        p = &r;
        p->x += 30;
    }
};
int main() {
    Test a(10);
    Test b(100);
    Test *ptr = &a;
    b.process(ptr, a);
    cout << a.x << " " << b.x << " " << ptr->x;             Answer:70 100 70
    return 0;
}
