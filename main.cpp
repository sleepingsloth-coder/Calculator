#include <cmath>
#include <iostream>
#include <limits>
#include <unistd.h>
#include <vector>
#define pi 3.14159265
using namespace std;
//------------function prototype------------
void choose1();
void choose2();
void choose3();
void choose4();
void menu();
void menu1();
void menu2();
void menu3();
void menu4();
void menu1_1();
void menu1_2();
void menu1_3();
void menu2_4();
void menu3_1();
void menu3_2();
void menu3_3();
void menu3_4();
int choice();
void task1_1();
void task1_2();
void task1_3();
void task2_1();
void task2_2();
void task2_3();
void task2_4();
void task2_5();
void task3_1();
void task3_2();
void task3_3();
void task3_4();
void task4_1();
void task4_2();
void difference();
void ratio();
double differencesum();
double ratiosum();
double d();
void r();
int arrangement(int, int);
int combination(int, int);
int factorial(int);
int groupandpile1(int, int, int *, int *, int *);
void groupandpile2(int, int, int, int);
void generatecombination(string *, string *, int, int, int &);
int getunion(vector<int>, int *, int, int);
void sidetoangle1();
void sidetoangle2();
void angletoside1();
void angletoside2();
void getr();
void twosidegetarea();
void getarea();
void createchoice(int, int);
int createnumber(int, int);

//--------------------main--------------------
int main() {
  cout << "大家好，這是一個學資計算機\n希望可以把大家從學資地獄裡超渡" << endl;
  while (true) {
    menu();
    int ch = choice();
    if (ch == 1) {
      choose1();
      sleep(1);
    } else if (ch == 2) {
      choose2();
      sleep(1);
    } else if (ch == 3) {
      choose3();
      sleep(1);
    } else if (ch == 4) {
      choose4();
      sleep(1);
    } else if (ch == 0) {
      cout << "如果你覺得學資計算機很好用，你可以\n1. "
              "加入或改寫內容讓他更好\n2. "
              "追蹤哀居帳號@team_6191_"
              "frc，這是一隻非常棒的隊伍，需要你的關注\n3. "
              "在心裡祝福作者上想要的科系"
           << endl;
      cout << "再見啦\n雖然學資計算機很方便，但還是要認真準備段考喔!" << endl;
      break;
    } else {
      cout << "請輸入正確的數字" << endl;
      sleep(1);
      continue;
    }
  }
  return 0;
}

//------------------choose------------------
void choose1() {
  while (true) {
    menu1();
    int ch = choice();
    if (ch == 1) {
      task1_1();
      sleep(1);
    } else if (ch == 2) {
      task1_2();
      sleep(1);
    } else if (ch == 3) {
      task1_3();
      sleep(1);
    } else if (ch == 0) {
      cout << "回到主選單" << endl;
      break;
    } else {
      cout << "請輸入正確的數字" << endl;
      sleep(1);
      continue;
    }
  }
}
//------------------------------------------
void choose2() {
  while (true) {
    menu2();
    int ch = choice();
    if (ch == 1) {
      task2_1();
      sleep(1);
    } else if (ch == 2) {
      task2_2();
      sleep(1);
    } else if (ch == 3) {
      task2_3();
      sleep(1);
    } else if (ch == 4) {
      task2_4();
      sleep(1);
    } else if (ch == 5) {
      task2_5();
      sleep(1);
    } else if (ch == 0) {
      cout << "回到主選單" << endl;
      break;
    } else {
      cout << "請輸入正確的數字" << endl;
      sleep(1);
      continue;
    }
  }
}
//------------------------------------------
void choose3() {
  while (true) {
    menu3();
    int ch = choice();
    if (ch == 1) {
      task3_1();
      sleep(1);
    } else if (ch == 2) {
      task3_2();
      sleep(1);
    } else if (ch == 3) {
      task3_3();
      sleep(1);
    } else if (ch == 4) {
      task3_4();
      sleep(1);
    } else if (ch == 0) {
      cout << "回到主選單" << endl;
      break;
    } else {
      cout << "請輸入正確的數字" << endl;
      sleep(1);
      continue;
    }
  }
}
//------------------------------------------
void choose4() {
  while (true) {
    menu4();
    int ch = choice();
    if (ch == 1) {
      task4_1();
      sleep(1);
    } else if (ch == 2) {
      task4_2();
      sleep(1);
    } else if (ch == 0) {
      cout << "回到主選單" << endl;
      break;
    } else {
      cout << "請輸入正確的數字" << endl;
      sleep(1);
      continue;
    }
  }
}
//------------------------------------------
int choice() {
  int ans;
  cin >> ans;
  return ans;
}

//-------------------menu-------------------
void menu() {
  cout << "---------------------------------" << endl;
  cout << "歡迎使用學資計算機" << endl;
  cout << "---------------------------------" << endl;
  cout << "1. 數列級數" << endl;
  cout << "2. 排列組合" << endl;
  cout << "3. 三角比" << endl;
  cout << "4. 隨便亂猜" << endl;
  cout << "0. 結束" << endl;
  return;
}
//------------------------------------------
void menu1() {
  cout << "---------------------------------" << endl;
  cout << "1. 列數列" << endl;
  cout << "2. 級數和" << endl;
  cout << "3. 公差/比" << endl;
  cout << "0. 結束" << endl;
  cout << "---------------------------------" << endl;
  return;
}
//------------------------------------------
void menu2() {
  cout << "---------------------------------" << endl;
  cout << "1. 排列(p)" << endl;
  cout << "2. 組合(c)" << endl;
  cout << "3. 階乘(!)" << endl;
  cout << "4. 分組分堆" << endl;
  cout << "5. 取捨原理(取聯集)" << endl;
  cout << "0. 結束" << endl;
  cout << "---------------------------------" << endl;
  return;
}
//------------------------------------------
void menu3() {
  cout << "---------------------------------" << endl;
  cout << "1. 三角函數" << endl;
  cout << "2. 正弦定理" << endl;
  cout << "3. 餘弦定理" << endl;
  cout << "4. 面積" << endl;
  cout << "0. 結束" << endl;
  cout << "---------------------------------" << endl;
  return;
}
//------------------------------------------
void menu4() {
  cout << "---------------------------------" << endl;
  cout << "1. 猜選項" << endl;
  cout << "2. 猜數字" << endl;
  cout << "0. 結束" << endl;
  cout << "---------------------------------" << endl;
  return;
}
//------------------------------------------
void menu1_1() {
  cout << "---------------------------------" << endl;
  cout << "1. 等差數列" << endl;
  cout << "2. 等比數列" << endl;
  cout << "---------------------------------" << endl;
  return;
}
//------------------------------------------
void menu1_2() {
  cout << "---------------------------------" << endl;
  cout << "1. 等差級數和" << endl;
  cout << "2. 等比級數和" << endl;
  cout << "---------------------------------" << endl;
  return;
}
//------------------------------------------
void menu1_3() {
  cout << "---------------------------------" << endl;
  cout << "1. 公差" << endl;
  cout << "2. 公比" << endl;
  cout << "---------------------------------" << endl;
  return;
}
//------------------------------------------
void menu2_4() {
  cout << "---------------------------------" << endl;
  cout << "1. 分組" << endl;
  cout << "2. 分堆" << endl;
  cout << "---------------------------------" << endl;
  return;
}
//------------------------------------------
void menu3_1() {
  cout << "---------------------------------" << endl;
  cout << "1. sin(正弦)" << endl;
  cout << "2. cos(餘弦)" << endl;
  cout << "3. tan(正切)" << endl;
  cout << "4. cot(餘切)" << endl;
  cout << "5. sec(正割)" << endl;
  cout << "6. csc(餘割)" << endl;
  cout << "---------------------------------" << endl;
  return;
}
//------------------------------------------
void menu3_2() {
  cout << "---------------------------------" << endl;
  cout << "1. 化邊為角" << endl;
  cout << "2. 化角為邊" << endl;
  cout << "3. 求外接圓半徑" << endl;
  cout << "---------------------------------" << endl;
  return;
}
//------------------------------------------
void menu3_3() {
  cout << "---------------------------------" << endl;
  cout << "1. 兩邊一角求對邊" << endl;
  cout << "2. 三邊長求角" << endl;
  cout << "---------------------------------" << endl;
  return;
}
//------------------------------------------
void menu3_4() {
  cout << "---------------------------------" << endl;
  cout << "1. 兩邊一角" << endl;
  cout << "2. 三邊" << endl;
  cout << "---------------------------------" << endl;
  return;
}

//------------------task 1------------------
void task1_1() {
  menu1_1();
  int ch = choice();
  if (ch == 1) {
    difference();
  } else if (ch == 2) {
    ratio();
  } else {
    cout << "請輸入正確的數字" << endl;
  }
  cout << endl;
}
//------------------------------------------
void task1_2() {
  menu1_2();
  int ch = choice();
  if (ch == 1) {
    cout << "等差級數和為" << differencesum() << endl;
  } else if (ch == 2) {
    cout << "等比級數和為" << ratiosum() << endl;
  } else {
    cout << "請輸入正確的數字" << endl;
  }
  cout << endl;
}
//------------------------------------------
void task1_3() {
  menu1_3();
  int ch = choice();
  if (ch == 1) {
    cout << "公差為" << d() << endl;
  } else if (ch == 2) {
    r();
  } else {
    cout << "請輸入正確的數字" << endl;
  }
  cout << endl;
}

//------------------task 2------------------
void task2_1() {
  int a, b;
  cout << "P(a,b)，輸入a b(以空格隔開):";
  cin >> a >> b;
  if (a >= b) {
    cout << "P(" << a << "," << b << ")= " << arrangement(a, b) << endl;
  } else {
    cout << "a不能小於b" << endl;
  }
  cout << endl;
  return;
}
//------------------------------------------
void task2_2() {
  int a, b;
  cout << "C(a,b)，輸入a b(以空格隔開):" << endl;
  cin >> a >> b;
  if (a >= b) {
    cout << "C(" << a << "," << b << ")= " << combination(a, b) << endl;
  } else {
    cout << "a不能小於b" << endl;
  }
  cout << endl;
  return;
}
//------------------------------------------
void task2_3() {
  int a;
  cout << "a!，輸入a:" << endl;
  cin >> a;
  cout << a << "!=" << factorial(a) << endl;
  cout << endl;
  return;
}
//------------------------------------------
void task2_4() {
  menu2_4();
  int ch = choice();
  int a, b, c;
  if (ch == 2) {
    cout << "輸入共有幾個物品要分堆:";
    cin >> a;
    cout << "輸入共要分幾堆:";
    cin >> b;
    cout << "每堆數量是否相同(是輸入1，不是輸入0):";
    cin >> c;
  }
  if (ch == 1) {
    cout << "輸入共有幾個物品要分組:";
    cin >> a;
    cout << "輸入共要分幾組:";
    cin >> b;
    cout << "每組數量是否相同(是輸入1，不是輸入0):";
    cin >> c;
  }
  groupandpile2(a, b, c, ch);
  cout << endl;
  return;
}
//------------------------------------------
void task2_5() {
  int numstring;
  cout << "請輸入要取聯集的種類數:";
  cin >> numstring;
  string strings1[numstring];
  string strings2[numstring];
  cout << "輸入元素種類(以空格隔開，ex:國文 英文 數學):";
  for (int i = 0; i < numstring; i++) {
    cin >> strings1[i];
  }
  int sum1 = 0;
  for (int i = 0; i < numstring; i++) {
    int a = 0;
    cout << "取" << strings1[i] << "的個數:";
    cin >> a;
    sum1 += a;
  }
  vector<int> numsum1(numstring, 0);
  for (int element = 2; element <= numstring; element++) {
    int sum = 0;
    generatecombination(strings1, strings2, numstring, element, sum);
    numsum1[element - 1] = sum;
  }
  int numsum2[numstring];
  cout << "聯集個數為" << getunion(numsum1, numsum2, numstring, sum1) << endl;
  cout << endl;
}

//------------------task 3------------------
void task3_1() {
  menu3_1();
  int ch = choice();
  double a, b;
  cout << "輸入角度:";
  cin >> a;
  b = a * pi / 180;
  if (ch == 1) {
    cout << "sin(" << a << ")=" << sin(b) << endl;
  } else if (ch == 2) {
    cout << "cos(" << a << ")=" << cos(b) << endl;
  } else if (ch == 3) {
    cout << "tan(" << a << ")=" << tan(b) << endl;
  } else if (ch == 4) {
    cout << "cot(" << a << ")=" << 1.0 / tan(b) << endl;
  } else if (ch == 5) {
    cout << "sec(" << a << ")=" << 1.0 / sin(b) << endl;
  } else if (ch == 6) {
    cout << "csc(" << a << ")=" << 1.0 / cos(b) << endl;
  } else {
    cout << "請輸入正確的數字" << endl;
  }
  cout << endl;
}
//------------------------------------------
void task3_2() {
  menu3_2();
  int ch = choice();
  if (ch == 1) {
    sidetoangle1();
  } else if (ch == 2) {
    angletoside1();
  } else if (ch == 3) {
    getr();
  } else {
    cout << "請輸入正確的數字" << endl;
  }
  cout << endl;
}
//------------------------------------------
void task3_3() {
  menu3_3();
  int ch = choice();
  if (ch == 1) {
    angletoside2();
  } else if (ch == 2) {
    sidetoangle2();
  } else {
    cout << "請輸入正確的數字" << endl;
  }
  cout << endl;
}
//------------------------------------------
void task3_4() {
  menu3_4();
  int ch = choice();
  if (ch == 1) {
    twosidegetarea();
  } else if (ch == 2) {
    getarea();
  } else {
    cout << "請輸入正確的數字" << endl;
  }
  cout << endl;
}
//------------------------------------------
void task4_1() {
  int n, m;
  cout << "輸入共幾種選擇(上限為100):";
  cin >> n;
  cout << "輸入要隨機取幾個種選擇(若不指定則輸入0):";
  cin >> m;
  createchoice(n, m);
  cout << endl;
}
//------------------------------------------
void task4_2() {
  int a, b;
  cout << "輸入隨機生成數字的上限(有包含):";
  cin >> a;
  cout << "輸入隨機生成數字的下限:";
  cin >> b;
  cout << "隨機生成的數字是" << createnumber(a, b) << endl;
  cout << endl;
}

//------------functiondefinition------------
void difference() {
  double A1, d;
  int n;
  cout << "輸入首項:";
  cin >> A1;
  cout << "輸入公差:";
  cin >> d;
  cout << "輸入項數:";
  cin >> n;
  cout << "此等差數列為:";
  for (int i = 0; i < n; i++) {
    cout << A1 << " ";
    A1 += d;
  }
}
//------------------------------------------
void ratio() {
  double A1, r;
  int n;
  cout << "輸入首項:";
  cin >> A1;
  cout << "輸入公比:";
  cin >> r;
  cout << "輸入項數:";
  cin >> n;
  cout << "此等比數列為:";
  for (int i = 0; i < n; i++) {
    cout << A1 << " ";
    A1 *= r;
  }
}
//------------------------------------------
double differencesum() {
  double A1, d;
  int n;
  cout << "輸入首項:";
  cin >> A1;
  cout << "輸入公差:";
  cin >> d;
  cout << "輸入項數:";
  cin >> n;
  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += A1;
    A1 += d;
  }
  return sum;
}
//------------------------------------------
double ratiosum() {
  double A1, r;
  int n;
  cout << "輸入首項:";
  cin >> A1;
  cout << "輸入公比:";
  cin >> r;
  cout << "輸入項數:";
  cin >> n;
  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += A1;
    A1 *= r;
  }
  return sum;
}
//------------------------------------------
double d() {
  double A1, An;
  int n;
  cout << "輸入首項:";
  cin >> A1;
  cout << "輸入末項:";
  cin >> An;
  cout << "輸入項數:";
  cin >> n;
  double d = (An - A1) / (n - 1);
  return d;
}
//------------------------------------------
void r() {
  double A1, An;
  int n;
  cout << "輸入首項:";
  cin >> A1;
  cout << "輸入末項:";
  cin >> An;
  cout << "輸入項數:";
  cin >> n;
  double r = pow((An / A1), 1.0 / (n - 1));
  if ((n - 1) % 2 == 0) {
    cout << "公比為" << r << "或" << -r << endl;
  } else {
    cout << "公比為" << r << endl;
  }
  cout << endl;
}
//------------------------------------------
int arrangement(int a, int b) {
  int x = 1, y = 1;
  for (int i = 1; i <= a; i++) {
    x = x * i;
  }
  for (int j = 1; j <= a - b; j++) {
    y = y * j;
  }
  return x / y;
}
//------------------------------------------
int combination(int a, int b) {
  int x = 1, y = 1, z = 1;
  for (int i = 1; i <= a; i++) {
    x = x * i;
  }
  for (int j = 1; j <= b; j++) {
    y = y * j;
  }
  for (int k = 1; k <= a - b; k++) {
    z = z * k;
  }
  return x / (y * z);
}
//------------------------------------------
int factorial(int a) {
  int i, x = 1;
  for (i = 1; i <= a; i++) {
    x = x * i;
  }
  return x;
}
//------------------------------------------
int groupandpile1(int thing, int group, int *number1, int *number2,
                  int *number3) {
  int result = 1;
  int repeat = 1;
  int sum = 0;
  for (int i = 0; i < group; i++) {
    number2[i] = number1[i];
    number3[i] = number1[i];
  }
  for (int i = 0; i < group; i++) {
    if (sum != 0) {
      repeat *= factorial(sum);
      sum = 0;
    }
    for (int t = 0; t < group; t++) {
      if (number2[i] == number3[t]) {
        sum++;
        number3[t] = 0;
      }
    }
    result *= combination(thing, number2[i]);
    thing -= number2[i];
  }
  return result / repeat;
}
//------------------------------------------
void groupandpile2(int a, int b, int c, int ch) {
  int number1[b];
  int number2[b];
  int number3[b];
  int d;
  if (c == 0) {
    cout << "輸入每堆/組數量(以空格隔開，ex:分兩人兩組三人一組，輸入3 2 2或2 3 "
            "2或2 2 3):";
    for (int i = 0; i < b; i++) {
      cin >> number1[i];
    }
  }
  if (c == 1) {
    d = a / b;
    for (int i = 0; i < b; i++) {
      number1[i] = d;
    }
  }
  if (ch == 2) {
    cout << "共有" << groupandpile1(a, b, number1, number2, number3)
         << "種分堆方法" << endl;
  }
  if (ch == 1) {
    cout << "共有"
         << groupandpile1(a, b, number1, number2, number3) * factorial(b)
         << "種分組方法" << endl;
  }
}
//------------------------------------------
void generatecombination(string *strings1, string *strings2, int numstring,
                         int element, int &sum) {
  int indice[element];
  for (int i = 0; i < numstring; i++) {
    strings2[i] = strings1[i];
  }
  for (int i = 0; i < element; i++) {
    indice[i] = i;
  }
  while (true) {
    for (int i = 0; i < element; i++) {
      if (i == 0) {
        cout << "取" << strings2[indice[i]] << "和";
      } else if (i == element - 1) {
        cout << strings2[indice[i]] << "的交集:";
      } else {
        cout << strings2[indice[i]] << "和";
      }
    }
    int input;
    cin >> input;
    sum += input;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int i = element - 1;
    while (i >= 0 && indice[i] == numstring - element + i) {
      i--;
    }
    if (i < 0) {
      break;
    }
    indice[i]++;
    for (int j = i + 1; j < element; j++) {
      indice[j] = indice[j - 1] + 1;
    }
  }
}
//------------------------------------------
int getunion(vector<int> numsum1, int *numsum2, int numstring, int sum1) {
  for (int i = 0; i < numstring; i++) {
    numsum2[i] = numsum1[i];
  }
  int sum2 = 0;
  for (int i = 0; i < numstring; i++) {
    if (i % 2 == 0) {
      sum2 += numsum1[i];
    } else {
      sum2 -= numsum1[i];
    }
  }
  sum2 += sum1;
  return sum2;
}
//------------------------------------------
void sidetoangle1() {
  double a, b, r;
  cout << "輸入其中一邊的邊長:";
  cin >> a;
  cout << "輸入外接圓半徑:";
  cin >> r;
  b = asin(a / (r * 2));
  cout << "其對應角的角度為" << b * (180 / pi) << endl;
}
//------------------------------------------
void angletoside1() {
  double a, r, b;
  cout << "輸入其中一個角的角度:";
  cin >> a;
  cout << "輸入外接圓半徑:";
  cin >> r;
  b = a * pi / 180;
  cout << "其對應邊的邊長為" << 2 * r * sin(b) << endl;
}
//------------------------------------------
void getr() {
  double a, b, c;
  cout << "輸入其中一個角的角度:";
  cin >> a;
  cout << "輸入其對應邊的邊長:";
  cin >> c;
  b = a * pi / 180;
  cout << "外接圓半徑為" << c / (2 * sin(b)) << endl;
}
//------------------------------------------
void sidetoangle2() {
  double a, b, c, d;
  cout << "輸入要求其對應角的邊長:";
  cin >> a;
  cout << "輸入另外兩邊長(以空格隔開):";
  cin >> b >> c;
  d = (b * b + c * c - a * a) / (2 * b * c);
  cout << "角度為" << acos(d) * (180 / pi) << endl;
}
//------------------------------------------
void angletoside2() {
  double a, b, c, d, e;
  cout << "輸入兩邊長(以空格隔開):";
  cin >> a >> b;
  cout << "輸入此兩邊夾的角度:";
  cin >> c;
  d = c * pi / 180;
  e = a * a + b * b - 2 * a * b * cos(d);
  cout << "其對應邊的邊長為" << sqrt(e) << endl;
}
//------------------------------------------
void twosidegetarea() {
  double a, b, c, d;
  cout << "輸入兩邊長(以空格隔開):";
  cin >> a >> b;
  cout << "輸入此兩邊夾的角度:";
  cin >> c;
  d = c * pi / 180;
  cout << "面積為" << 0.5 * a * b * sin(d) << endl;
}
//------------------------------------------
void getarea() {
  double a, b, c;
  cout << "輸入三邊長(以空格隔開):";
  cin >> a >> b >> c;
  double s, area;
  s = (a + b + c) / 2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));
  cout << "面積為" << area << endl;
}
//------------------------------------------
void createchoice(int n, int m) {
  srand(time(NULL));
  if (m == 0) {
    m = rand() % (n + 1);
  }
  cout << "輸入選擇名稱(以空格隔開，ex:A B C D E):";
  string strings[100];
  for (int i = 0; i < n; i++) {
    cin >> strings[i];
  }
  int selected[100] = {0};
  for (int i = 0; i < m; i++) {
    int k;
    while (true) {
      k = rand() % n;
      if (selected[k] == 0) {
        break;
      } else {
        continue;
      }
    }
    cout << strings[k];
    selected[k] = 1;
  }
}
//------------------------------------------
int createnumber(int a, int b) {
  int n;
  srand(time(NULL));
  n = b + rand() % (a - b + 1);
  return n;
}
