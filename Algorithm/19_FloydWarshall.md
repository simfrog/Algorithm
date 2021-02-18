# 19. 플로이드 와샬 알고리즘(Floyd Warshall Alogorithm)  

## 1. 개념  
### 모든 정점에서 모든 정점으로의 최단 경로를 알려줌  
다이나믹 프로그래밍 알고리즘 중 하나  
  
    다익스트라 알고리즘 -> 가장 적은 비용을 하나씩 선택  
    플로이드 와샬 알고리즘 -> 거쳐가는 정점 기준  
  
## 2. 예시  
![플로이드그래프](https://user-images.githubusercontent.com/31130917/108345692-ed8f2280-7221-11eb-8c8a-77a23c3de36c.PNG)  
![이차원배열](https://user-images.githubusercontent.com/31130917/108345699-eec04f80-7221-11eb-8e60-7f11770dfe16.PNG)  
위 테이블은 현재까지 계산된 최소비용을 나타냄  
  
1. 노드 1을 거쳐가는 경우  
![1-1](https://user-images.githubusercontent.com/31130917/108345697-eec04f80-7221-11eb-831e-de8a8b171506.PNG)  
  
아래의 두 식을 반복  
### X에서 Y로 가는 최소 비용 VS X에서 노드1로 가는 비용 + 노드 1에서 Y로 가는 비용  
  
2->3 vs 2->1 + 1->3 => 9 vs 7 + 무한 ==> 9  
2->4 vs 2->1 + 1->4 => 무한 vs 7 + 8 ==> 15  
3->2 vs 3->1 + 1->2 => 무한 vs 2 + 5 ==> 7  
3->4 vs 3->1 + 1->4 => 4 vs 2 + 8 ==> 4  
4->2 vs 4->1 + 1->2 => 무한 vs 무한 + 5 ==> 무한  
4->3 vs 4->1 + 1->3 => 3 vs 무한 + 무한 ==> 3  
  
![1-2](https://user-images.githubusercontent.com/31130917/108345696-ee27b900-7221-11eb-961c-49f2ef2a9bdf.PNG)  
  
2. 노드 2를 거쳐가는 경우  
![2](https://user-images.githubusercontent.com/31130917/108352960-e9b3ce00-722a-11eb-85f8-4a2f9dfde1fd.PNG)  
  
3. 노드 3을 거쳐가는 경우  
![3](https://user-images.githubusercontent.com/31130917/108352959-e91b3780-722a-11eb-8217-be98620c31c8.PNG)  
  
4. 노드 4를 거쳐가는 경우  
![4](https://user-images.githubusercontent.com/31130917/108352958-e882a100-722a-11eb-8b6c-1ac6b040343a.PNG)  
<출처 : https://blog.naver.com/ndb796/221234427842>