// ============================================================
// 函数名称: sub_412e8c
// 虚拟地址: 0x412e8c
// WARP GUID: 2983cd73-10f8-5bc9-907d-7f356fea7c74
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4043ac
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_412e8c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* result = sub_4043ac(arg1 + 4, arg2)
    void* result = sub_4043ac(arg1 + 4, arg2)
    
    if (arg2 s< *(arg1 + 8))
        *(arg1 + 8) = arg2
    
    return result
}
