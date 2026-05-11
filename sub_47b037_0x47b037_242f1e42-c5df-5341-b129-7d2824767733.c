// ============================================================
// 函数名称: sub_47b037
// 虚拟地址: 0x47b037
// WARP GUID: 242f1e42-c5df-5341-b129-7d2824767733
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_403008, sub_402bdc, sub_47b09a, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_47b037(void* arg1 @ ebp, void* arg2 @ esi, int32_t arg3 @ edi, int32_t (* arg4)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3))
{
    // 第一条实际指令: sub_404054(arg1 - 0x104, *(arg1 + 8), 0xff)
    sub_404054(arg1 - 0x104, *(arg1 + 8), 0xff)
    bool o = unimplemented  {imul eax, edi, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t ecx_2 = *(arg1 - 4) - 1
    
    if (ecx_2 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul ecx, ecx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t ecx_4
    ecx_4.b = 0x19
    sub_402bdc(*(arg2 + 0xab0) + arg3 * 0x81c0 + (ecx_2 + 1) * 0x118 - 0xd6, arg1 - 0x104, ecx_4.b)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    arg4 = sub_47b0b5
    return sub_47b09a(arg1) __tailcall
}
