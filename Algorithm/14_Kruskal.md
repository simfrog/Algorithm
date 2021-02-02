# 18. 크루스칼 알고리즘(Kruskal Algorithm)  

## 1. 개념  
### 가장 적은 비용으로 모든 노드를 연결하기 위해 사용하는 알고리즘  
### 최소 비용 신장 트리 만들기  
ex) 각 도시를 최소한의 비용으로 도로를 이용해 연결할 때  
  
* 노드 = 정점 = 도시   
* 간선 = 거리 = 비용  
![그래프용어](https://user-images.githubusercontent.com/31130917/106568925-48185580-6577-11eb-81d1-b974a287e4d5.png)  
<출처 : https://m.post.naver.com/viewer/postView.nhn?volumeNo=17146229&memberNo=1085064>  
  
## 2. 구현 방법  
    1. 정렬된 순서에 맞게 그래프에 포함시킨다.  
    2. 포함시키기 정에는 사이클 테이블을 확인한다.  
    3. 사이클을 형성하는 경우 간선을 포함하지 않는다.  
  
아래와 같이 빨간색으로 연결된 노드들은 사이클이 형성된 것  
![사이클](https://user-images.githubusercontent.com/31130917/106569390-caa11500-6577-11eb-864f-3eae3e684e1f.png)  
<출처 : https://www.pngwing.com/ko/free-png-mrdrk>  
### 최소 비용 신장 트리에서는 사이클이 발생하면 안됨  
#### 사이클 발생 여부는 Union-Find 알고리즘을 적용  
  
![구현1](https://user-images.githubusercontent.com/31130917/106573526-1bffd300-657d-11eb-8ee7-0cf0ab17f80e.PNG)  
![구현2](https://user-images.githubusercontent.com/31130917/106573532-1c986980-657d-11eb-8fed-e4d0cb13360b.PNG)  
![구현3](https://user-images.githubusercontent.com/31130917/106573533-1d310000-657d-11eb-9783-cbae2c8da677.PNG)  
![구현4](https://user-images.githubusercontent.com/31130917/106573536-1d310000-657d-11eb-9ceb-1e52dfda1319.PNG)  
![구현5](https://user-images.githubusercontent.com/31130917/106573539-1dc99680-657d-11eb-93a1-fe91ab582329.PNG)  
![구현6](https://user-images.githubusercontent.com/31130917/106573541-1dc99680-657d-11eb-912c-802bcc3197ae.PNG)  
![구현7](https://user-images.githubusercontent.com/31130917/106573544-1e622d00-657d-11eb-9708-349c283492f7.PNG)  
![구현8](https://user-images.githubusercontent.com/31130917/106573546-1e622d00-657d-11eb-9169-28b43fc1a23a.PNG)  
<출처 : https://blog.naver.com/ndb796/221230994142>  
  
## 3. 시간 복잡도  
크루스칼 알고리즘 = 정렬 알고리즘 + Union-Find 알고리즘  
### => 크루스칼 알고리즘의 시간 복잡도는 정렬 알고리즘과 동일