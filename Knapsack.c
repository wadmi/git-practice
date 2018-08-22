int n,W;
int x[MAX_N],v[MAX_N];

int rec(int i,int j){
  int res;
  if(i ==n){
    //ここ
  } else if(j < w[i]) {
    //ここ
  }else {
      res = max(rec(i + 1 , j),rec(i + 1,j - w[i]) + v[i]);
  }
    //ここ
}

void solve(){
  printf("%d\n",rec(0,w));
}
