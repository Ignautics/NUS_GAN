#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;


char str[10000];
int val;

int main(){
  freopen("list_attr_celeba.txt", "r", stdin);
  freopen("label.txt", "w", stdout);
  
  for (int i = 1; i <= 41; i ++) scanf("%s", str);
  
  //load label
  for (int i = 1; i <= 5000; i ++) {
    scanf("%s", str);
    for (int j = 0; j < 40; j ++) {
      scanf("%d", &val); val = (val == -1) ? 0 : 1;
      printf("%d", val);
    }
    printf("\n");
  }

  return 0;
}
