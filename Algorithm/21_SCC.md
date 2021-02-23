# 21. 강한 결합 요소(Stringly Connected Component)  

## 1. 개념  
### 강하게 결합된 정점 집합(SCC)  
#### 같은 SCC에 속하는 두 정점은 서로 도달이 가능  
![scc](https://user-images.githubusercontent.com/31130917/108849438-7abce780-7625-11eb-8cc4-1779710ca97c.png)  
  
* 특징  
#### 1. 사이클이 발생하는 경우 무조건 SCC에 해당  
#### 2. 방향 그래프일 때만 의미가 있음(무방향 그래프는 무조건 SCC)  
#### 3. 부모로 돌아올 수 있어야 SCC 성립  
  
SCC를 추출하는 대표적인 알고리즘은 코사라주 알고리즘(Kosaraju's Algorithm)과 타잔 알고리즘(Tarjan's Algorithm)이 있음  
  
## 2. 타잔 알고리즘(Tarjan's Algorithm)  
#### 모든 정점에 대해 DFS를 수행하여 SCC를 찾는 알고리즘  
  
![scc1](https://user-images.githubusercontent.com/31130917/108850454-befcb780-7626-11eb-8cf3-d75e21522770.png)  
![scc2](https://user-images.githubusercontent.com/31130917/108850455-bf954e00-7626-11eb-9a26-c16ef618c379.PNG)  
![scc3](https://user-images.githubusercontent.com/31130917/108850457-c02de480-7626-11eb-814a-b33645df3b74.PNG)  
![scc4](https://user-images.githubusercontent.com/31130917/108850460-c0c67b00-7626-11eb-8e17-827f5c5a633a.png)  
![scc5](https://user-images.githubusercontent.com/31130917/108850463-c0c67b00-7626-11eb-91a9-48db607c9d45.PNG)  
![scc6](https://user-images.githubusercontent.com/31130917/108850465-c15f1180-7626-11eb-94dd-4f492356ecf7.PNG)  
  
![scc7](https://user-images.githubusercontent.com/31130917/108850468-c1f7a800-7626-11eb-920a-3afa4968545f.PNG)  
![scc8](https://user-images.githubusercontent.com/31130917/108850471-c1f7a800-7626-11eb-9588-bd609c2b09ed.PNG)  
![scc9](https://user-images.githubusercontent.com/31130917/108850472-c2903e80-7626-11eb-9018-975ac6e59151.PNG)  
![scc10](https://user-images.githubusercontent.com/31130917/108850475-c328d500-7626-11eb-9863-2eb356f781a8.PNG)  
![scc11](https://user-images.githubusercontent.com/31130917/108850477-c328d500-7626-11eb-9fba-8b190cfe41a0.PNG)  
  
## 3. 시간 복잡도  
SCC는 그 자체로는 큰 의미가 없지만  
#### 위상 정렬과 함께 생각해보았을 때 큰 의미 있음  
#### SCC들을 기준으로 하여 위상 정렬을 수행할 수 있음  
### => 타잔 알고리즘의 시간 복잡도는 위상 정렬과 동일  
<출처 : https://blog.naver.com/ndb796/221236952158>