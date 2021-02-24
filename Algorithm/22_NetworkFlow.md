# 22. 네트워크 플로우(Network Flow)  

## 1. 개념  
### 특정한 지점에서 다른 지점으로 데이터가 얼마나 많이 흐르고 있는가를 측정하는 알고리즘  
ex) 교통 체증, 네트워크 데이터 전송 등  
  
* #### 용량(Capacity)/유량(Flow)  
![용량](https://user-images.githubusercontent.com/31130917/108959082-4265e980-76b7-11eb-828b-8d4a119f0e5b.png)  
![유량](https://user-images.githubusercontent.com/31130917/108959081-4134bc80-76b7-11eb-90c7-cb0fa6696e81.PNG)  
=> A에서 D로 최대한 많은 유량을 보내려고 할 때 가장 합리적인 양은 6  
### 최대 유량(Max Flow) 문제  
  
## 2. 에드몬드 카프 알고리즘(Edmonds-Karp Algorithm)  
#### BFS를 이용  
![에드몬드1](https://user-images.githubusercontent.com/31130917/108959578-efd8fd00-76b7-11eb-8f40-25941bd42a65.PNG)  
유량(Flow)을 모두 0으로 설정  
![에드몬드2](https://user-images.githubusercontent.com/31130917/108959582-f0719380-76b7-11eb-9809-c8344daa671d.PNG)  
1->2->3->6에서 흐를 수 있는 최소 유량은 6  
![에드몬드3](https://user-images.githubusercontent.com/31130917/108959584-f10a2a00-76b7-11eb-94a9-3963447ba882.PNG)  
1->2->6에서 흐를 수 있는 최소 유량은 6, 따라서 1->2경로는 유량이 꽉참  
![에드몬드4](https://user-images.githubusercontent.com/31130917/108959586-f1a2c080-76b7-11eb-97c4-e47ca0269be5.PNG)  
![에드몬드5](https://user-images.githubusercontent.com/31130917/108959980-8b6a6d80-76b8-11eb-880b-04e79ef09c10.PNG)  
![에드몬드6](https://user-images.githubusercontent.com/31130917/108959982-8c9b9a80-76b8-11eb-8eb2-70bc6faf2143.PNG)  
### 음의 유량을 계산  
#### 최대 유량 알고리즘은 모든 가능한 경로를 다 계산해주기 위해 음의 유량도 계산  
#### 유량을 더해주는 과정에서 사실은 보이지 않는 반대로 가는 유량이 빠지고 있다고 봄  
![에드몬드7](https://user-images.githubusercontent.com/31130917/108959984-8d343100-76b8-11eb-8365-01851c901fa9.PNG)  
=> 최대 유량은 19  
  
## 3. 특징  
### 최대 유량 알고리즘은 순서가 상관 없음   
#### 남아있는 양이 1이 넘으면 계속해서 흘려 보내주면 알아서 최적화가 이루어짐  

## 4. 시간 복잡도  
### => 에드몬드 카프 알고리즘의 시간 복잡도는 O(VE^2)  
<출처 : https://blog.naver.com/ndb796/221237111220>