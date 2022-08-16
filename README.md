# algoStudy
Algorithm in CPP

## HW2

합이 같은 부분 집합 구하기 <a href="https://github.com/npole0103/algoStudy/blob/main/HW2_2017203035.pdf">REPORT</a>

DP, 백트래킹 사용

## HW3

전구 켜기 끄기 <a href="https://github.com/npole0103/algoStudy/blob/main/HW3_2017203035.pdf">REPORT</a>

브루트포스, 그리디 사용

## 개념 요약

### 알고리즘 효율성, 분석, Order

**정렬 알고리즘**

Qudratic Methods n^2 10만개 이상되면 시간 많이 걸림.
- 버블 소트
- 선택 소트
- 삽입 소트 : 3가지 중 경우에 따라서 제일 변화가 큼

Efficient Methods 
- 머지 소트
- 퀵 소트
- 힙 소트 : 알려진 소팅 중에 이론적으로 가장 빠름.

---

**Algorithm** : 문제를 풀기 위한 절차. 각 problem instance에 해를 찾도록 해주는 것.
모든 인스턴스를 풀 수 있게 해주는 것.

EX) 순차 탐색 알고리즘, 바이너리 서치 알고리즘
![image](https://user-images.githubusercontent.com/37138188/184902095-7932757e-30d6-4ff4-84fe-04f1d6dd322a.png)

---

피보나치 구현 방법
- Recursive
- Iterative
- Memorization

---

**알고리즘의 분석**

컴퓨터, 프로그래밍 언어, 프로그래머, 세부적인 알고리즘과 독립적이어야한다.

Complexity : 알고리즘의 복잡성

2개의 파라미터 : Input Size, Basic Operation
1. 알고리즘에 들어가는 입력 사이즈(인스턴스의 크기)
2. 기본적인 연산

---

**Every Case Analysis**

Non-every Case Analysis
- Best Case Analysis : minimum
- Worst Case Analysis : maximum
- Average Case Analysis : average

---

Time Complexity 예제

Sequential Serach Algorithm
Basic Operation : target 값과 array 값의 비교
Input size : n, array size

1. Best Case Analysis : B(n) = 1
2. Worst Case Analysis : W(n) = n
3. Average Case Analysis

p : 주어진 array에서 타겟값이 있을 확률(일단은 알 수 없음)
A(n) = p * x를 찾는데 필요한 비교 횟수 + (1-p) * 비교 최대 횟수
1-p는 존재하지 않을 확률
![image](https://user-images.githubusercontent.com/37138188/184902288-97d21d21-c78a-4a6e-98e6-6f8c22297916.png)
p * (k는 1부터 n까지 평균을 낸 것) + (1-p) * n

![image](https://user-images.githubusercontent.com/37138188/184902460-f1a87cbc-4b42-48c9-96c2-d8311f776f3d.png)

---

Linear Time Algorithm : 인풋 사이즈가 리니어한 것
ex) Worst case : n

Quadractic Time Algorithm : 인풋 사이즈의 time complexity가 쿼드래틱한 것.
ex) Average case : Bubble sort - n

---
![image](https://user-images.githubusercontent.com/37138188/184902493-f2f6eec8-ac85-4acc-b272-072404d96e9c.png)

**Big O**

![image](https://user-images.githubusercontent.com/37138188/184902551-5d4976c2-2f82-42cc-bb7c-36a644201ee5.png)

O(f(n))은 복잡도와 관련이 있는 집합 g(n)을 모아둔 함수

g(n)은 f(n)이 미리 존재해야하며, g(n)이 속하는지 알기 위해서는 몇몇의 양의 실수 상수 c와 몇몇의 음이 아닌 정수 N이 존재해야한다.

상수 c는 무시하겠다는 의미
for all 부분은 input 사이즈가 충분히 큰 경우만 보겠다는 암묵적 의미임.
이 두 조건 하에 g(n)은 f(n)이하가 된다.

---

**Big Omega**
![image](https://user-images.githubusercontent.com/37138188/184902598-a787ab81-d6ff-4748-8357-2644c7ae37e7.png)

Big O랑 다른 것은 부등호가 다르다.

g(n)은 f(n) 이상이다. 최고차항보다 이상인 것을 모두 모아놓은 것이 Big Omega

---

**Theta 쎄타**
![image](https://user-images.githubusercontent.com/37138188/184902724-809f2bac-ab43-43e2-8730-f3cf90fea430.png)
![image](https://user-images.githubusercontent.com/37138188/184902732-76e33627-5582-4044-86e2-20b9a37a548d.png)

최고차항이 같은 것
![image](https://user-images.githubusercontent.com/37138188/184902777-a76c2003-9fd7-4164-af69-d81f9073fd8c.png)
g(n)가 만나는 2개의 N 중에 큰 값을 N으로 한다.

---

**small O**
![image](https://user-images.githubusercontent.com/37138188/184902806-c10ca4ff-6306-458a-96a0-f1395d429419.png)

big O 와 똑같지만 상수 c에 대해 모든 양의 실수에 대해 성립해야한다.

small O를 만족하면 big O도 당연히 만족함.

---

### Divide and Conquer

Divide and Conquer : 재귀적으로 문제를 해결하는 기법

Divide : 하나 혹은 그 이상의 작은 인스턴스로 쪼개는 작업

Conquer : Divide된 인스턴스를 또 한번 Divide하고, small instance가 쉽게 풀릴 때까지 Conquer함. 여기서 recursion이 들어감. 충분히 작아진 문제를 정복한다.

Combine : 원래 문제의 해를 구하기 위해서 smaller instance를 합하는 단계.

---

**Binary Search**
![image](https://user-images.githubusercontent.com/37138188/184903000-7fc37e92-9962-49d4-b3c4-f8abb6e88749.png)

Divide
1. 만약 값을 발견하면 종료
2. 2개의 서브 어레이로 나눔.
3. x가 mid보다 크다면 right subarray 선택, x가 mid보다 작다면 left subarray 선택

Conquer
subarray에 대해 똑같은 작업을 함.

Binary Search는 iterative와 recursion은 속도가 똑같다.

시간복잡도는 쎄타(logN)

---

Divide : 주어진 인스턴스를 작은 단위로 쪼개는 단계

Conquer : 쪼개진 인스턴스를 재귀적으로 풀어나가는 단계

(필요시 Combine : Original 인스턴스의 값을 얻기 위해 값을 합해나가는 단계)

---

**Merge Sort**
![image](https://user-images.githubusercontent.com/37138188/184903068-9920a43c-8451-4d2d-afe7-a7acc9db2b4a.png)

Merge
1. S에다가 U와 V에 있는 값들 중 작은 값들을 하나씩 붙인다.
2. U와 V중 둘 중 먼저 바닥이 나는데, 이때 남은 배열을 S뒤에 붙인다.
![image](https://user-images.githubusercontent.com/37138188/184903174-d8281100-0d1d-45c0-a847-c96cce5c053d.png)

Best Case :   
Sort에서 Basic Operation은 비교이다.  
U와 V에서 비교하려는 값보다 전체가 작은 경우.  
EX) U배열 자체가 전부 작은 경우? -> B(h, m) = min(h, m)

Worst Case :
![image](https://user-images.githubusercontent.com/37138188/184903089-a82c4fed-8397-4d83-a319-a1093511a579.png)

---

Quick Sort (Partition Exchange Sort)

Merge Sort와 유사한 점
1. 두 개의 subArray로 쪼갠다
2. 각각을 재귀적으로 정렬한다. 

Merge Sort와 차이점
1. 파티션을 할 때 시간이 걸리며 Combine을 할 필요가 없음.
2. 쪼개지는 게 3부분이다. S1, pivot, S2
![image](https://user-images.githubusercontent.com/37138188/184903254-2c18a759-790e-4697-a789-9ebef6e7a45b.png)
![image](https://user-images.githubusercontent.com/37138188/184903336-84be6385-9561-4c49-9124-80bdbf378037.png)
![image](https://user-images.githubusercontent.com/37138188/184903302-1e6b1c07-b92a-4aec-b259-44f0d33e292f.png)

---

**Quick Sort Time Complexity**

Best : n log n  / Average : n log n  /  Worst : n^2

**Merge Sort Time Complexity**

Best : n log n  / Average : n log n  /  Worst : n log n

---

동차선형점화식
![image](https://user-images.githubusercontent.com/37138188/184903458-f38eadd3-c7e0-4032-be89-ad5e58df1171.png)

tn 계열에 적절한 상수를 곱해서 덧셈으로 표현된 식. Homogeneous == 모든 항이 그렇다

특성방정식 : tn 대신 r^n^을 대입 그리고 모든 항을 최고차항으로 나눔 r^n-k^으로 나눔

case 1. k차 방정식의 근은 항상 k개가 나온다. 서로 다른 근
: k개의 미지수가 있는 k개의 연립방정식, 상수 Ck를 구한다.

case 2. 중근이 있는 경우
: ri가 m번 더해지게 만들어야한다. n을 거듭 곱하면서 총 m개를 만든다.

![image](https://user-images.githubusercontent.com/37138188/184903601-0f302245-4c57-4f1a-86cf-576d5dbd813a.png)
![image](https://user-images.githubusercontent.com/37138188/184903615-18dbc358-29e9-4a6b-a652-24c444dda11f.png)
![image](https://user-images.githubusercontent.com/37138188/184903624-03a6ddac-b00d-4beb-b11a-3aad41aa13c4.png)

---

**Divide Conquer가 좋지 않은 경우**

1. 사이즈 n짜리 인스턴스를 두 개로 쪼개는데 각각의 인스턴스 사이즈가 n에 가깝다면 == 쪼갰는데 n이랑 비슷함. n -> 2n
2. 사이즈 n짜리 인스턴스를 잘게 쪼갰는데 각각의 n과 비례하는 관계라면 n/c
n -> n^2/c
![image](https://user-images.githubusercontent.com/37138188/184903657-2545092a-ab47-4afe-a2b4-2324c5f548e5.png)

---

### Dynamic Programing

**Dynamic Programming 동적계획법**

Divide and Conquer와 유사한 점
문제의 인스턴스가 하나 이상의 smaller instances로 나누어지는 것.

Divide and Conquer와 차이점
smaller 인스턴스를 먼저 풀고, 나중에 필요하면 smaller 인스턴스를 가져옴

Divide and Conquer : Iter fibo
Dynamic Programming : Recur fibo

Dynamic Programming은 Bottom-up 방식임 / Divide and Conquer는 Top-down
Dynamic Programming을 Top-down 방식으로 바꾸려면 Memoization을 사용해야함.

Step 1 : recursive property를 세운다.
Step 2 : Bottom-up 방식으로 smaller instance를 먼저 풀면서 최종해를 구하겠다.

---

DP Ex)
1. The Binomial Coefficient 바이노미얼 컨피션 이항계수 구하기
2. Floyd’s Algorithm for Shortest Paths : 모든 순서쌍에 대해서 구하는 것
3. Optimal Binary Search Tree : 바이너리 서치트리 중에 옵티멀한 것 고르는 것

---

### The Greedy Approach

**그리디 접근법 – 탐욕적으로 눈에 보이는 좋은 것을 선택하는 방법**

  없는 상태에서, 일련의 선택을 하는데 그 순간 가장 좋아보이는 것을 선택함. 그 선택이 잘못된 선택인지 판단하고 다른 선택을 할 수도 있고, 그 선택이 다 만들어지면 최종해가 되는지 체크를 해서 알고리즘을 끝내는 것이 그리디 알고리즘. 한번 선택한 것은 바뀌지 않음.

일련의 선택을 통해서 해가 만들어지는 것인데, 그것의 각각이 그 순간에 가장 좋아 보이는 것을 고르는 것이다.

한 번의 선택이 만들어지면 그것이 끝까지 남게 된다.

각 선택이 그 순간은 가장 좋아보임, 하지만 나중에까지 최적이 되지 않을 수도 있다.

최적해를 구할 수 있는 경우
- Minimum Spanning Tree
- Hurffman Code

최적해를 구할 수 없는 경우
- Knapsack Problem 

그리디 알고리즘을 적용할 수 있는지 증명하는 부분이 어렵다.

아무것도 없는 상태엣 시작하는데, 일련의 아이템 선택을 하게 되는데, 그 선택된 셋이 최종해를 나타낼 때까지 함.

**그리디 순서도**
1. Selection Procedure : 그리디의 기준에 따라 아이템을 셋에 선택함. 문제마다 다름
2. Feasibility Check : 잘못 선택할 시 버리겠다. 해를 만들 수 있는지 체크하는 부분.
3. Solution Check : 내가 선택한 셋이 정말로 최종해가 되는지 체크하는 부분

---

**Minimum Spaaning Tree**

정의

언다이렉티드 그래프 : 그래프 엣지에 방향이 없는 것  
커넥티드 그래프 : 언다이렉트 그래프가 임의의 버텍스 사이에 연결이 되어있는 경우  
에이시클릭(Acyclic) 그래프 : 사이클이 없는 그래프, 사이클이 없는 그래프  

Tree : acyclic + connected + undirected graph

Spanning Tree : 주어진 그래프의 서브 그래프인데 모든 버텍스를 포함하면서 트리가 되는 것

Minimum Spanning Tree : 스패닝 트리의 엣지 가중치를 모두 더한 것이 최소가 되는 것.
![image](https://user-images.githubusercontent.com/37138188/184904366-3ec60340-111e-49f0-8625-f57a1ebd54c9.png)

최소 신장 트리 구하는 알고리즘은 2개
1. Prim’s 알고리즘
2. Kruskal’s 알고리즘

---

**Prim’s Algorithm**
![image](https://user-images.githubusercontent.com/37138188/184904505-556d96ab-f45c-426d-ab11-49ecf8be5b19.png)
![image](https://user-images.githubusercontent.com/37138188/184904519-2cf5abe9-19ac-478c-bb15-bdce44317fc0.png)
![image](https://user-images.githubusercontent.com/37138188/184904549-81f925e0-76b0-4ef2-8867-a8e8cb586df9.png)

모든 버텍스는 포함되어야하고 결국 엣지 선택을 봐야함.  
F는 엣지 서브셋이고, Y는 버텍스 서브셋  
버텍스 n개가 있다면, 반드시 n-1개가 있어야 트리가 된다.

**Kruskal’s Algorithm**
![image](https://user-images.githubusercontent.com/37138188/184904579-4f797269-9c95-486c-8b18-7fc487451f9a.png)
![image](https://user-images.githubusercontent.com/37138188/184904597-321917f6-d4c9-4251-8cf4-2e20f39ecb93.png)
![image](https://user-images.githubusercontent.com/37138188/184904608-09c2b410-13af-4764-afd2-d67a49bfa591.png)

곳곳에서 커넥티드 서브 그래프가 나오면서 결합이 되는 것.

---

**Huffman Code**

데이터 압축을 위한 효율적인 인코딩 방법

허프만 코드는 텍스트파일을 표현하기 위한 Variable length binary code의 일종이다.

- 가변 길이 바이너리코드 : 각각의 캐릭터를 다른 숫자의 비트로 표현한다.
- 고정 길이 바이너리코드 : 각각의 캐릭터를 같은 숫자의 비트로 표현하는 것. ex)아스키코드

**허프만 코드 조건**
어떤 한 캐릭터의 codeword의 시작을 다른 캐릭터의 codeword가 차지하고 있지 않는 조건을 만족해야함. internal node에 캐릭터를 할당하지 않아야함. 어떤 코드의 시작부분이 다른 코드를 포함하고 있으면 안됨

**Huffman’s Algorithm**
1. 각각의 캐릭터마다 싱글 노드의 트리를 만들어서 포레스트를 구성한다
2. repeat : 그 트리의 frequencies가 가장 작은 순으로 트리를 합친다. 하나가 남을 때까지

---

**0 - 1 Knapsack Problem**

0 – 1 Knapsack Problem은 그리디 알고리즘으로 답을 구할 수 없음.

다음 챕터에 나오는 것과 연관된 것이니 잘 봐두는 것이 중요하다.
다이나믹 프로그래밍으로 최적해를 구할 수 있음.

Knapsack Problem 0-1 버전은 물건을 담냐 담지 않느냐.

**Greedy Approach를 고려한 방법**

1. A Simple Greedy Approach : 
가치에 대해 정렬을 하고 가치가 높은 순서대로 물건을 넣겠다.
단순히 접근하면 1M밖에 못 담지만, 실제 Optimal 한 방법으로는 1.3M까지 담을 수 있음.

2. Another Simple Greedy Approach : 
weight만 고려한다면? 무게 순으로 정렬.
단순히 접근하면 0.74M밖에 못 담지만, 실제 1.3M까지 담을 수 있다.

3. More Sophisticated Greedy Approach : 
단위 무게당 가치가 높은 것을 담겠다. profit per unit weight
최적해처럼 보이지만 반례가 존재한다.

---

**Fractional Knapsack**

fractional Knapsack에서는 최적해를 구할 수가 있다.
0 – 1버젼은 물건을 담을지 말지만 결정할 수 있었다. fractional은 물건을 잘라서 담을 수 있다. fractional에서 단위 무게당 가치를 고려한 방법은 최적해를 구할 수 있다.

---

Dp를 사용해서 0-1 버전을 푸는 방법,

다이나믹 프로그래밍으로 풀이법을 제시하면 5가지를 제시해야함.
1. array
2. recurrence
3. boundary condition
4. fill up
5. answer

---

### BackTracking

그리디는 아무것도 없는 상태에서 일련의 선택을 해나가면서 최종해를 만듦. 되돌아가는 일은 없음. Greedy Criteria에 맞게 선택.

백트래킹은 문제를 풀기 위한 기법인데, 일련의 오브젝트를 선택하므로써 문제를 풀게 됨.
백트래킹은 나중에 번복할 수가 있음. 어떤 조건에 만족하지 않는다면 되돌아갈 수 있음.
해가 나올 때까지 전수조사를 함. 조건을 만족하지 않으면 다 보게 됨.

**Promising VS Non-Promising**

Non-promising : 더 이상 진행할 수 없는 노드, 더 이상 해로써 가지가 없어서 진행할 필요가 없는 노드

Promising : 서로 위협하지 않는 state. 만약 nonPromising을 만나면 backtrack을 하게 됨.

**N queens Problem**
n개의 여왕을 배치하는 것.
서로가 잡아먹을 수 없는 상황에 배치하는 것.

**The m-coloring problem**
m개 이하의 색깔을 이용해서 인접한 두 버텍스가 다른 컬러로 되게 색칠하는 것.

**0-1 Knapsack Problem**

---

### Branch and Bound

branch & bound는 optimization 문제에만 적용 가능

- 백트래킹과 유사한 점 : 주어진 문제의 state-space tree를 탐색하는 것이 백트래킹과 유사함. 모든 사항을 다 본다.

- 백트래킹과 다른 점 : 트리를 traversing하는데 특정한 방법이 없다. 제한이 없다. bound 값을 써야해서 optimization 문제에서만 쓸 수 있다.

**Step**

- Step 1 : Promising한지 결정하기 위해 bound 값을 계산한다. 내가 노드를 expand했을 때 얻을 수 있는 것이 bound 값.

- Step 2 : Bound가 Best보다 좋지 않다면, expanding 하지 않겠다.

---

**Best-First Search : Branch and Bound에서 추천하는 서치 방식**

앞에서는 Bound는 promising 판별, pruning 하기 위한 것이었음.

여기서는 한가지 용도를 더 넣어서, 다음 어떤 노드를 expand할지 결정할 때 사용하겠다.

queue 대신 priority queue를 쓰면 된다.

---

**Traveling Salesman Person (optimization)**

주어진 웨이티드 그래프에서 모든 버텍스를 방문하는 서킷 라우트가 출발점으로 돌아오는 것 중에 라우트가 여러개가 있을 수 있는데 비용이 가장 적은 것을 고르는 것.

lower bound를 사용해야함. 최소 비용을 고르는 것이기 때문에.

0-1 Knapsack Problem과 다른 점은 Knapsack은 중간에 멈춰도 상관 없음. 하지만 TSP는 다시 돌아와야 해가 됨. State-space-tree에서 바닥을 찍어야 해가 됨. 중간 값은 해가 아님.

---

### Introduction to Computational Complexity The Sorting Problem

**Computational Complexity Analysis**

이번 시간에는 주어진 모든 알고리즘에 대한 lower bound에 관심을 갖음.
이거보단 빠를 수가 없다. 라는 것
대표적으로 소팅과 서치 문제가 있을 수도 있다.

---

**Heap – Lower Bound에 가장 근사한 Sorting 알고리즘**

Selection Sort에서 자료 구조를 Array에서 Heap으로 바꾼 것임

Heap은 Complete Binary Tree이다. Priority Queue를 구현할 때 쓰이는 것이 Heap임.

Heap이 주어지면 Heap에서 Root를 계속 삭제하면, Selection Sort에서 가장 큰 값을 꺼내 맨 뒤에서부터 차곡차곡 채우는 역할과 동일.

Heap에서의 Array에서 가장 큰 값을 고르는 것보다 빠름. Array는 N Heap은 log N

1. Heap에서 반복적으로 루트를 삭제한다
2. 꺼내진 Removed Key를 뒤에서부터 차곡차곡 채운다.

필요한 것
1. 주어진 Array로 Heap을 만드는 법
2. 루트를 빼면 어떻게 다시 Heap을 만들 것인가.

**HeapSort의 최종 시간 복잡도**

RemoveKeys + makeHeap == (n log n – 2n + 2) + (n – 1) == n log n – n + 1

쎄타 n log n

---

**Lemma 보조정리 & Theorem 정리**

Lemma 7.1
- n개의 서로 다른 키를 정렬하는 알고리즘 Leaf노드가 n!개가 되는 binary decision tree가 딘다. 그런데 pruned이 일어남으로써 시간이 적게걸릴 수도 있고, 많이 걸릴 수도 있다.

Lemma 7.2
- 워스트케이스인 경우가 가장 Depth가 깊은 경우이고, 트리의 Depth가 Worst case number of comparision이다. 우리는 Lower Bound에 관심이 있기 때문에 Worst Case에 포커스

Lemma 7.3
- m이 바이너리의 트리의 개수고 d가 Depth라고 한다면, d >= log m
- full binary tree에서 로그 값은 depth가 같음. 군데 군데 Pruning이 되어있으면 이하임.

Theorem 7.2
- n개의 키를 정렬하는 Any Deterministics 알고리즘의 leaf node 개수는 n!이다.
- 그러면 그 트리의 depth >= log(n!) 이다. 이것은 Worst Case일 경우 d = log n!

Lemma 7.4
- **log(n!) >= n log n – 1.45n**

Theorem 7.3
- 비교 기반의 소팅 알고리즘의 Lower Bound는 n log n – 1.45n 이다. 이것보다 빨라질 수가 없다.

**HeapSort : n log n – n + 1
이상적인 소팅과 0.45n 차이.**

---

**Introduction to the Theory of NP**

intractability : 다룰 수 없음.

컴퓨터 자원의 계산 가능성

인풋 사이즈에 대해 다항식인 시간복잡도는 Polynomial-Time이다.

log n < n 이기 때문에 전부 Polynomial로 간주함.

다항식 시간 알고리즘 예시 : n^2, n 

**An Intractable Problem**

문제를 푸는데 문제가 다항식 시간 알고리즘으로 풀이가 불가능한 경우
intractable이라고 부른다.

---

문제를 3개의 카테고리로 나눈다.

A. Polynomial-Time 알고리즘 : Sotring, Shortest Paths Problem, Minimum Spanning Tree

B. Proven to be Intractable(Polynomial Time으로 풀 수 없는 것) : 
- B - 1. 출력 하는 양 자체가 Polynomial 양을 초과하면
Ex) 해밀턴 서킷, 퍼뮤테이션 n keys(순열 n!)
- B - 2. Undecidable 결정할 수 없는 문제 : Halting Problem

1번은 풀 수 있지만 시간이 출력이 Polynomial을 초과, 2번은 그냥 풀 수 없음.

C. NOT proven to be intractable, but for which polynomial-tome algorithms have never been found : intractable이 입증되지 않았지만, Polynomial인 것도 입증되지 않음.
- 0-1 Knapsack Problem
- Traveling SalesPerson Problem
- m-coloring Problem

---

### Introduction to the Theory of NP

**NP 이론 : NP는 결정 문제에만 국한에서 이야기함.**

Decision Problem(결정 문제) : 예 또는 아니오로 대답하는 문제
일반적인 Optimization 문제도 대응하는 결정문제를 갖고 있기 때문에 결정 문제만 다룰 것

Example
1. T.S.P n개의 도시를 모두 방문하고 원래 자리로 돌아오는 최소 라우트를 구하는 문제인데, 이것을 결정문제로 바꾸면, d라는 쓰레쉬홀드 값이 주어지면 최소 라우트와 관련되어 d이하의 라우트가 있는지 결정해라.

2. The 0-1 Knapsack Decision Problem 쓰레쉬 홀드보다 작은 것이 있는지 찾는 문제
R이라는 값이 주어졋을 때 profit > R이 만족하는지 여부를 결정해라.

바이너리 서치 같은 것을 수행해서 결정을 할 수 있다.

---

**NP를 알기 전 P를 알아야한다.**

P는 집합인데 문제를 담아둔 집합이다.
다항식 시간 알고리즘으로 풀릴 수 있는 모든 결정문제의 집합. A카테고리에 해당하는 것들

Ex) 주어진 어레이에 키 값이 있는지 ?, 어레이가 정렬되어 있는지 ?

우리는 TSP 결정문제, 0-1 Knapsack 결정문제는 P에 속하는지 모름.

---

**Verification(검증)의 정의**

체킹하는 프로세스인데, clamimed solution으로 주어진 해가 실제 해가 되는지 검사하는 것.

문제를 푸는 것보다 훨씬 쉬운 작업.

T.S.P 결정문제 : 
문제는 G, 쓰레쉬홀드 d, Claimed_tour S
실제 S가 투어가 되는지 && 엣지 웨잇의 합이 d이하가 되는지?

S는 퍼뮤테이션 같은 것임. 엣지의 웨잇을 더하는 것은 선형 시간이 걸림. N
투어인지 검사하는 것, 퍼뮤테이션인지 검사하는 것. 각 숫자가 한번씩 나왔는지 봄 N
(얼핏보면 n^2인데 flag를 활용하면 n으로 축소 가능) => O(n)

---

**Notes : Verifiaction**

Verifiaction에서 false가 나왔다고 해서 주어진 문제의 답이 no라는 것은 아님. yes가 나왔다고 답이 yes라는 것은 아님. Ex) 특정 위치에서 산삼이 나오지 않았다고, 산에 산삼이 없다고 말하는 것은 불가

검증하는 시간이 Polynomial-time이 된다고, 원래 결정문제가 Polynomial하지는 않다.

---

**Nondeterministic Algorithm - NP는 (Nondeterministic Polynomial)**

1. Guessing (Nondeterministic) 비결정적 : 문제의 인스턴스가 주어지면, 해에 대해서 추즉하는 단계. 1번 단계에서 나온 Guess를 2번 단계에서 Verify
2. Verification (Deterministic)
- 2 - a. 게스 솔루션이 true가 되면 멈춘다. 답이 Yes라서
- 2 - b. 게스 솔루션이 false가 나와서 일단은 멈춘다.
- 2 - c. halting problem이 Undecision이라서 무한루프 돌 수도 있음.

---

**Solve의 정의**

결정문제를 Nondeterministic Algorithm으로 푼다는 것이 어떤 의미인가.

1. 답이 Yes인 인스턴스에 대해서, Verification에 대해서 true를 리턴하면 문제를 풀게 됨.
그거 하나만 찾고 끝남.
2. 답이 No인 인스턴스에 대해서, true를 리턴하는 인스턴스가 없다. 모든 경우를 다 봐야함. 모든 경우를 다 봤는데도 false가 나와야 문제를 푼 것임.

---

Polynomial-time Nondeterministic Algorithm (N.A는 Polynomial일 수가 없다. 왜냐면 no일 경우에 모든 인스턴스를 다봐야하니까) : Polynomial-time은 Verification에 국한됨
Verification Stage가 Polynomial Time으로 구성되어 있는 알고리즘을 뜻함.

**NP : Polynomial-time Nondeterministic algorithms으로 풀릴 수 있는 모든 결정문제의 집합. 간단히 말하면 Decision Problem인데 Verification이 Polynomial-time안에 되는 것들을 전부 모아 놓은 집합.**

앞에서 봤던 T.S.P 결정 문제는 NP에 속함. P에 속하는지는 알지 못하지만
0-1 Knapsack 결정문제도 포함, m-coloring Decision 둘 다 P에속하는지 모르지만 NP
그리고 P에 속하는 모든 문제들도 전부 NP에 속하게 된다. P는 NP의 서브셋임

P밖에 있는 NP문제는 무엇이 있을까? 아무도 모름. 왜냐면 P에 속하는지 아닌지 알 수 없기 떄문에. NP-P가 비어있는지는 알 수 없다. 세계 10대 수학 난제

---

**NP-Complete Problem : NP 문제 중에서도 뭔가 완전한 형태의 문제**

비공식 정의 : NP에 있는 문제 집합 S인데, NP-Complete 문제 하나가 다항식 시간 안에 풀리게 되면, NP에 있는 모든 다른 문제도 다항식 시간 안에 풀리게 된다.

예시 : T.S.P 결정 문제, 0-1 Knapsack 결정문제, CNF Satisfiabiltiy(세계 최초로 증명됨)

---

**The CNF Satisfiability Problem**

Literal(논리식) : 논리변수 혹은 논리변수의 부정을 뜻함.

Clause : 리터럴들의 시퀀스다. logical OR 로 결합한 것.

CNF(Conjuctive Normal Form) : Clause를 And로 결합한 것.

전체식을 1로 만드는  Assignment가 있느냐를 찾는 것.  
가장 낮은 수준의 프로그램 저장방식을 cnf로 표현할 수 있다.

**CNF Satisfiability Problem**  
주어진 CNF를 True로 만드는 변수에 truth Assignment가 있느냐

---

**The CNF Satisfiability Problem가 NP임을 보여라. 그럼 P에 속하느냐?**
-> 아무도 모른다.

Steven Cook’s 이론으로, 만약 CNF Satisfiability Problem가 P라면, P = NP이다.

이 정리가 증명되고 나서 어떤 문제 간에 변환이 되어 수많은 문제들이 증명됨.

---

**Transformation Algorithm 변환 알고리즘(문제와 문제간에 변환)**

A 문제를 풀고 싶은데 B 문제에 대한 알고리즘을 갖고 있음.

만약 A문제와 B문제 사에어 트랜스포메이션이 있다면 B문제를 푸는 알고리즘으로 A를 품

A문제 인스턴스 X를 B문제 인스턴스 Y로 바꾸는 알고리즘이 있다면, 단 X에서의 답과 Y에서의 답이 일치하도록 변환한다면, B 알고리즘을 이용해서 A 문제를 풀 수 있다.

예시는 단순한 이론으로 (실제 NP Complete 이론에서는 아주 복잡함)

Problem A : N개의 정수로 주어진 어레이가 주어져있는데 후반부에 가장 작은 값이 있을까?

Problem B : N개의 정수로 주어진 어레이가 주어져있는데 후반부에 가장 큰 값이 있을까?

B에 대한 알고리즘을 갖고 있다면 x를 –x로 바꾸면 y를 얻어내고 Yes or No를 구함

---

**NP-Completeness**

Polynomial-time Many-One Reducibility - 다항식 시간 다대일 변환성

A라는 문제가 B로 리듀스(변환) 된다. B문제의 알고리즘으로 푸는 것.
문제 A가 B로 리듀스(A reduces to B) 된다고 하는 본질적인 의미는
Problem A 인스턴스가 Problem B 인스턴스로 가는 트랜스포메이션 알고리즘이 Polynomial time 다항식 시간인 것이 있다면 이렇게 표현한다.

**정리 9.1**  
만약 결정 문제 B가 P에 속하는데(다항식 시간 안에 풀리는데), A가 B로 리듀스 한다면
결정 문제 A도 P에 속한다. (A도 다항식 시간에 속한다)

---

**NP-Completeness : 앞에서는 비공식적으로 정의 했는데 이번엔 제대로 정의.**

정의 : A에 대한 어떤 문제 B가 NP-Complete라고 불릴려면

1) NP-Completeness는 NP안에 서브셋으로 존재한다.
2) NP에 있는 모든 다른 문제 A가 NP에 속하고, A는 B로 리듀스한다.

NP에 있는 어떤 문제를 해결할 수 있는 본질이 NP-Completeness이다.

정리 9.1에 의해서 NP-Complete Problem 하나가 P에 속하게 되면, NP에 있는 모든 문제는 다항식 안에 풀리게 되어 P에 속한다.

**정리 9.2 Cook’s 정리**  
CNF-Satisfiability는 NP-Complete이다.

---

**정리 9.3, 수많은 NP-Complete을 만들 수 있게 되는 정리**  

어떤 Problem C가 NP-Complete라고 한다면  
1) 그것이 NP이고,
2) 모든 문제가 B로 리듀스 됐는데, B를 C로 리듀스할 수 있다면 C도 NP-Complete이다.

Proof : B는 NP-Complete 문제니까, A에 있는 어떤 문제가 B로 리듀스한다.

A->B->C이다. trans는 아무리 많이 해도 trans이기 때문에 전부 다항식 시간이 걸린다.
A에서 C로 리듀스 할 수 있다면 C는 NP-Complete이다.

---

The State of NP

1) P ⊆ NP, 하지만 NP – P = 공집합은 모른다.
2) NPc(Complete)는 NP의 서브셋임, 같은가?
같지 않다, 항상 답을 Yes로 만드는 trivial 결정 문제은 NP에 속해있는 문제지만 NP-Complete는 아니다.
3) P=NP라면, NPc는 P의 Proper Subset 진부부분집합이다. 왜냐하면 NPc는 NP이니까
만약 P가 NP의 진부분집합이면 NPc 교집합 P는 공집합이다.

---

1) NP=P인 경우
2) P와 NP가 다른 경우

세계 10대 수학 난제는 NP=P?

---

**9.4.3 NP-Hard만 보겠다.**
NP-Complete와 NP-Hard를 보겠다.

**Polynomial-Time Turing Reduciblility 정의** :
가상의(Hypothetical)Polynomial Time 알고리즘 B로, Polynomial 시간에 문제 A를 푼다면,
문제 B를 풀 수 있다면, 문제 A를 풀 수 있다고 가상으로 가정한 것.

기호로는 이렇게 쓴다. Turing 리듀스블

**Notes**  
문제 B를 위한 폴리노미얼 타임 알고리즘이 존재할 필요가 없다.  
A와 B는 결정문제일 필요가 없다.

NP-Hard는 결정 문제에서 벗어나고 싶어함. 결정문제가 아닌 것으로 확대하기 위함.

---

**NP-Hard 문제 정의** :
- NP-Complete 문제가 현재 문제 B로 튜링 리듀스한다면 A를 NP-Hard라고 부른다.
- NP-Complete으로부터 변환이 되는 모든 문제는 NP-Hard이다.

**Notes**
1) B는 NP에 속할 필요가 없다.
2) B는 결정문제일 필요가 없다.
3) NP에 속하는 모든 문제는 NP-Hard문제로 리듀스하게 된다.
4) 만약 NP-Hard에 대해서 다항식 알고리즘이 존재한다면, P=NP이다.
5) 어떤 최적해 문제를 NP-Hard라고 볼 수 있다.

**NP-Hard의 개념은 결정 문제를 옵티미제이션 문제로 확장하기 위한 개념이다.**

---






