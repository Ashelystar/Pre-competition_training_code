### 输入输出与格式化常见坑点总结

#### 1. 性能优化

* **同步流关闭**：
  ```cpp
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ```
  *注意*：开启后禁止混用 `cin/cout` 与 `scanf/printf`。
* **换行符选择**：
  使用 `'\n'` 代替 `endl`。`endl` 会强制刷新缓冲区，导致性能大幅下降。

#### 2. 输入

* **`cin` 与 `getline` 混用**：
  读取数字后接 `getline` 会读入残留的换行符。需先执行 `cin.ignore()`。
  ```cpp
  cin >> n;
  cin.ignore(); // 忽略换行符
  getline(cin, s);
  ```
* **EOF 读取**：
  未说明数据组数时，使用返回值判断。
  ```cpp
  while (cin >> n) { ... }
  ```

#### 3. 输出

* **行末空格处理**：
  输出数组时，最后一个元素后通常不能有空格。
  ```cpp
  for (int i = 0; i < n; ++i) {
      cout << a[i] << (i == n - 1 ? "" : " ");
  }
  cout << '\n';
  ```