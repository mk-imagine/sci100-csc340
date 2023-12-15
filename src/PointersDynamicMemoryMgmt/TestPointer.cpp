#include <iostream>
using namespace std;

typedef struct {
  int count;
  const char* name1;
  const char** name2;
  const char** name3;
} sCount;

int main()
{
  int count = 5;
  const char** name = (const char**) malloc(sizeof(char*)*5);
  const char* names[5] = {"Joe", "James", "Mark", "Huy", "Spot"};
  name = names;
  int* pCount = &count;
  sCount* scount = (sCount*) malloc(sizeof(sCount));
  scount->count = 10;
  scount->name1 = names[0];
  scount->name2 = &names[0];
  scount->name3 = names;

  // Predict the blank.  They will either be an address or value.
  cout << "1.  The ________ of count is the same as ____. \t\t\t\t\t\tcount: \t\t\t\t\t\t\t" << count << endl;
  cout << "2.  The ________ of count is the same as ____. \t\t\t\t\t\t&count: \t\t\t\t\t\t" << &count << "\n\n";

  cout << "3.  The ________ of name is the same as ____. \t\t\t\t\t\tnames[0]: \t\t\t\t\t" << names[0] << endl;
  cout << "4.  The ________ of name is the same as ____. \t\t\t\t\t\t*names[0]: \t\t\t\t\t" << *names[0] << endl;
  cout << "5.  The ________ of name is the same as ____. \t\t\t\t\t\t*(names[0]+1): \t\t\t" << *(names[0]+1) << endl;
  cout << "6.  The ________ of name is the same as ____. \t\t\t\t\t\t&names[0]: \t\t\t\t\t" << &names[0] << endl;
  cout << "7.  The ________ of name is the same as ____. \t\t\t\t\t\t&names[0]+1: \t\t\t\t" << &names[0]+1 << "\n\n";

  cout << "8.  The ________ of pcount is the same as ____. \t\t\t\t\tpCount: \t\t\t\t\t\t" << pCount << endl;
  cout << "9.  The ________ of pcount is the same as ____. \t\t\t\t\t*pCount: \t\t\t\t\t\t" << *pCount << "\n\n";

  cout << "10. The ________ of scount is the same as ____. \t\t\t\t\tscount: \t\t\t\t\t\t" << scount << endl;
  cout << "11. The ________ of scount->count is the same as ____. \t\t&scount->count: \t\t" << &scount->count << endl;
  cout << "12. The ________ of scount->count is the same as ____. \t\tscount->count: \t\t\t" << scount->count << "\n\n";

  cout << "13. The ________ of scount->name is the same as ____. \t\t&scount->name1: \t\t" << &scount->name1 << endl;
  cout << "14. The ________ of scount->name is the same as ____. \t\tscount->name1: \t\t\t" << scount->name1 << "\n\n";
  cout << "14. The ________ of scount->name is the same as ____. \t\tscount->name1: \t\t\t" << *scount->name1 << "\n\n";

  cout << "15. The ________ of scount->name2 is the same as ____. \t\t&scount->name2: \t\t" << &scount->name2 << endl;
  cout << "16. The ________ of scount->name2 is the same as ____. \t\tscount->name2: \t\t\t" << scount->name2 << endl;
  cout << "17. The ________ of scount->name2 is the same as ____. \t\t*scount->name2: \t\t" << *scount->name2 << "\n\n";

  cout << "18. The ________ of scount->name2 is the same as ____. \t\t&scount->name2[1]: \t" << &scount->name2[1] << endl;
  cout << "19. The ________ of scount->name2 is the same as ____. \t\tscount->name2[1]: \t" << scount->name2[1] << endl;
  cout << "20. The ________ of scount->name2 is the same as ____. \t\t*scount->name2[1]: \t" << *scount->name2[1] << "\n\n";

  cout << "21. The ________ of scount->name3 is the same as ____. \t\t&scount->name3: \t\t" << &scount->name3 << endl;
  cout << "22. The ________ of scount->name3 is the same as ____. \t\tscount->name3: \t\t\t" << scount->name3 << endl;
  cout << "23. The ________ of scount->name3 is the same as ____. \t\t*scount->name3: \t\t" << *scount->name3 << "\n\n";

  cout << "24. The ________ of scount->name3 is the same as ____. \t\t&scount->name3[1]: \t" << &scount->name3[1] << endl;
  cout << "25. The ________ of scount->name3 is the same as ____. \t\tscount->name3[1]: \t" << scount->name3[1] << endl;
  cout << "26. The ________ of scount->name3 is the same as ____. \t\t*scount->name3[1]: \t" << *scount->name3[1] << endl;

  return 0;
}
