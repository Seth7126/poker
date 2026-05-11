// ============================================================
// 函数名称: sub_43996c
// 虚拟地址: 0x43996c
// WARP GUID: e38c4ece-ec0a-5058-82db-f73652488abc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_43996c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* result = (*(*arg1 + 0x2c))()
    void* result = (*(*arg1 + 0x2c))()
    
    if (result.b != 0)
        result = arg1[6]
        *(result + 0x48) = arg2
    
    return result
}
