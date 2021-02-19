# 20. 위상 정렬(Topology Sort)  

## 1. 개념  
### '순서가 정해져 있는 작업'을 차례로 수행해야 할 때 그 순서를 결정해주기 위해 사용하는 알고리즘  
![위상정렬예시](https://user-images.githubusercontent.com/31130917/108463133-2f22da80-72c1-11eb-98af-2b9776351aa1.jpg)  
<출처 : https://m.blog.naver.com/occidere/220921661731>  
  
## 2. 특징  
### DGA(Directed Acyclic Graph)에서만 적용 가능
####    사이클이 있는경우 수행 불가  

위상 정렬 알고리즘은 두가지 해결책을 냄  
#### 1. 현재 그래프는 위상 정렬이 가능한가  
#### 2. 위상 정렬이 가능하다면 그 결과는 무엇인가  
  
#### 구현 방법은 스택과 큐를 이용한 방식이 있으나 보통 큐를 선호  
  
## 3. 예시(큐로 구현)  
    1. 진입차수가 0인 정점을 큐에 삽입  
    2. 큐에서 원소를 꺼내 연결된 모든 간선을 제거  
    3. 간선 제거 이후 진입차수가 0이 된 정점을 큐에 삽입  
    4. 큐가 빌 때까지 2~3번 과정을 반복  
    (모든 원소를 방문하기 전 큐가 빈다면 사이클이 존재하는 것이고 모든 원소를 방문했다면 큐에서 꺼낸 순서가 위상 정렬 결과)
  
1. 각정점과 진입차수 정보 기입  
![위상정렬0](https://user-images.githubusercontent.com/31130917/108464487-9477cb00-72c3-11eb-9073-d705805862dc.PNG)  
  
2. 진입차수가 0인 정점 1을 큐에 삽입  
![위상정렬1](https://user-images.githubusercontent.com/31130917/108464549-bb360180-72c3-11eb-8bdd-586e2d6d5247.PNG)  
  
1을 큐에서 빼낸 뒤 연결되어있던 간선을 제거, 표 수정  
![위상정렬2](https://user-images.githubusercontent.com/31130917/108464596-d1dc5880-72c3-11eb-849c-95daa0a76224.PNG)  
![위상정렬2큐](https://user-images.githubusercontent.com/31130917/108464598-d30d8580-72c3-11eb-86e0-19c61fdf0fc0.PNG)  
  
3. 진입차수가 0인 새로운 정점들을 큐에 삽입  
![위상정렬3](https://user-images.githubusercontent.com/31130917/108464680-fb957f80-72c3-11eb-8643-7706644dcf88.PNG)  
  
2를 큐에서 빼낸 뒤 연결된 간선을 제거, 표 수정  
![위상정렬4](https://user-images.githubusercontent.com/31130917/108465253-043a8580-72c5-11eb-8282-f7767d4ab30f.PNG)  
  
![위장정렬5](https://user-images.githubusercontent.com/31130917/108465256-04d31c00-72c5-11eb-985d-21efd2ad432d.PNG)  
  
![위상정렬6](https://user-images.githubusercontent.com/31130917/108465535-8d51bc80-72c5-11eb-8478-7a1198289fe1.PNG)  
![위상정렬7](https://user-images.githubusercontent.com/31130917/108465540-8dea5300-72c5-11eb-911b-620961f73086.PNG)  
진입 차수가 0인 새로운 정점은 발견되지 않음  
  
![위상정렬8](https://user-images.githubusercontent.com/31130917/108465653-bffbb500-72c5-11eb-83b1-36df6e83b37f.PNG)  
![위상정렬9](https://user-images.githubusercontent.com/31130917/108465656-c0944b80-72c5-11eb-8e86-e4320308eb82.PNG)  
![위상정렬10](https://user-images.githubusercontent.com/31130917/108465658-c12ce200-72c5-11eb-91d8-e2731d06d024.PNG)  
![위상정렬11](https://user-images.githubusercontent.com/31130917/108465660-c12ce200-72c5-11eb-9b0f-0a735e2c5674.PNG)  
  
![위상정렬12](https://user-images.githubusercontent.com/31130917/108465767-f6d1cb00-72c5-11eb-8c9b-fe04c24ee98e.PNG)  
![위상정렬13](https://user-images.githubusercontent.com/31130917/108465770-f802f800-72c5-11eb-84e0-e7690367b72e.PNG)  
![위상정렬14](https://user-images.githubusercontent.com/31130917/108465772-f802f800-72c5-11eb-97d6-76381fcc5bdf.PNG)  
  
## 4. 시간 복잡도  
### => 위상 정렬의 시간 복잡도는 O(V + E)  
#### 정점의 개수 + 간선의 개수  
<출처 : https://blog.naver.com/ndb796/221236874984>