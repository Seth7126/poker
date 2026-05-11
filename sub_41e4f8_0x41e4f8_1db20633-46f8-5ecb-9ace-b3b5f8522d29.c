// ============================================================
// 函数名称: sub_41e4f8
// 虚拟地址: 0x41e4f8
// WARP GUID: 1db20633-46f8-5ecb-9ace-b3b5f8522d29
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetObjectA
// [内部子函数调用]: sub_41dc74, sub_402d00, sub_419e00, sub_41e2e0
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_41e4f8(HGDIOBJ arg1, int16_t arg2, int32_t arg3 @ eax, HPALETTE arg4)
{
    // 第一条实际指令: if (arg2 != 2 || arg1 == 0)
    if (arg2 != 2 || arg1 == 0)
        sub_419e00(data_53069c)
        noreturn
    
    sub_41e2e0(arg3)
    void pv
    sub_402d00(&pv, 0x54, 0)
    GetObjectA(arg1, 0x54, &pv)
    int32_t var_44
    
    if (var_44 == 0)
        int32_t var_40_1 = 0
    
    sub_41dc74(arg4, arg1, arg3, &pv)
    *(*(arg3 + 0x20) + 0x70) = 0
    int32_t eax_6
    eax_6.b = (*(*arg3 + 0x24))() != 0
    *(arg3 + 0x1a) = eax_6.b
    return (*(*arg3 + 0x10))()
}
