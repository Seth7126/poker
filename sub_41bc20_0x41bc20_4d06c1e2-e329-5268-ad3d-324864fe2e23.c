// ============================================================
// 函数名称: sub_41bc20
// 虚拟地址: 0x41bc20
// WARP GUID: 4d06c1e2-e329-5268-ad3d-324864fe2e23
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4030d0, sub_403844, sub_403898, sub_4032c4
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_41bc20(void* arg1 @ ebp, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: sub_4030d0(*(arg1 - 8))
    sub_4030d0(*(arg1 - 8))
    sub_403844()
    sub_403898(arg2)
    int32_t* entry_ebx
    sub_4030d0(entry_ebx[1])
    void* esi = *(arg1 - 8)
    entry_ebx[1] = esi
    *(esi + 0xc) = entry_ebx
    int32_t edx
    edx.w = 0xfffd
    *(esi + 8) = sub_4032c4(entry_ebx, edx)
    int32_t* edx_1 = entry_ebx
    int32_t* eax_3 = entry_ebx
    entry_ebx.w = 0xfffd
    return sub_4032ac(eax_3, edx_1)
}
