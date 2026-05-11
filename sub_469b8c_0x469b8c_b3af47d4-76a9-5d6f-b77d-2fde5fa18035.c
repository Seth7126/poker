// ============================================================
// 函数名称: sub_469b8c
// 虚拟地址: 0x469b8c
// WARP GUID: b3af47d4-76a9-5d6f-b77d-2fde5fa18035
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402bc0, sub_403010
// [被调用的父级函数]: sub_469d58
// ============================================================

void __convention("regparm")sub_469b8c(void* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        *arg3 = 0
        return 
    
    bool o_1 = unimplemented  {imul edx, edx, 0x20}
    
    if (o_1)
        sub_403010()
        noreturn
    
    sub_402bc0(arg3, *(arg1 + 0x320) + zx.d(*(*(arg1 + 0x31c) + (arg2 << 1))) * 0x100)
}
