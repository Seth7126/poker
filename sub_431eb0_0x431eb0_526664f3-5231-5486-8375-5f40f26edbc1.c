// ============================================================
// 函数名称: sub_431eb0
// 虚拟地址: 0x431eb0
// WARP GUID: 526664f3-5231-5486-8375-5f40f26edbc1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_431f30
// ============================================================

int32_t __fastcallsub_431eb0(int32_t* arg1, int32_t* arg2, int32_t* arg3 @ eax, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: void* eax = arg3[0x19]
    void* eax = arg3[0x19]
    
    if (*(eax + 0x14) u<= 0)
        *arg2 = 0
    else
        *arg2 = *(arg3[0x19] + 0x14)
    
    if (*(eax + 0x10) u<= 0)
        *arg1 = 0
    else
        *arg1 = *(arg3[0x19] + 0x10)
    
    if (*(eax + 0xc) u<= 0)
        *arg5 = 0
    else
        *arg5 = *(arg3[0x19] + 0xc)
    
    if (*(eax + 8) u<= 0)
        *arg4 = 0
    else
        *arg4 = *(arg3[0x19] + 8)
    
    return (*(*arg3 + 0x38))(arg4, arg5)
}
