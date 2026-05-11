// ============================================================
// 函数名称: sub_401d4c
// 虚拟地址: 0x401d4c
// WARP GUID: 98cc338a-a1f2-509d-b018-f78fd6b2c211
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401d28
// [被调用的父级函数]: sub_401e1c
// ============================================================

void* __convention("regparm")sub_401d4c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s>= 0xc)
    if (arg2 s>= 0xc)
        *arg1 = arg2 | 2
        return sub_401d28(&arg1[1])
    
    if (arg2 s>= 4)
        *arg1 = arg2 | 0x80000002
    
    void* result = arg1 + arg2
    *result &= 0xfffffffe
    return result
}
