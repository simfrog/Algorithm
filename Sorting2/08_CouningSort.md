# 08. 계수 정렬(Counting Sort)

## 1. 개념  
### '범위 조건'이 있는 경우에 한해서 굉장히 빠른 알고리즘  
### 크기를 기준으로 세는 알고리즘  
모든 데이터에 한 번씩만 접근하면 됨  
![계수정렬](https://user-images.githubusercontent.com/31130917/106113633-0ad85000-6192-11eb-9f29-6b97f1c602de.png)  
<출처 : https://devjin-blog.com/sort-algorithm-8/>  

## 2. 시간 복잡도  
모든 데이터의 크기 범위를 메모리 상에 표현할 수만 있다면  
### => 계수 정렬의 시간 복잡도는 O(N)  

## 3. 특징
다만 데이터들의 크기가 너무 클 경우 배열도 그만큼 크게 만들어야 하기 때문에 메모리 낭비가 발생할 수 있음
