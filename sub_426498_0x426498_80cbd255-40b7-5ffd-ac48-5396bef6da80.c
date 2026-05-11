// ============================================================
// 函数名称: sub_426498
// 虚拟地址: 0x426498
// WARP GUID: 80cbd255-40b7-5ffd-ac48-5396bef6da80
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_426498(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: void* result = *(arg2 + 8)
    void* result = *(arg2 + 8)
    *(result + 0x10) = arg1[0x80]
    
    if (arg1[0x81].b != 2)
        return result
    
    *(result + 8)
    return (*(*arg1 + 0xb8))()
}
