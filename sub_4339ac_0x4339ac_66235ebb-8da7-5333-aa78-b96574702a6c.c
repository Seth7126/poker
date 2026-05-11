// ============================================================
// 函数名称: sub_4339ac
// 虚拟地址: 0x4339ac
// WARP GUID: 66235ebb-8da7-5333-aa78-b96574702a6c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4339ac(void* arg1, int32_t, int32_t* arg3)
{
    // 第一条实际指令: void* eax
    void* eax
    eax.b = *(*(arg1 + 0x14) + 0x4b)
    
    if (eax.b - 1 u>= 2)
        arg3[1] += 0xc
        return eax.b - 3
    
    *arg3 += 0xc
    return eax.b - 3
}
