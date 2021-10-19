/* Copyright (c) 2021 Xie Meiyi(xiemeiyi@hust.edu.cn) and OceanBase and/or its affiliates. All rights reserved.
miniob is licensed under Mulan PSL v2.
You can use this software according to the terms and conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at:
         http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details. */

//
// Created by Longda on 2021/4/13.
//
#include "storage/common/index_manager.h"
#include "rc.h"


/**
 * 此函数创建一个名为fileName的索引。
 * attrType描述被索引属性的类型，attrLength描述被索引属性的长度
 * @param fileName
 * @param attrType
 * @param attrLength
 * @return
 */
RC createIndex(const char *fileName, AttrType attrType, int attrLength) {

  //TODO
  return RC::SUCCESS;
}
/**
 * 打开名为fileName的索引文件。
 * 如果方法调用成功，则indexHandle为指向被打开的索引句柄的指针。
 * 索引句柄用于在索引中插入或删除索引项，也可用于索引的扫描
 * @param fileName
 * @param indexHandle
 * @return
 */
RC openIndex(const char *fileName, IndexHandle *indexHandle) {
  //TODO
  return RC::SUCCESS;
}
/**
 * 关闭句柄indexHandle对应的索引文件
 * @param indexHandle
 * @return
 */
RC closeIndex(IndexHandle *indexHandle) {
  //TODO
  return RC::SUCCESS;
}
/**
 * 此函数向IndexHandle对应的索引中插入一个索引项。
 * 参数pData指向要插入的属性值，参数rid标识该索引项对应的元组，
 * 即向索引中插入一个值为（*pData，rid）的键值对
 * @param indexHandle
 * @param data
 * @param rid
 * @return
 */
RC insertEntry(IndexHandle *indexHandle, void *data, const RID *rid) {
  //TODO
  return RC::SUCCESS;
}

RC deleteEntry(IndexHandle *indexHandle, void *data, const RID *rid) {
  //TODO
  return RC::SUCCESS;
}

RC openIndexScan(IndexScan *indexScan, IndexHandle *indexHandle,
                 CompOp compOp, char *value) {
  //TODO
  return RC::SUCCESS;
}

RC getNextIndexEntry(IndexScan *indexScan, RID *rid) {
  //TODO
  return RC::SUCCESS;
}

RC closeIndexScan(IndexScan *indexScan) {
  //TODO
  return RC::SUCCESS;
}

/**
 * 获取由fileName指定的B+树索引内容，返回指向B+树的指针。
 * 此函数提供给测试程序调用，用于检查B+树索引内容的正确性
 * @param fileName
 * @param index
 * @return
 */
RC getIndexTree(char *fileName, Tree *index) {
  //TODO
  return RC::SUCCESS;
}
