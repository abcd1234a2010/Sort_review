# Sort_review

## 各種排序演算法比較(交換排序法)

| 排序法 | BestCase | AverageCase | WorstCase | 穩定性 |
| -------- | -------- | -------- | -------- | -------- |
| Selection Sort     | O(n^2)     | O(n^2)     | O(n^2) | 不穩定
| Insertion Sort     | O(n)     | O(n^2)     | O(n^2) | 穩定
| Bubble Sort     | O(n^2)     | O(n^2)     | O(n^2) | 穩定
| Merge Sort     | O(nlogn)     | O(nlogn)     | O(nlogn) | 穩定 
| Quick Sort     | O(nlogn)     | O(nlogn)     | O(n^{2}) | 不穩定
| Heap Sort     | O(nlogn)     | O(nlogn)     | O(nlogn) | 不穩定

1. 選擇排序法(Selection Sort)

* 某個最終元素和初始元素位置一樣的元素，在選擇排序法的過程中不會做任何的移動。
* 比泡沫排序快，因為可以跳比較大步，但是比較不穩定。

2. 插入排序法(Insertion Sort)

* BestCase是在所有O(n^2)的排序演算法裡面，速度最快的。

3. 泡沫排序法(Bubble Sort)

* 指對相鄰的元素做比對與調換。
* 在某些陣列上貪心演算法的最佳性證明可以用泡沫排序法的方式證明(請參考[c471: apcs 物品堆疊](https://zerojudge.tw/ShowProblem?problemid=c471))。

4. 合併排序法(Merge Sort)

* 合併排序法需要使用額外的記憶體空間（大概需要O(n)）。
* 其變形模式可以不需要額外的記憶體空間（請參考補充資料）。

5. 快速排序法(Quick Sort)

* 快速排序法不需要使用額外記憶體空間
* 快速排序法比較不穩定，WorstCase需要O(n^2)的時間。
* 在取得Pivot的時候可能需要引入亂數演算法。
* 通常在記憶體上面的排序會使用此種演算法。

6. 堆積排序法(Heap Sort)

* 有一點複雜...
