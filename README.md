# OceanBase2021
## 弦计划练习生小分队

zjh&amp;hbh&amp;hyt 2021 OceanBase Contest

### 初赛必做题

|名称 | 描述 | 完成情况|
| ---- | ---- | ---- | 
| 优化 buffer pool|	必做。实现LRU淘汰算法或其它淘汰算法|   |
| drop table  |	必做。删除表。清除表相关的资源。	| ✔ by DeepZheng 10/18|
|实现update功能  |	必做。update单个字段即可。| ✔ by DeepZheng 10/21|
|增加date字段	|必做。date测试不会超过2038年2月。注意处理非法的date输入。|	|
|查询元数据校验|	必做。查询语句中存在不存在的列名、表名等，需要返回失败。需要检查代码，判断是否需要返回错误的地方都返回错误了。| ✔ by DeepZheng 10/21|	
|多表查询	|必做。支持多张表的笛卡尔积关联查询。需要实现select * from t1,t2; select t1.,t2. from t1,t2;以及select t1.id,t2.id from t1,t2;查询可能会带条件。查询结果展示格式参考单表查询。每一列必须带有表信息，比如:t1.id \ t2.id 1 \ 1	| |
|聚合运算|	需要实现max/min/count/avg.包含聚合字段时，只会出现聚合字段。聚合函数中的参数不会是表达式，比如age +1| |


### 提交说明

仓库中环境已经配置好了，第一次 clone 时可以将整个仓库都拉下来，后面同步更新时只需要拉取 src 源代码文件夹即可

需要对本仓库进行修改，请将本仓库 fork 到自己的账户

然后在本地执行 git clone + 自己仓库的链接

clone 后执行一次 git pull

每次执行更改之后，将代码上传到自己的仓库中
```
$ git add src
$ git commit -m "更新信息"
$ git push 
```

最后在github 网页中 pull request 提交更改

当需要从主仓库获取最新更新代码时，执行 pull 操作如下
```
$ git pull upstream main
```