define MAX_N = 100;
int n,W;
int x[MAX_N],v[MAX_N];



int rec(int i,int j){
  //i番目以降の品物から重さの総和がj以下となるよう選ぶ
  int res;
  if(i ==n){
    //もう品物が　残っていない
    res=0;
  } else if(j < w[i]) {
    //この品物は入らない
    res=rec(i+1,j);
  }else {
    //入れない場合と入れる場合を両方試す
      res = max(rec(i + 1 , j),rec(i + 1,j - w[i]) + v[i]);
  }
    return res;
}

void solve(){
  printf("%d\n",rec(0,W));
}
