# 23. 이분 매칭(Bipartite Matching)

## 1. 개념  
### A 집단이 B 집단을 선택하는 방법에 대한 알고리즘  
#### 그래프 형태로 표현  
![그래프](https://user-images.githubusercontent.com/31130917/110294638-720bde80-8033-11eb-894d-74e42fb4e743.PNG)  
#### 효과적으로 매칭 -> 최대 매칭(MAx Matching)  
아래는 플로우로 표현  
![플로우](https://user-images.githubusercontent.com/31130917/110294642-746e3880-8033-11eb-9575-911bf9e33742.PNG)  
  
네트워크 플로우에서 BFS 방식의 에드몬드 카프 알고리즘(O(V*E^2)) 으로 풀었다면 이분 매칭에서는 DFS로 더 빠르고 효율적으로 해결  
  
![1](https://user-images.githubusercontent.com/31130917/110295207-31f92b80-8034-11eb-8007-8ce85477a4b4.PNG)  
![2](https://user-images.githubusercontent.com/31130917/110295213-33c2ef00-8034-11eb-94b5-d50b4647b65c.PNG)  
![3](https://user-images.githubusercontent.com/31130917/110295214-33c2ef00-8034-11eb-9a5c-cb2a81e1c619.PNG)  
![4](https://user-images.githubusercontent.com/31130917/110295215-345b8580-8034-11eb-9a2c-ca7629fabcbc.PNG)  
![5](https://user-images.githubusercontent.com/31130917/110295219-34f41c00-8034-11eb-9630-cabedd6bc4ef.PNG)  
![6](https://user-images.githubusercontent.com/31130917/110295223-358cb280-8034-11eb-88f8-00e3b338fefc.PNG)  
![7](https://user-images.githubusercontent.com/31130917/110295225-36254900-8034-11eb-8513-67b78398b6a9.PNG)  
<출처 : https://blog.naver.com/ndb796/221240613074>  
  
## 2. 시간 복잡도  
### => 이분 매칭의 시간 복잡도는 O(V * E)  
O(n^2)으로도 표현 가능  
가장 빠른 속도의 알고리즘은 아니지만 구현이 가장 간단