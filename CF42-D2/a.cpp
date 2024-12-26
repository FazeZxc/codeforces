#include<iostream>
#include<string>

int main(){
  int n ; 
  std::cin >> n;
  std::string team1;
  std::string team2;

  int goal1 = 0;
  int goal2 = 0;

  std::string tmp;
  while(n--){
    std::cin >> tmp;
    if(tmp != team1 && tmp != team2 && (goal1 == 0)){
      team1 = tmp;
    }else if(tmp != team1 && (goal2==0)){
      team2 = tmp;
    }
    if(tmp == team1){
      goal1++;
    }else if(tmp == team2){
      goal2++;
    }
  }

  if(goal1 > goal2){
    std::cout << team1;
  }else{
    std::cout << team2;
  }

  return 0;
}
