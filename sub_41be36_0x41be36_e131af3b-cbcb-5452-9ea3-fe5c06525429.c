// ============================================================
// 函数名称: sub_41be36
// 虚拟地址: 0x41be36
// WARP GUID: e131af3b-cbcb-5452-9ea3-fe5c06525429
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4030d0, sub_403844, sub_403898, sub_403df8, sub_4032c4
// [被调用的父级函数]: 无
// ============================================================

void*sub_41be36(int32_t* arg1 @ ebp, int32_t* arg2, void* const arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: sub_4030d0(arg1[-1])
    sub_4030d0(arg1[-1])
    sub_403844()
    sub_403898(arg2)
    int32_t* entry_ebx
    sub_4030d0(entry_ebx[1])
    entry_ebx[1] = arg1[-1]
    
    if (arg1[-1] != 0)
        void* eax_2 = arg1[-1]
        *(eax_2 + 0xc) = entry_ebx
        int32_t edx
        edx.w = 0xfffd
        *(eax_2 + 8) = sub_4032c4(entry_ebx, edx)
        void* eax_6 = arg1[-1]
        *(eax_6 + 0x14) = entry_ebx
        int32_t edx_1
        edx_1.w = 0xfffc
        *(eax_6 + 0x10) = sub_4032c4(entry_ebx, edx_1)
    
    int32_t* edx_3 = entry_ebx
    int32_t* eax_10 = entry_ebx
    entry_ebx.w = 0xfffd
    sub_4032ac(eax_10, edx_3)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg2
    sub_403df8(&arg1[-0x12])
    *arg1
    return &arg1[-0x12]
}
